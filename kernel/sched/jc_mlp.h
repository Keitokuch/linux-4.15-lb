#ifndef SCHED_JC_MLP
#define SCHED_JC_MLP

#include <linux/sched.h>

#define NR_NODES 2;

extern int is_jc_sched;

struct jc_lb_data {
    int numa_preferred_nid;
    unsigned src_nr_running;
    unsigned src_nr_preferred_running;
    unsigned long src_load;
    unsigned long dst_load;
    int cpu_idle;
    int cpu_not_idle;
    int cpu_newly_idle;
    int buddy_hot;
    unsigned nr_balance_failed;
    unsigned cache_nice_tries;
    s64 delta;
    unsigned long p_numa_faults[NR_NODES];
    unsigned long total_numa_faults;
}

int jc_mlp_main(void);

#endif
