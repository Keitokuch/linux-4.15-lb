#include <linux/kernel.h>
#include <asm/fpu/api.h>
#include <linux/syscalls.h>

#include "jc_mlp.h"


#define dtype float
#define NR_FEAT     15

dtype w1[] = {
    0.565644,  0.384824, -0.042528, -0.264426,  0.472312, -0.282259, -0.014167, -0.528233,  0.622656, -0.373769,
    0.287381,  1.005889,  0.181242, -1.291967,  1.100194, -0.772200, -0.235354, -0.829178,  0.248697,  1.168082,
    -0.281433, -0.546903,  0.032876,  0.559641, -0.228221,  0.103177,  0.620234,  0.318789, -0.633047, -0.006017,
    0.047218,  0.084886, -0.134755,  0.645489, -0.277912,  0.517039,  0.651821, -0.285480, -0.003520, -0.437448,
    -0.161385, -0.442559, -0.035489,  0.570436,  0.079949,  0.741253,  0.291243,  0.586947, -0.180183, -0.177284,
    -0.396542,  0.055728,  0.112597,  0.317440, -0.177967,  0.211646, -0.254014, -0.166693, -0.414425,  0.561991,
    0.407785,  0.664266, -0.077182, -0.454090,  0.397967,  0.089694, -0.946674, -0.246415,  0.240792, -0.013765,
    -0.322740, -0.332058,  0.104680,  0.449407, -0.545375,  0.934457,  0.600992,  0.594059, -0.398014,  0.048134,
    0.199440,  0.236234, -0.549774,  0.362871,  0.128888, -0.064394,  0.194858,  0.173756, -0.087557,  0.147654,
    0.133639,  0.000841, -0.001098,  0.626147, -0.152287,  0.110689,  0.108449, -0.463610,  0.171219,  0.310098,
    -0.440701,  0.361575, -0.302418,  0.573317,  0.322387,  0.602443, -0.314726,  0.031837,  0.124628, -0.135573,
    0.159068, -0.059842, -0.526570, -0.010963,  0.311802,  0.360409, -0.103766,  0.363927, -0.428252,  0.085832,
    -0.080852,  0.010944, -0.331394,  0.068851,  0.145650,  0.842668,  0.369900, -0.027606, -0.326165, -0.271815,
    -0.219882, -0.526053, -0.540803,  0.893084, -1.002251,  0.007923,  1.298324,  0.295529, -0.469116, -0.790421,
    0.936136,  0.879596, -0.094900, -0.326074,  0.891442, -1.032957, -0.173408, -0.906972,  0.650875,  0.917579,
};

dtype b1[] = {
    -0.257286, -0.220656, -0.312300, 0.485314, -0.377361, 0.445350, 0.321995, 0.456795, -0.164362, -0.260494,
};

dtype w2[] = {-0.409050, -0.578690, -0.446989, 0.361227, -0.401546, 0.258594, 0.760240, 0.524665, -0.385637, -0.721390,};

dtype b2[] = {0.405319};

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
                m2d(Z, i, j) = m2d(Z, i, j) + (m2d(X, i, k) * m2d(Y, k, j));
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
    float output;
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

    /* printk("forward_pass output: %08x", ftox(output)); */
    return output > 0.5 ? 1 : 0;
}

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

