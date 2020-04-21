/* SPDX-License-Identifier: GPL-2.0 */
/*
 * arch/h8300/asm/include/flat.h -- uClinux flat-format executables
 */

#ifndef __H8300_FLAT_H__
#define __H8300_FLAT_H__

#include <asm/unaligned.h>

#define	flat_argvp_envp_on_stack()		1
#define	flat_old_ram_flag(flags)		1
#define	flat_reloc_valid(reloc, size)		((reloc) <= (size))
#define	flat_set_persistent(relval, p)		0

/*
 * on the H8 a couple of the relocations have an instruction in the
 * top byte.  As there can only be 24bits of address space,  we just
 * always preserve that 8bits at the top,  when it isn't an instruction
 * is is 0 (davidm@snapgear.com)
 */

#define	flat_get_relocate_addr(rel)		(rel & ~0x00000001)
static inline int flat_get_addr_from_rp(u32 __user *rp, u32 relval, u32 flags,
					u32 *addr, u32 *persistent)
{
	u32 val = get_unaligned((__force u32 *)rp);
	if (!(flags & FLAT_FLAG_GOTPIC))
		val &= 0x00ffffff;
	*addr = val;
	return 0;
}

static inline int flat_put_addr_at_rp(u32 __user *rp, u32 addr, u32 rel)
{
	u32 *p = (__force u32 *)rp;
	put_unaligned((addr & 0x00ffffff) | (*(char *)p << 24), p);
	return 0;
}

