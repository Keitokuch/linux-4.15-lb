#include <linux/kernel.h>
#include <asm/fpu/api.h>
#include <linux/syscalls.h>

#include "jc_mlp.h"


#define NR_FEAT     15
#define ftod(F)        ftodtype(F)

dtype w1[] = {
    ftod(0.565644),  ftod(0.384824), ftod(-0.042528), ftod(-0.264426),  ftod(0.472312), ftod(-0.282259), ftod(-0.014167), ftod(-0.528233),  ftod(0.622656), ftod(-0.373769),
    ftod(0.287381),  ftod(1.005889),  ftod(0.181242), ftod(-1.291967),  ftod(1.100194), ftod(-0.772200), ftod(-0.235354), ftod(-0.829178),  ftod(0.248697),  ftod(1.168082),
    ftod(-0.281433), ftod(-0.546903),  ftod(0.032876),  ftod(0.559641), ftod(-0.228221),  ftod(0.103177),  ftod(0.620234),  ftod(0.318789), ftod(-0.633047), ftod(-0.006017),
    ftod(0.047218),  ftod(0.084886), ftod(-0.134755),  ftod(0.645489), ftod(-0.277912),  ftod(0.517039),  ftod(0.651821), ftod(-0.285480), ftod(-0.003520), ftod(-0.437448),
    ftod(-0.161385), ftod(-0.442559), ftod(-0.035489),  ftod(0.570436),  ftod(0.079949),  ftod(0.741253),  ftod(0.291243),  ftod(0.586947), ftod(-0.180183), ftod(-0.177284),
    ftod(-0.396542),  ftod(0.055728),  ftod(0.112597),  ftod(0.317440), ftod(-0.177967),  ftod(0.211646), ftod(-0.254014), ftod(-0.166693), ftod(-0.414425),  ftod(0.561991),
    ftod(0.407785),  ftod(0.664266), ftod(-0.077182), ftod(-0.454090),  ftod(0.397967),  ftod(0.089694), ftod(-0.946674), ftod(-0.246415),  ftod(0.240792), ftod(-0.013765),
    ftod(-0.322740), ftod(-0.332058),  ftod(0.104680),  ftod(0.449407), ftod(-0.545375),  ftod(0.934457),  ftod(0.600992),  ftod(0.594059), ftod(-0.398014),  ftod(0.048134),
    ftod(0.199440),  ftod(0.236234), ftod(-0.549774),  ftod(0.362871),  ftod(0.128888), ftod(-0.064394),  ftod(0.194858),  ftod(0.173756), ftod(-0.087557),  ftod(0.147654),
    ftod(0.133639),  ftod(0.000841), ftod(-0.001098),  ftod(0.626147), ftod(-0.152287),  ftod(0.110689),  ftod(0.108449), ftod(-0.463610),  ftod(0.171219),  ftod(0.310098),
    ftod(-0.440701),  ftod(0.361575), ftod(-0.302418),  ftod(0.573317),  ftod(0.322387),  ftod(0.602443), ftod(-0.314726),  ftod(0.031837),  ftod(0.124628), ftod(-0.135573),
    ftod(0.159068), ftod(-0.059842), ftod(-0.526570), ftod(-0.010963),  ftod(0.311802),  ftod(0.360409), ftod(-0.103766),  ftod(0.363927), ftod(-0.428252),  ftod(0.085832),
    ftod(-0.080852),  ftod(0.010944), ftod(-0.331394),  ftod(0.068851),  ftod(0.145650),  ftod(0.842668),  ftod(0.369900), ftod(-0.027606), ftod(-0.326165), ftod(-0.271815),
    ftod(-0.219882), ftod(-0.526053), ftod(-0.540803),  ftod(0.893084), ftod(-1.002251),  ftod(0.007923),  ftod(1.298324),  ftod(0.295529), ftod(-0.469116), ftod(-0.790421),
    ftod(0.936136),  ftod(0.879596), ftod(-0.094900), ftod(-0.326074),  ftod(0.891442), ftod(-1.032957), ftod(-0.173408), ftod(-0.906972),  ftod(0.650875),  ftod(0.917579),
};

dtype b1[] = {
    ftod(-0.257286), ftod(-0.220656), ftod(-0.312300), ftod(0.485314), ftod(-0.377361), ftod(0.445350), ftod(0.321995), ftod(0.456795), ftod(-0.164362), ftod(-0.260494),
};

dtype w2[] = { ftod(-0.409050), ftod(-0.578690), ftod(-0.446989), ftod(0.361227), ftod(-0.401546), ftod(0.258594), ftod(0.760240), ftod(0.524665), ftod(-0.385637), ftod(-0.721390),};

