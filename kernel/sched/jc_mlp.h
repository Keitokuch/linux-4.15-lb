#ifndef _SCHED_JC_MLP_H
#define _SCHED_JC_MLP_H

#include <linux/sched.h>

extern int is_jc_sched;

struct jc_lb_data {
    int src_non_pref;
    int delta_hot;
    int cpu_idle;
    int cpu_not_idle;
    int cpu_newly_idle;
    int same_node;
    int prefer_src;
    int prefer_dst;
    int src_len;
    unsigned long src_load;
    unsigned long dst_load;
    int dst_len;
    long delta_faults;
    int extra_fails;
    int buddy_hot;
    unsigned long total_faults;
};

int jc_mlp_main(struct jc_lb_data *data);

#ifdef CONFIG_JC_SCHED_FXDPT
typedef s32 fxdpt_t;
typedef s64 fxdpt_ext;

#define FXDPT_FBITS 11

/* Can't left shift negative int */
/* Add 0.5/-0.5 to round to nearest int  */
#define FXDPT_ONE ((fxdpt_t)((fxdpt_t)1 << FXDPT_FBITS))
#define float_to_fxdpt(F) ((fxdpt_t)((F) * FXDPT_ONE + ((F) >= 0? 0.5 : -0.5)))
#define int_to_fxdpt(F) ((fxdpt_t)((F) * FXDPT_ONE))
/* Extend to double length to avoid overflow */
#define fxdpt_mul(A, B)        \
    ((fxdpt_t)(((fxdpt_ext)(A) * (fxdpt_ext)(B)) >> FXDPT_FBITS))
#define fxdpt_div(A, B)                       \
    ((fxdpt_t)(((fxdpt_ext)(A) * FXDPT_ONE) / (B)))

#define tofloat(T) ((float) ((T)*((float)(1)/(float)(1L << FXDPT_FBITS))))

#define dtype               fxdpt_t
#define ftodtype(F)         float_to_fxdpt(F)
#define itodtype(F)         int_to_fxdpt(F)
#define todtype(F)          itodtype(F)
#define dtype_mul(A, B)     fxdpt_mul(A, B)
#define dtype_div(A, B)     fxdpt_div(A, B)
#else
#define dtype               float
#define dtype_mul(A, B)     ((A) * (B))
#define dtype_div(A, B)     ((A) / (B))
#define ftodtype(F)          ((float)(F))
#define itodtype(F)          ((float)(F))
#define todtype(F)          ((float)(F))
#define tofloat(F)          ((float)(F))
#endif  // JC_SCHED_FXDPT

#endif