#endif /* __H8300_FLAT_H__ */
Apr 20 18:22:44 ubuntu systemd-logind[223]: Watching system buttons on /dev/input/event0 (Power Button)
Apr 20 18:22:44 ubuntu systemd-logind[223]: Watching system buttons on /dev/input/event1 (AT Translated Set 2 keyboard)
Apr 20 18:22:44 ubuntu systemd-logind[223]: New seat seat0.
Apr 20 18:23:09 ubuntu login[236]: pam_unix(login:session): session opened for user root by LOGIN(uid=0)
Apr 20 18:23:09 ubuntu systemd-logind[223]: New session 1 of user root.
Apr 20 18:23:10 ubuntu systemd: pam_unix(systemd-user:session): session opened for user root by (uid=0)
Apr 20 18:23:11 ubuntu login[265]: ROOT LOGIN  on '/dev/ttyS0'
Apr 20 18:25:16 ubuntu systemd-logind[220]: New seat seat0.
Apr 20 18:25:16 ubuntu systemd-logind[220]: Watching system buttons on /dev/input/event0 (Power Button)
Apr 20 18:25:20 ubuntu systemd-logind[220]: Watching system buttons on /dev/input/event1 (AT Translated Set 2 keyboard)
Apr 20 18:25:30 ubuntu login[231]: pam_unix(login:auth): authentication failure; logname=LOGIN uid=0 euid=0 tty=/dev/ttyS0 ruser= rhost=  user=root
Apr 20 18:25:35 ubuntu login[231]: FAILED LOGIN (1) on '/dev/ttyS0' FOR 'root', Authentication failure
Apr 20 18:25:43 ubuntu login[231]: pam_unix(login:session): session opened for user root by LOGIN(uid=0)
Apr 20 18:25:44 ubuntu systemd-logind[220]: New session 1 of user root.
Apr 20 18:25:44 ubuntu systemd: pam_unix(systemd-user:session): session opened for user root by (uid=0)
Apr 20 18:25:45 ubuntu login[267]: ROOT LOGIN  on '/dev/ttyS0'
Apr 21 00:10:08 ubuntu systemd-logind[1633]: New seat seat0.
Apr 21 00:10:09 ubuntu systemd-logind[1633]: Watching system buttons on /dev/input/event0 (Power Button)
Apr 21 00:10:13 ubuntu systemd-logind[1633]: Watching system buttons on /dev/input/event1 (AT Translated Set 2 keyboard)
Apr 21 00:10:41 ubuntu login[1659]: pam_unix(login:session): session opened for user root by LOGIN(uid=0)
Apr 21 00:10:42 ubuntu systemd-logind[1633]: New session 1 of user root.
Apr 21 00:10:42 ubuntu systemd: pam_unix(systemd-user:session): session opened for user root by (uid=0)
Apr 21 00:10:43 ubuntu login[1705]: ROOT LOGIN  on '/dev/ttyS0'
Apr 21 00:17:01 ubuntu CRON[1730]: pam_unix(cron:session): session opened for user root by (uid=0)
Apr 21 00:17:01 ubuntu CRON[1730]: pam_unix(cron:session): session closed for user root
Apr 21 06:56:04 ubuntu systemd-logind[1636]: New seat seat0.
Apr 21 06:56:08 ubuntu systemd-logind[1636]: Watching system buttons on /dev/input/event0 (Power Button)
Apr 21 06:56:10 ubuntu systemd-logind[1636]: Watching system buttons on /dev/input/event1 (AT Translated Set 2 keyboard)
Apr 21 06:56:24 ubuntu login[1657]: pam_unix(login:session): session opened for user root by LOGIN(uid=0)
Apr 21 06:56:25 ubuntu systemd-logind[1636]: New session 1 of user root.
Apr 21 06:56:25 ubuntu systemd: pam_unix(systemd-user:session): session opened for user root by (uid=0)
Apr 21 06:56:26 ubuntu login[1704]: ROOT LOGIN  on '/dev/ttyS0'
Apr 21 07:17:01 ubuntu CRON[4462]: pam_unix(cron:session): session opened for user root by (uid=0)
Apr 21 07:17:01 ubuntu CRON[4462]: pam_unix(cron:session): session closed for user root
Apr 21 17:03:23 ubuntu systemd-logind[1637]: Watching system buttons on /dev/input/event0 (Power Button)
Apr 21 17:03:23 ubuntu systemd-logind[1637]: New seat seat0.
Apr 21 17:03:23 ubuntu systemd-logind[1637]: Watching system buttons on /dev/input/event1 (AT Translated Set 2 keyboard)
Apr 21 17:05:12 ubuntu login[1651]: pam_unix(login:session): session opened for user root by LOGIN(uid=0)
Apr 21 17:05:13 ubuntu systemd-logind[1637]: New session 1 of user root.
Apr 21 17:05:14 ubuntu systemd: pam_unix(systemd-user:session): session opened for user root by (uid=0)
Apr 21 17:05:15 ubuntu login[1699]: ROOT LOGIN  on '/dev/ttyS0'
Apr 21 17:33:13 ubuntu systemd-logind[1637]: New seat seat0.
Apr 21 17:33:16 ubuntu systemd-logind[1637]: Watching system buttons on /dev/input/event0 (Power Button)
Apr 21 17:33:20 ubuntu systemd-logind[1637]: Watching system buttons on /dev/input/event1 (AT Translated Set 2 keyboard)
Apr 21 17:33:50 ubuntu login[1657]: pam_unix(login:session): session opened for user root by LOGIN(uid=0)
Apr 21 17:33:51 ubuntu systemd-logind[1637]: New session 1 of user root.
Apr 21 17:33:51 ubuntu systemd: pam_unix(systemd-user:session): session opened for user root by (uid=0)
Apr 21 17:33:53 ubuntu login[1704]: ROOT LOGIN  on '/dev/ttyS0'
Apr 21 18:17:01 ubuntu CRON[4429]: pam_unix(cron:session): session opened for user root by (uid=0)
Apr 21 18:17:01 ubuntu CRON[4429]: pam_unix(cron:session): session closed for user root
Apr 21 18:22:02 ubuntu systemd-logind[1638]: New seat seat0.
Apr 21 18:22:04 ubuntu systemd-logind[1638]: Watching system buttons on /dev/input/event0 (Power Button)
Apr 21 18:22:10 ubuntu systemd-logind[1638]: Watching system buttons on /dev/input/event1 (AT Translated Set 2 keyboard)
Apr 21 18:33:58 ubuntu login[1681]: pam_unix(login:session): session opened for user root by LOGIN(uid=0)
Apr 21 18:33:59 ubuntu systemd-logind[1638]: New session 1 of user root.
Apr 21 18:33:59 ubuntu systemd: pam_unix(systemd-user:session): session opened for user root by (uid=0)
Apr 21 18:34:00 ubuntu login[1709]: ROOT LOGIN  on '/dev/ttyS0'
Apr 21 18:46:57 ubuntu systemd-logind[1639]: Watching system buttons on /dev/input/event0 (Power Button)
Apr 21 18:46:57 ubuntu systemd-logind[1639]: New seat seat0.
Apr 21 18:46:59 ubuntu systemd-logind[1639]: Watching system buttons on /dev/input/event1 (AT Translated Set 2 keyboard)
Apr 21 18:47:20 ubuntu login[1658]: pam_unix(login:session): session opened for user root by LOGIN(uid=0)
Apr 21 18:47:21 ubuntu systemd-logind[1639]: New session 1 of user root.
Apr 21 18:47:21 ubuntu systemd: pam_unix(systemd-user:session): session opened for user root by (uid=0)
Apr 21 18:47:23 ubuntu login[1706]: ROOT LOGIN  on '/dev/ttyS0'
Apr 21 19:17:02 ubuntu CRON[1736]: pam_unix(cron:session): session opened for user root by (uid=0)
Apr 21 19:17:02 ubuntu CRON[1736]: pam_unix(cron:session): session closed for user root
