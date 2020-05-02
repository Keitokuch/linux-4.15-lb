#ifndef SCHED_JC_MLP
#define SCHED_JC_MLP

#include <linux/sched.h>

#define NR_NODES 2;

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

#endif