dtype b2[] = { ftod(0.405319) };

#define m2d(x, i, j)    ((x)->values[i * (x)->ncol + j])
#define m1d(x, i)       ((x)->values[i])
#define _ReLU(x)        (x > 0 ?  x : 0)
#define ftox(f)         (*(unsigned *)&((float){f}))

int is_jc_sched = 0;
EXPORT_SYMBOL(is_jc_sched);

struct matrix {
    int nrow;
    int ncol;
    dtype *values;
};

static inline void matmul(struct matrix *X, struct matrix *Y, struct matrix *Z) 
{
    int i, j, k;
    for(i = 0; i < X->nrow; i++)
        for(j = 0; j < Y->ncol; j++)
            for(k = 0; k < X->ncol; k++)
            {
                m2d(Z, i, j) = m2d(Z, i, j) + dtype_mul(m2d(X, i, k), m2d(Y, k, j));
            }
}

static inline void matadd(struct matrix *X, struct matrix *Y, struct matrix *Z)
{
    int i;
    for (i = 0; i < X->nrow * X->ncol; i++) {
        Z->values[i] = X->values[i] + Y->values[i];
    }
}

static inline void ReLU(struct matrix *X)
{
    int i;
    for (i = 0; i < X->nrow * X->ncol; i++) {
        X->values[i] = _ReLU(X->values[i]);
    }
}

static int forward_pass(struct matrix *input)
{
    dtype output;
    dtype o1[10] = {0};
    dtype o2[10] = {0};

    struct matrix W1 = {NR_FEAT, 10, w1};
    struct matrix out1 = {1, 10, o1};
    struct matrix B1 = {1, 10, b1};
    struct matrix W2 = {10, 1, w2};
    struct matrix out2 = {1, 1, o2};
    struct matrix B2 = {1, 1, b2};

    matmul(input, &W1, &out1);

    matadd(&out1, &B1, &out1);

    ReLU(&out1);

    matmul(&out1, &W2, &out2);

    matadd(&out2, &B2, &out2);

    output = m1d(&out2, 0);

    /* printk("forward_pass output: %08x", ftox(tofloat(output))); */
    return output > ftod(0.5) ? 1 : 0;
}

#ifdef CONFIG_JC_SCHED_FXDPT
int jc_mlp_main(struct jc_lb_data *data) {
    int output;
    struct matrix input = {1, NR_FEAT, NULL};
    dtype delta_faults;

    if (data->total_faults)
        delta_faults = dtype_div(itodtype(data->delta_faults), itodtype(data->total_faults));
    else
        delta_faults = itodtype(data->delta_faults);

    input.values = (dtype[]) {
        itodtype(data->src_non_pref),
        itodtype(data->delta_hot),
        itodtype(data->cpu_idle),
        itodtype(data->cpu_not_idle),
        itodtype(data->cpu_newly_idle),
        itodtype(data->same_node),
        itodtype(data->prefer_src),
        itodtype(data->prefer_dst),
        itodtype(data->src_len) - itodtype(2),
        dtype_div(itodtype(data->src_load), itodtype(1000)),
        dtype_div(itodtype(data->dst_load), itodtype(1000)),
        itodtype(data->dst_len),
        delta_faults,
        itodtype(data->extra_fails),
        itodtype(data->buddy_hot),
    };

    output = forward_pass(&input);

    return output;
}
#else
int jc_mlp_main(struct jc_lb_data *data) {
    int output;
    struct matrix input = {1, NR_FEAT, NULL};
    dtype delta_faults;

    kernel_fpu_begin();

    if (data->total_faults)
        delta_faults = (dtype)data->delta_faults / data->total_faults;
    else
        delta_faults = (dtype)data->delta_faults;

    input.values = (dtype[]) {
        (dtype)data->src_non_pref,
        (dtype)data->delta_hot,
        (dtype)data->cpu_idle,
        (dtype)data->cpu_not_idle,
        (dtype)data->cpu_newly_idle,
        (dtype)data->same_node,
        (dtype)data->prefer_src,
        (dtype)data->prefer_dst,
        (dtype)data->src_len - 2,
        (dtype)data->src_load / 1000,
        (dtype)data->dst_load / 1000,
        (dtype)data->dst_len,
        delta_faults,
        (dtype)data->extra_fails,
        (dtype)data->buddy_hot,
    };

    output = forward_pass(&input);

    kernel_fpu_end();

    return output;
}
#endif

