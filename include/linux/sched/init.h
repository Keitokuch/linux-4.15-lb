/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX_SCHED_INIT_H
#define _LINUX_SCHED_INIT_H

/*
 * Scheduler init related prototypes:
 */

extern void sched_init(void);
extern void sched_init_smp(void);
// JC
extern void jc_perf_init(void);

#endif /* _LINUX_SCHED_INIT_H */
