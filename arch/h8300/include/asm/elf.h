/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ASM_H8300_ELF_H
#define __ASM_H8300_ELF_H

/*
 * ELF register definitions..
 */

#include <asm/ptrace.h>
#include <asm/user.h>

typedef unsigned long elf_greg_t;

#define ELF_NGREG (sizeof(struct user_regs_struct) / sizeof(elf_greg_t))
typedef elf_greg_t elf_gregset_t[ELF_NGREG];
typedef unsigned long elf_fpregset_t;

/*
 * This is used to ensure we don't load something for the wrong architecture.
 */
#define elf_check_arch(x) ((x)->e_machine == EM_H8_300)

/*
 * These are used to set parameters in the core dumps.
 */
#define ELF_CLASS	ELFCLASS32
#define ELF_DATA	ELFDATA2MSB
#define ELF_ARCH	EM_H8_300
#if defined(CONFIG_CPU_H8300H)
#define ELF_CORE_EFLAGS 0x810000
#endif
#if defined(CONFIG_CPU_H8S)
#define ELF_CORE_EFLAGS 0x820000
#endif

#define ELF_PLAT_INIT(_r) do { (_r)->er1 = 0; } while (0)

#define ELF_EXEC_PAGESIZE	4096

/* This is the location that an ET_DYN program is loaded if exec'ed.  Typical
   use of this is to invoke "./ld.so someprog" to test out a new version of
   the loader.  We need to make sure that it is out of the way of the program
   that it will "exec", and that there is sufficient room for the brk.  */

#define ELF_ET_DYN_BASE         0xD0000000UL

/* This yields a mask that user programs can use to figure out what
   instruction set this cpu supports.  */

#define ELF_HWCAP	(0)

/* This yields a string that ld.so will use to load implementation
   specific libraries for optimization.  This is more specific in
   intent than poking at uname or /proc/cpuinfo.  */

#define ELF_PLATFORM  (NULL)

#define R_H8_NONE       0
#define R_H8_DIR32      1
#define R_H8_DIR32_28   2
#define R_H8_DIR32_24   3
#define R_H8_DIR32_16   4
#define R_H8_DIR32U     6
#define R_H8_DIR32U_28  7
#define R_H8_DIR32U_24  8
#define R_H8_DIR32U_20  9
#define R_H8_DIR32U_16 10
#define R_H8_DIR24     11
#define R_H8_DIR24_20  12
#define R_H8_DIR24_16  13
#define R_H8_DIR24U    14
#define R_H8_DIR24U_20 15
#define R_H8_DIR24U_16 16
#define R_H8_DIR16     17
#define R_H8_DIR16U    18
#define R_H8_DIR16S_32 19
#define R_H8_DIR16S_28 20
#define R_H8_DIR16S_24 21
#define R_H8_DIR16S_20 22
#define R_H8_DIR16S    23
#define R_H8_DIR8      24
#define R_H8_DIR8U     25
#define R_H8_DIR8Z_32  26
#define R_H8_DIR8Z_28  27
#define R_H8_DIR8Z_24  28
#define R_H8_DIR8Z_20  29
#define R_H8_DIR8Z_16  30
#define R_H8_PCREL16   31
#define R_H8_PCREL8    32
#define R_H8_BPOS      33
#define R_H8_PCREL32   34
#define R_H8_GOT32O    35
#define R_H8_GOT16O    36
#define R_H8_DIR16A8   59
#define R_H8_DIR16R8   60
#define R_H8_DIR24A8   61
#define R_H8_DIR24R8   62
#define R_H8_DIR32A16  63
#define R_H8_ABS32     65
#define R_H8_ABS32A16 127

#endif
Apr 20 18:22:44 ubuntu kernel: [    0.000000] Linux version 4.15.0-55-generic (buildd@lcy01-amd64-029) (gcc version 7.4.0 (Ubuntu 7.4.0-1ubuntu1~18.04.1)) #60-Ubuntu SMP Tue Jul 2 18:22:20 UTC 2019 (Ubuntu 4.15.0-55.60-generic 4.15.18)
Apr 20 18:22:44 ubuntu kernel: [    0.000000] Command line: root=/dev/sda rw console=ttyS0
Apr 20 18:22:44 ubuntu kernel: [    0.000000] KERNEL supported cpus:
Apr 20 18:22:44 ubuntu kernel: [    0.000000]   Intel GenuineIntel
Apr 20 18:22:44 ubuntu kernel: [    0.000000]   AMD AuthenticAMD
Apr 20 18:22:44 ubuntu kernel: [    0.000000]   Centaur CentaurHauls
Apr 20 18:22:44 ubuntu kernel: [    0.000000] x86/fpu: x87 FPU will use FXSAVE
Apr 20 18:22:44 ubuntu kernel: [    0.000000] e820: BIOS-provided physical RAM map:
Apr 20 18:22:44 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x0000000000000000-0x000000000009fbff] usable
Apr 20 18:22:44 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x000000000009fc00-0x000000000009ffff] reserved
Apr 20 18:22:44 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x00000000000f0000-0x00000000000fffff] reserved
Apr 20 18:22:44 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x0000000000100000-0x000000001ffdefff] usable
Apr 20 18:22:44 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x000000001ffdf000-0x000000001fffffff] reserved
Apr 20 18:22:44 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x000000rectly.
 It can be safely removed

Package: firefox-geckodriver
Description-md5: f720f625e9a0770cb777ddb0c62c22e3
Description-en: Safe and easy web browser from Mozilla - geckodriver
 Firefox delivers safe, easy web browsing. A familiar user interface,
 enhanced security features including protection from online identity theft,
 and integrated search let you get the most out of the web.
 .
 This package contains geckodriver, a proxy for using W3C WebDriver-compatible
 clients (such as selenium) to interact with Gecko-based browsers. See
 https://firefox-source-docs.mozilla.org/testing/geckodriver/ for details.

Package: firefox-locale-af
Description-md5: 1f2d31c5ec337989fa73d4561a877f98
Description-en: Afrikaans language pack for Firefox
 This package contains Afrikaans translations and search plugins
 for Firefox

Package: firefox-locale-an
Description-md5: 84dc3959cabfc22bb848244498e5653a
Description-en: Aragonese language pack for Firefox
 This package contains Aragonese translations and search plugins
 for Firefox

Package: firefox-locale-ar
Description-md5: a5123286dfa8a3ded7978c0ec00ec6f1
Description-en: Arabic language pack for Firefox
 This package contains Arabic translations and search plugins
 for Firefox

Package: firefox-locale-as
Description-md5: bc79d90071e5d3639a93287638590a8e
Description-en: Transitional package for unavailable language
 This language is unavailable for the current version of Firefox
 .
 This is an empty transitional package to ensure a clean upgrade
 process. You can safely remove this package after installation.

Package: firefox-locale-ast
Description-md5: f648bf0b51344fe4fc8b6419faaf903f
Description-en: Asturian language pack for Firefox
 This package contains Asturian translations and search plugins
 for Firefox

Package: firefox-locale-az
Description-md5: 43fa8dcddb7f4272224420d5f3548139
Description-en: Azerbaijani language pack for Firefox
 This package contains Azerbaijani translations and search plugins
 for Firefox

Package: firefox-locale-be
Description-md5: 7b231b0d3f58acf262a12b2168cb358c
Description-en: Belarusian language pack for Firefox
 This package contains Belarusian translations and search plugins
 for Firefox

Package: firefox-locale-bg
Description-md5: a6418377c6a1864fbec5d0096027c80b
Description-en: Bulgarian language pack for Firefox
 This package contains Bulgarian translations and search plugins
 for Firefox

Package: firefox-locale-bn
Description-md5: cd17d1988001fce46f906d72ce3c6612
Description-en: Bengali language pack for Firefox
 This package contains Bengali translations and search plugins
 for Firefox

Package: firefox-locale-br
Description-md5: 880da4a954cd5c32e28bc4be50b8dea2
Description-en: Breton language pack for Firefox
 This package contains Breton translations and search plugins
 for Firefox

Package: firefox-locale-bs
Description-md5: 5ee279fa3b945b639bc360970fc44d88
Description-en: Bosnian language pack for Firefox
 This package contains Bosnian translations and search plugins
 for Firefox

Package: firefox-locale-ca
Description-md5: d48166338c00f06f6c36f6214a5a0d8b
Description-en: Catalan; Valencian language pack for Firefox
 This package contains Catalan; Valencian translations and search plugins
 for Firefox

Package: firefox-locale-cak
Description-md5: b8ca2fd25cdee59588c8335dc03e4f07
Description-en: Kaqchikel language pack for Firefox
 This package contains Kaqchikel translations and search plugins
 for Firefox

Package: firefox-locale-cs
Description-md5: 9b0b230a019634cdfd1b60f7fd46b813
Description-en: Czech language pack for Firefox
 This package contains Czech translations and search plugins
 for Firefox

Package: firefox-locale-csb
Description-md5: bc79d90071e5d3639a93287638590a8e
Description-en: Transitional package for unavailable language
 This language is unavailable for the current version of Firefox
 .
 This is an empty transitional package to ensure a clean upgrade
 process. You can safely remove this package after installation.

Package: firefox-locale-cy
Description-md5: 9f3df834aa7f35a8968d57963f462187
Description-en: Welsh language pack for Firefox
 This package contains Welsh translations and search plugins
 for Firefox

Package: firefox-locale-da
Description-md5: 25350d542907c601644fdbaf48ce9060
Description-en: Danish language pack for Firefox
 This package contains Danish translations and search plugins
 for Firefox

Package: firefox-locale-de
Description-md5: 97a5b441966c2394117490ceebbb8584
Description-en: German language pack for Firefox
 This package contains German translations and search plugins
 for Firefox

Package: firefox-locale-el
Description-md5: f0378f5c3eae2c3f377fbc483e6581b0
Description-en: Greek language pack for Firefox
 This package contains Greek translations and search plugins
 for Firefox

Package: firefox-locale-en
Description-md5: 59e7e034b5f9626737da9a2c21a3e6b4
Description-en: English language pack for Firefox
 This package contains English translations and search plugins
 for Firefox

Package: firefox-locale-eo
Description-md5: 1b15bec1df3ef8869a632d474dfb2589
Description-en: Esperanto language pack for Firefox
 This package contains Esperanto translations and search plugins
 for Firefox

Package: firefox-locale-es
Description-md5: 30083dcb82dfa2029aeabd0206ce0f4b
Description-en: Spanish; Castilian language pack for Firefox
 This package contains Spanish; Castilian translations and search plugins
 for Firefox

Package: firefox-locale-et
Description-md5: 334b47c1e5a384da36ae89623fec8e70
Description-en: Estonian language pack for Firefox
 This package contains Estonian translations and search plugins
 for Firefox

Package: firefox-locale-eu
Description-md5: af348a109ea600cac4199bf41ea027f2
Description-en: Basque language pack for Firefox
 This package contains Basque translations and search plugins
 for Firefox

Package: firefox-locale-fa
Description-md5: 39c9ec90bfa422dbe322c5144c9719eb
Description-en: Persian language pack for Firefox
 This package contains Persian translations and search plugins
 for Firefox

Package: firefox-locale-fi
Description-md5: 845195bd76d02590d0c2a74ed1b5c5f2
Description-en: Finnish language pack for Firefox
 This package contains Finnish translations and search plugins
 for Firefox

Package: firefox-locale-fr
Description-md5: 4b599250252777b1f0b2e86222826241
Description-en: French language pack for Firefox
 This package contains French translations and search plugins
 for Firefox

Package: firefox-locale-fy
Description-md5: 73e0293d227dc25de2183bbda4ffb994
Description-en: Western Frisian language pack for Firefox
 This package contains Western Frisian translations and search plugins
 for Firefox

Package: firefox-locale-ga
Description-md5: 3989bf0d690ce80122175c0328ae435d
Description-en: Irish language pack for Firefox
 This package contains Irish translations and search plugins
 for Firefox

Package: firefox-locale-gd
Description-md5: f88ffac5fcd5341c9502358cb67b49f1
Description-en: Gaelic; Scottish Gaelic language pack for Firefox
 This package contains Gaelic; Scottish Gaelic translations and search plugins
 for Firefox

Package: firefox-locale-gl
Description-md5: f411e16f3f4a2f154a90570e3ca52ef8
Description-en: Galician language pack for Firefox
 This package contains Galician translations and search plugins
 for Firefox

Package: firefox-locale-gn
Description-md5: 778cd0d0c1cb677512d998134d223dc4
Description-en: Guarani language pack for Firefox
 This package contains Guarani translations and search plugins
 for Firefox

Package: firefox-locale-gu
Description-md5: c646198c5d0155da51530f8b2225818b
Description-en: Gujarati language pack for Firefox
 This package contains Gujarati translations and search plugins
 for Firefox

Package: firefox-locale-he
Description-md5: 8d33d6616f2426b1fe3287417f0d7949
Description-en: Hebrew language pack for Firefox
 This package contains Hebrew translations and search plugins
 for Firefox

Package: firefox-locale-hi
Description-md5: 29f96336756fa58ec44eefd686bd6e85
Description-en: Hindi language pack for Firefox
 This package contains Hindi translations and search plugins
 for Firefox

Package: firefox-locale-hr
Description-md5: 4138741435206cca66b4c3941d2b6e82
Description-en: Croatian language pack for Firefox
 This package contains Croatian translations and search plugins
 for Firefox

Package: firefox-locale-hsb
Description-md5: 0eb6ed804f0de00384a7def562d6544b
Description-en: Sorbian, Upper language pack for Firefox
 This package contains Sorbian, Upper translations and search plugins
 for Firefox

Package: firefox-locale-hu
Description-md5: 7587d24fac9230de0dab2a74b1b3c298
Description-en: Hungarian language pack for Firefox
 This package contains Hungarian translations and search plugins
 for Firefox

Package: firefox-locale-hy
Description-md5: 2278344f15e1efe17aecd1af5a2be846
Description-en: Armenian language pack for Firefox
 This package contains Armenian translations and search plugins
 for Firefox

Package: firefox-locale-ia
Description-md5: 66a962472fb500741f5e10fe8ef82bad
Description-en: Interlingua language pack for Firefox
 This package contains Interlingua translations and search plugins
 for Firefox

Package: firefox-locale-id
Description-md5: 568a225a428289bfedbfee77f12ef445
Description-en: Indonesian language pack for Firefox
 This package contains Indonesian translations and search plugins
 for Firefox

Package: firefox-locale-is
Description-md5: 3a574633745f9b6d97f07f1c738599a3
Description-en: Icelandic language pack for Firefox
 This package contains Icelandic translations and search plugins
 for Firefox

Package: firefox-locale-it
Description-md5: 67e195ac5003115f8cafa0ec0b0ec849
Description-en: Italian language pack for Firefox
 This package contains Italian translations and search plugins
 for Firefox

Package: firefox-locale-ja
Description-md5: aa0b0e800989cac3ce480ef7507c17d5
Description-en: Japanese language pack for Firefox
 This package contains Japanese translations and search plugins
 for Firefox

Package: firefox-locale-ka
Description-md5: 7943b0997c58e1187648de81c841bd0a
Description-en: Georgian language pack for Firefox
 This package contains Georgian translations and search plugins
 for Firefox

Package: firefox-locale-kab
Description-md5: 19f7669d9e291fce20d8f1758c87846c
Description-en: Kabyle language pack for Firefox
 This package contains Kabyle translations and search plugins
 for Firefox

Package: firefox-locale-kk
Description-md5: 98ad9668e81080f67619b3468ea616a9
Description-en: Kazakh language pack for Firefox
 This package contains Kazakh translations and search plugins
 for Firefox

Package: firefox-locale-km
Description-md5: 5244e85b69105bab39ff55a3e06c2079
Description-en: Central Khmer language pack for Firefox
 This package contains Central Khmer translations and search plugins
 for Firefox

Package: firefox-locale-kn
Description-md5: 609de6cf2cadf99b292a639def3e15db
Description-en: Kannada language pack for Firefox
 This package contains Kannada translations and search plugins
 for Firefox

Package: firefox-locale-ko
Description-md5: 7477cc3b85c1cc2886c7438ffec39b8d
Description-en: Korean language pack for Firefox
 This package contains Korean translations and search plugins
 for Firefox

Package: firefox-locale-ku
Description-md5: bc79d90071e5d3639a93287638590a8e
Description-en: Transitional package for unavailable language
 This language is unavailable for the current version of Firefox
 .
 This is an empty transitional package to ensure a clean upgrade
 process. You can safely remove this package after installation.

Package: firefox-locale-lg
Description-md5: bc79d90071e5d3639a93287638590a8e
Description-en: Transitional package for unavailable language
 This language is unavailable for the current version of Firefox
 .
 This is an empty transitional package to ensure a clean upgrade
 process. You can safely remove this package after installation.

Package: firefox-locale-lt
Description-md5: 519f3c51c7a90ee972069b44a1acef4e
Description-en: Lithuanian language pack for Firefox
 This package contains Lithuanian translations and search plugins
 for Firefox

Package: firefox-locale-lv
Description-md5: 355c458949586e8977646d1ce6c5096d
Description-en: Latvian language pack for Firefox
 This package contains Latvian translations and search plugins
 for Firefox

Package: firefox-locale-mai
Description-md5: bc79d90071e5d3639a93287638590a8e
Description-en: Transitional package for unavailable language
 This language is unavailable for the current version of Firefox
 .
 This is an empty transitional package to ensure a clean upgrade
 process. You can safely remove this package after installation.

Package: firefox-locale-mk
Description-md5: 0731fc46c1b1fae2ba6f6b1105017640
Description-en: Macedonian language pack for Firefox
 This package contains Macedonian translations and search plugins
 for Firefox

Package: firefox-locale-ml
Description-md5: bc79d90071e5d3639a93287638590a8e
Description-en: Transitional package for unavailable language
 This language is unavailable for the current version of Firefox
 .
 This is an empty transitional package to ensure a clean upgrade
 process. You can safely remove this package after installation.

Package: firefox-locale-mn
Description-md5: bc79d90071e5d3639a93287638590a8e
Description-en: Transitional package for unavailable language
 This language is unavailable for the current version of Firefox
 .
 This is an empty transitional package to ensure a clean upgrade
 process. You can safely remove this package after installation.

Package: firefox-locale-mr
Description-md5: b7ac24ce2d3f6d087e9a9bbf9c956d6a
Description-en: Marathi language pack for Firefox
 This package contains Marathi translations and search plugins
 for Firefox

Package: firefox-locale-ms
Description-md5: 6ffd385f99315a9c4002cee865bb8368
Description-en: Malay language pack for Firefox
 This package contains Malay translations and search plugins
 for Firefox

Package: firefox-locale-my
Description-md5: e3893ca2b33897e758237add94e07f1f
Description-en: Myanmar language pack for Firefox
 This package contains Myanmar translations and search plugins
 for Firefox

Package: firefox-locale-nb
Description-md5: 8a05e67a1c0fa64d86a13ead1dbd4981
Description-en: BokmÃ¥l, Norwegian; Norwegian BokmÃ¥l language pack for Firefox
 This package contains BokmÃ¥l, Norwegian; Norwegian BokmÃ¥l translations and search plugins
 for Firefox

Package: firefox-locale-ne
Description-md5: 349480959c4cda33bc10a4801c2cfeb6
Description-en: Nepali language pack for Firefox
 This package contains Nepali translations and search plugins
 for Firefox

Package: firefox-locale-nl
Description-md5: c8c7d0f350530c7041fcfc71d8f297a2
Description-en: Dutch; Flemish language pack for Firefox
 This package contains Dutch; Flemish translations and search plugins
 for Firefox

Package: firefox-locale-nn
Description-md5: a2434677506d5d2ae1b6f340d5e3b2ee
Description-en: Norwegian Nynorsk; Nynorsk, Norwegian language pack for Firefox
 This package contains Norwegian Nynorsk; Nynorsk, Norwegian translations and search plugins
 for Firefox

Package: firefox-locale-nso
Description-md5: bc79d90071e5d3639a93287638590a8e
Description-en: Transitional package for unavailable language
 This language is unavailable for the current version of Firefox
 .
 This is an empty transitional package to ensure a clean upgrade
 process. You can safely remove this package after installation.

Package: firefox-locale-oc
Description-md5: ff8c937e8ce55461571bb2e54ae72a95
Description-en: Occitan (post 1500) language pack for Firefox
 This package contains Occitan (post 1500) translations and search plugins
 for Firefox

Package: firefox-locale-or
Description-md5: bc79d90071e5d3639a93287638590a8e
Description-en: Transitional package for unavailable language
 This language is unavailable for the current version of Firefox
 .
 This is an empty transitional package to ensure a clean upgrade
 process. You can safely remove this package after installation.

Package: firefox-locale-pa
Description-md5: 3bfbd21e289c4d4ef3e9bd89d92a048f
Description-en: Panjabi; Punjabi language pack for Firefox
 This package contains Panjabi; Punjabi translations and search plugins
 for Firefox

Package: firefox-locale-pl
Description-md5: ffd73141d32fab7a8990d3663208d5ae
Description-en: Polish language pack for Firefox
 This package contains Polish translations and search plugins
 for Firefox

Package: firefox-locale-pt
Description-md5: ba400e83844c93550cd9bbb88c3f610f
Description-en: Portuguese language pack for Firefox
 This package contains Portuguese translations and search plugins
 for Firefox

Package: firefox-locale-ro
Description-md5: bfe768497923b95b007c38b40a8b5c77
Description-en: Romanian language pack for Firefox
 This package contains Romanian translations and search plugins
 for Firefox

Package: firefox-locale-ru
Description-md5: b936b6c575ae73b427a148a37de4ebd1
Description-en: Russian language pack for Firefox
 This package contains Russian translations and search plugins
 for Firefox

Package: firefox-locale-si
Description-md5: d336ad9f3d64d9c8b369c2627a15f388
Description-en: Sinhala; Sinhalese language pack for Firefox
 This package contains Sinhala; Sinhalese translations and search plugins
 for Firefox

Package: firefox-locale-sk
Description-md5: 66f1264b5485237c1ea88079ced9a6a4
Description-en: Slovak language pack for Firefox
 This package contains Slovak translations and search plugins
 for Firefox

Package: firefox-locale-sl
Description-md5: 6fe2fc03696fbf18b2bf180914ee1eb3
Description-en: Slovenian language pack for Firefox
 This package contains Slovenian translations and search plugins
 for Firefox

Package: firefox-locale-sq
Description-md5: 6c9c10ead9f18734cd4a77e1c53deb4a
Description-en: Albanian language pack for Firefox
 This package contains Albanian translations and search plugins
 for Firefox

Package: firefox-locale-sr
Description-md5: 8d2109908f20a4405f139a82593c158f
Description-en: Serbian language pack for Firefox
 This package contains Serbian translations and search plugins
 for Firefox

Package: firefox-locale-sv
Description-md5: 2ea193ea12432f41b53f83a470b59148
Description-en: Swedish language pack for Firefox
 This package contains Swedish translations and search plugins
 for Firefox

Package: firefox-locale-sw
Description-md5: bc79d90071e5d3639a93287638590a8e
Description-en: Transitional package for unavailable language
 This language is unavailable for the current version of Firefox
 .
 This is an empty transitional package to ensure a clean upgrade
 process. You can safely remove this package after installation.

Package: firefox-locale-ta
Description-md5: 6ccedad7af96901a91334720c56bd490
Description-en: Tamil language pack for Firefox
 This package contains Tamil translations and search plugins
 for Firefox

Package: firefox-locale-te
Description-md5: d66752b03661f62d700263ab82e868e7
Description-en: Telugu language pack for Firefox
 This package contains Telugu translations and search plugins
 for Firefox

Package: firefox-locale-th
Description-md5: cc27bcd11daedf111f9aab87632f7263
Description-en: Thai language pack for Firefox
 This package contains Thai translations and search plugins
 for Firefox

Package: firefox-locale-tr
Description-md5: 3c205697910b54cdfc483ed64de82490
Description-en: Turkish language pack for Firefox
 This package contains Turkish translations and search plugins
 for Firefox

Package: firefox-locale-uk
Description-md5: ba467b5c78e88b367e14f3ac484d3816
Description-en: Ukrainian language pack for Firefox
 This package contains Ukrainian translations and search plugins
 for Firefox

Package: firefox-locale-ur
Description-md5: 89651c71d6bbd3991004ecf73aea116f
Description-en: Urdu language pack for Firefox
 This package contains Urdu translations and search plugins
 for Firefox

Package: firefox-locale-uz
Description-md5: ead82ba3c22d7f3a256c2faea30be3e6
Description-en: Uzbek language pack for Firefox
 This package contains Uzbek translations and search plugins
 for Firefox

Package: firefox-locale-vi
Description-md5: e187907de9840d733e0c8a14eafc65ef
Description-en: Vietnamese language pack for Firefox
 This package contains Vietnamese translations and search plugins
 for Firefox

Package: firefox-locale-xh
Description-md5: e188707f31d9656051e8d08cd25f43fa
Description-en: Xhosa language pack for Firefox
 This package contains Xhosa translations and search plugins
 for Firefox

Package: firefox-locale-zh-hans
Description-md5: 3e3ba5b1c9c87d325f38630cc1f5f593
Description-en: Simplified Chinese language pack for Firefox
 This package contains Simplified Chinese translations and search plugins
 for Firefox

Package: firefox-locale-zh-hant
Description-md5: 344951ca63511f11ceb711b1ac9aa10f
Description-en: Traditional Chinese language pack for Firefox
 This package contains Traditional Chinese translations and search plugins
 for Firefox

Package: firefox-locale-zu
Description-md5: bc79d90071e5d3639a93287638590a8e
Description-en: Transitional package for unavailable language
 This language is unavailable for the current version of Firefox
 .
 This is an empty transitional package to ensure a clean upgrade
 process. You can safely remove this package after installation.

Package: fonts-liberation2
Description-md5: 0df131f646b6398a7e94e292a8ffcadf
Description-en: Fonts with the same metrics as Times, Arial and Courier (v2)
 A set of serif, sans-serif and monospaced fonts from Red Hat with
 exactly the same metrics as the (non-free) Microsoft Times, Arial
 and Courier fonts, which implies those fonts can serve as a drop-in
 replacement. The font family is named Liberation.

Package: fonts-opensymbol
Description-md5: c976ef54f80faf44d726a46723d3fbd0
Description-en: OpenSymbol TrueType font
 This package contains the OpenSymbol TrueType font included in
 LibreOffice. This font contains symbols (like fonts as Wingdings(tm)),
 bullets (needed for bullets in LibreOffice) and non-latin character

Package: freeradius
Description-md5: 8f93db923be1449fe3d8c09996bd75e7
Description-en: high-performance and highly configurable RADIUS server
 FreeRADIUS is a high-performance RADIUS server with support for:
  - Authentication by local files, SQL, Kerberos, LDAP, PAM, and more.
  - Powerful policy configuration language.
  - Proxying and replicating requests by any criteria.
  - Support for many EAP types; TLS, PEAP, TTLS, etc.
  - Many vendor-specific attributes.
  - Regexp matching in string attributes.
 and lots more.

Package: freeradius-common
Description-md5: 1c7945f97894906b5aaee9b087c2f56c
Description-en: FreeRADIUS common files
 This package contains common files used by several of the other packages from
 the FreeRADIUS project.

Package: freeradius-config
Description-md5: ac5463a5cccad417d59c5cd9a88dd876
Description-en: FreeRADIUS default config files
 freeradius-config contains the default configuration for FreeRADIUS.
 .
 You can install a custom package which sets "Provides: freeradius-config" in
 order to use the FreeRADIUS packages without any default configuration getting
 into your way.

Package: freeradius-dhcp
Description-md5: 63c03705d2b33716c280099cb1b24d9d
Description-en: DHCP module for FreeRADIUS server
 The FreeRADIUS server can act as a DHCP server, and this module
 is necessary for that.

Package: freeradius-utils
Description-md5: 24b3cb63eaad19ed5b58df947d58078e
Description-en: FreeRADIUS client utilities
 This package contains various client programs and utilities from
 the FreeRADIUS Server project, including:
  - radclient
  - radeapclient
  - radlast
  - radsniff
  - radsqlrelay
  - radtest
  - radwho
  - radzap
  - rlm_ippool_tool
  - smbencrypt

Package: freerdp2-dev
Description-md5: 87d789b26f2354d9180f00d23a677478
Description-en: Free Remote Desktop Protocol library (development files)
 FreeRDP is a libre client/server implementation of the Remote
 Desktop Protocol (RDP).
 .
 This package contains the FreeRDP development files.

Package: freetds-common
Description-md5: a0e753a476f0693fa2896e6335f586c9
Description-en: configuration files for FreeTDS SQL client libraries
 FreeTDS is an implementation of the Tabular DataStream protocol, used for
 connecting to MS SQL and Sybase servers over TCP/IP.
 .
 This package manages the configuration files that are common to all of
 the TDS client library implementations (CT-Lib, DB-Lib, and ODBC),
 stored in /etc/freetds/.

Package: freetds-dev
Description-md5: 66f74ed837454f3b258fb8264488f827
Description-en: MS SQL and Sybase client library (static libs and headers)
 FreeTDS is an implementation of the Tabular DataStream protocol, used for
 connecting to MS SQL and Sybase servers over TCP/IP.
 .
 This package includes the static libraries and header files for TDS, which
 you will need to develop applications that connect to MS SQL servers.  You
 will also need this package if you are installing the Perl DBD::Sybase
 module on your system using CPAN.

Package: g++
Description-md5: 4d44b18774ae5123b7c3f70d940cf655
Description-en: GNU C++ compiler
 This is the GNU C++ compiler, a fairly portable optimizing compiler for C++.
 .
 This is a dependency package providing the default GNU C++ compiler.

Package: g++-7
Description-md5: 0a3fad3367cb994bd16c61b0e16a8b9c
Description-en: GNU C++ compiler
 This is the GNU C++ compiler, a fairly portable optimizing compiler for C++.

Package: g++-7-aarch64-linux-gnu
Description-md5: a7f8482a0c83b82b8aaf4e0cb957d5d0
Description-en: GNU C++ compiler (cross compiler for arm64 architecture)
 This is the GNU C++ compiler, a fairly portable optimizing compiler for C++.
 .
 This package contains C++ cross-compiler for arm64 architecture.

Package: g++-7-arm-linux-gnueabihf
Description-md5: 466636539965b105eeffa2a5b48e2850
Description-en: GNU C++ compiler (cross compiler for armhf architecture)
 This is the GNU C++ compiler, a fairly portable optimizing compiler for C++.
 .
 This package contains C++ cross-compiler for armhf architecture.

Package: g++-7-multilib
Description-md5: 291f2f15035d2eb62358c5157bbae10c
Description-en: GNU C++ compiler (multilib support)
 This is the GNU C++ compiler, a fairly portable optimizing compiler for C++.
 .
 This is a dependency package, depending on development packages
 for the non-default multilib architecture(s).

Package: g++-7-powerpc-linux-gnu
Description-md5: b6993fa4a5bfc950233d89bb6922d796
Description-en: GNU C++ compiler (cross compiler for powerpc architecture)
 This is the GNU C++ compiler, a fairly portable optimizing compiler for C++.
 .
 This package contains C++ cross-compiler for powerpc architecture.

Package: g++-7-powerpc64le-linux-gnu
Description-md5: 9d3a342fa9bb1664c1a3228fb97d3eae
Description-en: GNU C++ compiler (cross compiler for ppc64el architecture)
 This is the GNU C++ compiler, a fairly portable optimizing compiler for C++.
 .
 This package contains C++ cross-compiler for ppc64el architecture.

Package: g++-aarch64-linux-gnu
Description-md5: 841ad5010180ab9999db8cd40c9e8de4
Description-en: GNU C++ compiler for the arm64 architecture
 This is the GNU C++ compiler, a fairly portable optimizing compiler for C++.
 .
 This is a dependency package providing the default GNU C++ cross-compiler
 for the arm64 architecture.

Package: g++-arm-linux-gnueabihf
Description-md5: cc94df779520efff25831739f24599b6
Description-en: GNU C++ compiler for the armhf architecture
 This is the GNU C++ compiler, a fairly portable optimizing compiler for C++.
 .
 This is a dependency package providing the default GNU C++ cross-compiler
 for the armhf architecture.

Package: g++-multilib
Description-md5: 13fdd3cac1ee1ffe86b871f781067316
Description-en: GNU C++ compiler (multilib files)
 This is the GNU C++ compiler, a fairly portable optimizing compiler for C++.
 .
 A dependency package on architectures with multilib support; the package
 contains dependencies for the non-default multilib architecture(s).

Package: g++-powerpc-linux-gnu
Description-md5: f9aeda628b0db2328f1e8a1d68ba71ce
Description-en: GNU C++ compiler for the powerpc architecture
 This is the GNU C++ compiler, a fairly portable optimizing compiler for C++.
 .
 This is a dependency package providing the default GNU C++ cross-compiler
 for the powerpc architecture.

Package: g++-powerpc64le-linux-gnu
Description-md5: 9edb59095912e6cf500ea0092f60122a
Description-en: GNU C++ compiler for the ppc64el architecture
 This is the GNU C++ compiler, a fairly portable optimizing compiler for C++.
 .
 This is a dependency package providing the default GNU C++ cross-compiler
 for the ppc64el architecture.

Package: gcc
Description-md5: c7efd71c7c651a9ac8b2adf36b137790
Description-en: GNU C compiler
 This is the GNU C compiler, a fairly portable optimizing compiler for C.
 .
 This is a dependency package providing the default GNU C compiler.

Package: gcc-7
Description-md5: 394374e688b1afb3af5f419895d29698
Description-en: GNU C compiler
 This is the GNU C compiler, a fairly portable optimizing compiler for C.

Package: gcc-7-aarch64-linux-gnu
Description-md5: 6605467979c7b4a27b8a1c6ed7aabd06
Description-en: GNU C compiler (cross compiler for arm64 architecture)
 This is the GNU C compiler, a fairly portable optimizing compiler for C.
 .
 This package contains C cross-compiler for arm64 architecture.

Package: gcc-7-aarch64-linux-gnu-base
Description-md5: b6e93638a6d08ea7a18929d7cf078e5d
Description-en: GCC, the GNU Compiler Collection (base package)
 This package contains files common to all languages and libraries
 contained in the GNU Compiler Collection (GCC).

Package: gcc-7-arm-linux-gnueabihf
Description-md5: 81e320f4fe3cb20f4878142f5988397e
Description-en: GNU C compiler (cross compiler for armhf architecture)
 This is the GNU C compiler, a fairly portable optimizing compiler for C.
 .
 This package contains C cross-compiler for armhf architecture.

Package: gcc-7-arm-linux-gnueabihf-base
Description-md5: b6e93638a6d08ea7a18929d7cf078e5d
Description-en: GCC, the GNU Compiler Collection (base package)
 This package contains files common to all languages and libraries
 contained in the GNU Compiler Collection (GCC).

Package: gcc-7-base
Description-md5: b6e93638a6d08ea7a18929d7cf078e5d
Description-en: GCC, the GNU Compiler Collection (base package)
 This package contains files common to all languages and libraries
 contained in the GNU Compiler Collection (GCC).

Package: gcc-7-cross-base
Description-md5: 4c157f495e05e11e4ad2e3074ac017e0
Description-en: GCC, the GNU Compiler Collection (library base package)
 This empty package contains changelog and copyright files common to
 all libraries contained in the GNU Compiler Collection (GCC).

Package: gcc-7-doc
Description-md5: bf320d6d806b62ff03b567626d36b1fb
Description-en: Documentation for the GNU compilers (gcc, gobjc, g++)
 Documentation for the GNU compilers in info format.

Package: gcc-7-multilib
Description-md5: d1bddfa375b62324197c575c04fb2e4e
Description-en: GNU C compiler (multilib support)
 This is the GNU C compiler, a fairly portable optimizing compiler for C.
 .
 This is a dependency package, depending on development packages
 for the non-default multilib architecture(s).

Package: gcc-7-plugin-dev
Description-md5: f04e3fe2e4b62ffb72f0dc5ae683f155
Description-en: Files for GNU GCC plugin development.
 This package contains (header) files for GNU GCC plugin development. It
 is only used for the development of GCC plugins, but not needed to run
 plugins.

Package: gcc-7-powerpc-linux-gnu
Description-md5: 45b8bb0736af15d214f67dae5a33875a
Description-en: GNU C compiler (cross compiler for powerpc architecture)
 This is the GNU C compiler, a fairly portable optimizing compiler for C.
 .
 This package contains C cross-compiler for powerpc architecture.

Package: gcc-7-powerpc-linux-gnu-base
Description-md5: b6e93638a6d08ea7a18929d7cf078e5d
Description-en: GCC, the GNU Compiler Collection (base package)
 This package contains files common to all languages and libraries
 contained in the GNU Compiler Collection (GCC).

Package: gcc-7-powerpc64le-linux-gnu
Description-md5: 02948f686f57b7661fd57acbd2976475
Description-en: GNU C compiler (cross compiler for ppc64el architecture)
 This is the GNU C compiler, a fairly portable optimizing compiler for C.
 .
 This package contains C cross-compiler for ppc64el architecture.

Package: gcc-7-powerpc64le-linux-gnu-base
Description-md5: b6e93638a6d08ea7a18929d7cf078e5d
Description-en: GCC, the GNU Compiler Collection (base package)
 This package contains files common to all languages and libraries
 contained in the GNU Compiler Collection (GCC).

Package: gcc-8-base
Description-md5: b6e93638a6d08ea7a18929d7cf078e5d
Description-en: GCC, the GNU Compiler Collection (base package)
 This package contains files common to all languages and libraries
 contained in the GNU Compiler Collection (GCC).

Package: gcc-8-cross-base
Description-md5: 4c157f495e05e11e4ad2e3074ac017e0
Description-en: GCC, the GNU Compiler Collection (library base package)
 This empty package contains changelog and copyright files common to
 all libraries contained in the GNU Compiler Collection (GCC).

Package: gcc-aarch64-linux-gnu
Description-md5: 69df476a1d2ab9184e2d806ac537e77d
Description-en: GNU C compiler for the arm64 architecture
 This is the GNU C compiler, a fairly portable optimizing compiler for C.
 .
 This is a dependency package providing the default GNU C cross-compiler
 for the arm64 architecture.

Package: gcc-arm-linux-gnueabihf
Description-md5: 341bee5927aa97cd38931c348b808c55
Description-en: GNU C compiler for the armhf architecture
 This is the GNU C compiler, a fairly portable optimizing compiler for C.
 .
 This is a dependency package providing the default GNU C cross-compiler
 for the armhf architecture.

Package: gcc-doc
Description-md5: af77f0c56a32a74fc629f4cd7c91d2da
Description-en: Documentation for the GNU C compilers (gcc, gobjc, g++)
 Documentation for the GNU compilers in info format (dependency package).

Package: gcc-multilib
Description-md5: 2d7198d97e45eb764af5065748ccb88f
Description-en: GNU C compiler (multilib files)
 This is the GNU C compiler, a fairly portable optimizing compiler for C.
 .
 A dependency package on architectures with multilib support; the package
 contains dependencies for the non-default multilib architecture(s).

Package: gcc-powerpc-linux-gnu
Description-md5: f04c912445b670b2ab129b21d4a47762
Description-en: GNU C compiler for the powerpc architecture
 This is the GNU C compiler, a fairly portable optimizing compiler for C.
 .
 This is a dependency package providing the default GNU C cross-compiler
 for the powerpc architecture.

Package: gcc-powerpc64le-linux-gnu
Description-md5: 1df9b59dd3526c77f2a01a78470f8faa
Description-en: GNU C compiler for the ppc64el architecture
 This is the GNU C compiler, a fairly portable optimizing compiler for C.
 .
 This is a dependency package providing the default GNU C cross-compiler
 for the ppc64el architecture.

Package: gccgo-7-doc
Description-md5: 76326180b2469131aa9547f46e5b3105
Description-en: Documentation for the GNU Go compiler (gccgo)
 Documentation for the GNU Go compiler in info format.

Package: gccgo-8-doc
Description-md5: 76326180b2469131aa9547f46e5b3105
Description-en: Documentation for the GNU Go compiler (gccgo)
 Documentation for the GNU Go compiler in info format.

Package: gccgo-doc
Description-md5: 0eaec438c07175b82a04f00f7787443a
Description-en: Documentation for the GNU Go compiler
 Documentation for the GNU Go compiler in info format (dependency package).

Package: gdm3
Description-md5: 9be0fb38ba2581f623b79242c9c7918d
Description-en: GNOME Display Manager
 GDM provides the equivalent of a "login:" prompt for X displays: it
 asks for a login and starts graphical sessions.
 .
 It supports multiple seats and switching between multiple users.
 .
 The greeter is based on the GNOME libraries and applications, and its
 look and design are the same as those of a GNOME session.

Package: gettext
Description-md5: 0db85b3962766eeef57d5324263a308e
Description-en: GNU Internationalization utilities
 Interesting for authors or maintainers of other packages or programs
 which they want to see internationalized.

Package: gettext-base
Description-md5: 6c8ed1da584066e0871910b60d931f43
Description-en: GNU Internationalization utilities for the base system
 This package includes the gettext and ngettext programs which allow
 other packages to internationalize the messages given by shell scripts.

Package: gettext-doc
Description-md5: 966c7204112700e6dcb867375471b50b
Description-en: Documentation for GNU gettext
 This package contains the HTML documentation for GNU gettext, as well as
 simple "hello world" examples in several programming languages.

Package: gfortran
Description-md5: 19814cb032299ba2188b0196ece62ba3
Description-en: GNU Fortran 95 compiler
 This is the GNU Fortran 95 compiler, which compiles Fortran 95 on platforms
 supported by the gcc compiler. It uses the gcc backend to generate optimized
 code.
 .
 This is a dependency package providing the default GNU Fortran 95 compiler.

Package: gfortran-7
Description-md5: 5dd93c5d21d0717205bc5a3b538b0ca2
Description-en: GNU Fortran compiler
 This is the GNU Fortran compiler, which compiles
 Fortran on platforms supported by the gcc compiler. It uses the
 gcc backend to generate optimized code.

Package: gfortran-7-doc
Description-md5: 17a01a9ada93e104865a01e6615e2401
Description-en: Documentation for the GNU Fortran compiler (gfortran)
 Documentation for the GNU Fortran compiler in info format.

Package: gfortran-7-multilib
Description-md5: ad5cf91f123889c593b105572b4a958c
Description-en: GNU Fortran compiler (multilib support)
 This is the GNU Fortran compiler, which compiles Fortran on platforms
 supported by the gcc compiler.
 .
 This is a dependency package, depending on development packages
 for the non-default multilib architecture(s).

Package: gfortran-doc
Description-md5: 6855bbffb1ede02166da131963e7fd83
Description-en: Documentation for the GNU Fortran compiler (gfortran)
 Documentation for the GNU Fortran compiler in info format (dependency package).

Package: gfortran-multilib
Description-md5: 5271dd91ad92131a871518bd7f87158c
Description-en: GNU Fortran 95 compiler (multilib files)
 This is the GNU Fortran compiler, which compiles Fortran 95 on platforms
 supported by the gcc compiler.
 .
 A dependency package on architectures with multilib support; the package
 contains dependencies for the non-default multilib architecture(s).

Package: ghostscript
Description-md5: 3b69f5ec8191e8f0d88dd3e30e7b1b69
Description-en: interpreter for the PostScript language and for PDF
 GPL Ghostscript is used for PostScript/PDF preview and printing.
 Usually as a back-end to a program such as ghostview, it can display
 PostScript and PDF documents in an X11 environment.
 .
 Furthermore, it can render PostScript and PDF files as graphics to be
 printed on non-PostScript printers. Supported printers include common
 dot-matrix, inkjet and laser models.

Package: ghostscript-dbg
Description-md5: a2fe8105fc9dbb79ba747e804e6e5fa2
Description-en: interpreter for the PostScript language and for PDF - Debug symbols
 GPL Ghostscript is used for PostScript/PDF preview and printing.
 Usually as a back-end to a program such as ghostview, it can display
 PostScript and PDF documents in an X11 environment.
 .
 This package contains the debugging symbols for ghostscript,
 ghostscript-x, and libgs9.

Package: ghostscript-doc
Description-md5: 772951004a1a824bee59da206fba24e2
Description-en: interpreter for the PostScript language and for PDF - Documentation
 GPL Ghostscript is used for PostScript/PDF preview and printing.
 Usually as a back-end to a program such as ghostview, it can display
 PostScript and PDF documents in an X11 environment.
 .
 This package contains documentation for GPL Ghostscript, mainly
 targeted developers and advanced users.

Package: ghostscript-x
Description-md5: 5f6f4265cecdf5f91c519e5f197328b3
Description-en: interpreter for the PostScript language and for PDF - X11 support
 GPL Ghostscript is used for PostScript/PDF preview and printing.
 Usually as a back-end to a program such as ghostview, it can display
 PostScript and PDF documents in an X11 environment.
 .
 This package contains the GPL Ghostscript output device for X11.

Package: gir1.2-avahi-0.6
Description-md5: 4c871be80791e6d6a8d9f13fc8cef166
Description-en: GObject introspection data for Avahi
 This package contains introspection data for Avahi using libavahi-gobject.
 .
 It can be used by packages using the GIRepository format to generate
 dynamic bindings.

Package: gir1.2-camel-1.2
Description-md5: adacda275afbebb9c6fa5b1a157d13f5
Description-en: GObject introspection for the Camel library
 Camel is a generic messaging library. It supports the standard
 messaging system for receiving and sending messages. I4   .   Ž4   ..  4  Üonly.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    Þú&®ò‘4   .     ..  ’4  Ülow.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     Þ¦PHÐ“4   .   r  ..  ”4  Ü	default.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 Þ¿rà•4   .   òr  ..  –4  Üon                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        ÞŒ™__4   .   ^4   ..  `4  Üvalue.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   Þ¡8 ?a4   .   ¥  ..  b4  Üpages.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   ÞÈ's“c4   .   r  ..  d4  Üextable                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   ÞØ éðd4   .   c4   ..  e4  Üsort.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    ÞG?—Ûf4   .     ..  g4  Üaddr                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      Þ¯ïÔ•g4   .   f4   ..  h4  Üt                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 Apr 21 00:10:08 ubuntu kernel: [    0.000000] Linux version 4.15.0 (root@ubuntu) (gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1~18.04)) #1 SMP Mon Apr 20 19:03:11 UTC 2020
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Command line: root=/dev/sda rw console=ttyS0
Apr 21 00:10:08 ubuntu kernel: [    0.000000] x86/fpu: x87 FPU will use FXSAVE
Apr 21 00:10:08 ubuntu kernel: [    0.000000] e820: BIOS-provided physical RAM map:
Apr 21 00:10:08 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x0000000000000000-0x000000000009fbff] usable
Apr 21 00:10:08 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x000000000009fc00-0x000000000009ffff] reserved
Apr 21 00:10:08 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x00000000000f0000-0x00000000000fffff] reserved
Apr 21 00:10:08 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x0000000000100000-0x000000001ffdefff] usable
Apr 21 00:10:08 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x000000001ffdf000-0x000000001fffffff] reserved
Apr 21 00:10:08 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x00000000fffc0000-0x00000000ffffffff] reserved
Apr 21 00:10:08 ubuntu kernel: [    0.000000] NX (Execute Disable) protection: active
Apr 21 00:10:08 ubuntu kernel: [    0.000000] random: fast init done
Apr 21 00:10:08 ubuntu kernel: [    0.000000] SMBIOS 2.8 present.
Apr 21 00:10:08 ubuntu kernel: [    0.000000] DMI: QEMU Standard PC (i440FX + PIIX, 1996), BIOS 1.10.2-1ubuntu1 04/01/2014
Apr 21 00:10:08 ubuntu kernel: [    0.000000] e820: update [mem 0x00000000-0x00000fff] usable ==> reserved
Apr 21 00:10:08 ubuntu kernel: [    0.000000] e820: remove [mem 0x000a0000-0x000fffff] usable
Apr 21 00:10:08 ubuntu kernel: [    0.000000] e820: last_pfn = 0x1ffdf max_arch_pfn = 0x400000000
Apr 21 00:10:08 ubuntu kernel: [    0.000000] MTRR default type: write-back
Apr 21 00:10:08 ubuntu kernel: [    0.000000] MTRR fixed ranges enabled:
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   00000-9FFFF write-back
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   A0000-BFFFF uncachable
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   C0000-FFFFF write-protect
Apr 21 00:10:08 ubuntu kernel: [    0.000000] MTRR variable ranges enabled:
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   0 base 0080000000 mask FF80000000 uncachable
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   1 disabled
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   2 disabled
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   3 disabled
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   4 disabled
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   5 disabled
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   6 disabled
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   7 disabled
Apr 21 00:10:08 ubuntu kernel: [    0.000000] x86/PAT: Configuration [0-7]: WB  WC  UC- UC  WB  WP  UC- WT  
Apr 21 00:10:08 ubuntu kernel: [    0.000000] found SMP MP-table at [mem 0x000f6a60-0x000f6a6f] mapped at [        (ptrval)]
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Scanning 1 areas for low memory corruption
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Base memory trampoline at [        (ptrval)] 99000 size 24576
Apr 21 00:10:08 ubuntu kernel: [    0.000000] BRK [0x0c12c000, 0x0c12cfff] PGTABLE
Apr 21 00:10:08 ubuntu kernel: [    0.000000] BRK [0x0c12d000, 0x0c12dfff] PGTABLE
Apr 21 00:10:08 ubuntu kernel: [    0.000000] BRK [0x0c12e000, 0x0c12efff] PGTABLE
Apr 21 00:10:08 ubuntu kernel: [    0.000000] BRK [0x0c12f000, 0x0c12ffff] PGTABLE
Apr 21 00:10:08 ubuntu kernel: [    0.000000] BRK [0x0c130000, 0x0c130fff] PGTABLE
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: Early table checksum verification disabled
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: RSDP 0x00000000000F6A10 000014 (v00 BOCHS )
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: RSDT 0x000000001FFE15BA 000034 (v01 BOCHS  BXPCRSDT 00000001 BXPC 00000001)
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: FACP 0x000000001FFE12EE 000074 (v01 BOCHS  BXPCFACP 00000001 BXPC 00000001)
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: DSDT 0x000000001FFDFDC0 00152E (v01 BOCHS  BXPCDSDT 00000001 BXPC 00000001)
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: FACS 0x000000001FFDFD80 000040
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: APIC 0x000000001FFE13E2 000090 (v01 BOCHS  BXPCAPIC 00000001 BXPC 00000001)
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: HPET 0x000000001FFE1472 000038 (v01 BOCHS  BXPCHPET 00000001 BXPC 00000001)
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: SRAT 0x000000001FFE14AA 000110 (v01 BOCHS  BXPCSRAT 00000001 BXPC 00000001)
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: Local APIC address 0xfee00000
Apr 21 00:10:08 ubuntu kernel: [    0.000000] SRAT: PXM 0 -> APIC 0x00 -> Node 0
Apr 21 00:10:08 ubuntu kernel: [    0.000000] SRAT: PXM 1 -> APIC 0x01 -> Node 1
Apr 21 00:10:08 ubuntu kernel: [    0.000000] SRAT: PXM 0 -> APIC 0x02 -> Node 0
Apr 21 00:10:08 ubuntu kernel: [    0.000000] SRAT: PXM 1 -> APIC 0x03 -> Node 1
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 0 PXM 0 [mem 0x00000000-0x0009ffff]
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 0 PXM 0 [mem 0x00100000-0x0fffffff]
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 1 PXM 1 [mem 0x10000000-0x1fffffff]
Apr 21 00:10:08 ubuntu kernel: [    0.000000] NUMA: Node 0 [mem 0x00000000-0x0009ffff] + [mem 0x00100000-0x0fffffff] -> [mem 0x00000000-0x0fffffff]
Apr 21 00:10:08 ubuntu kernel: [    0.000000] NODE_DATA(0) allocated [mem 0x0fffc000-0x0fffffff]
Apr 21 00:10:08 ubuntu kernel: [    0.000000] NODE_DATA(1) allocated [mem 0x1ffdb000-0x1ffdefff]
Apr 21 00:10:08 ubuntu kernel: [    0.000000] tsc: Fast TSC calibration using PIT
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Zone ranges:
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   DMA      [mem 0x0000000000001000-0x0000000000ffffff]
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   DMA32    [mem 0x0000000001000000-0x000000001ffdefff]
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   Normal   empty
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Movable zone start for each node
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Early memory node ranges
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   node   0: [mem 0x0000000000001000-0x000000000009efff]
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   node   0: [mem 0x0000000000100000-0x000000000fffffff]
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   node   1: [mem 0x0000000010000000-0x000000001ffdefff]
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Initmem setup node 0 [mem 0x0000000000001000-0x000000000fffffff]
Apr 21 00:10:08 ubuntu kernel: [    0.000000] On node 0 totalpages: 65438
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   DMA zone: 64 pages used for memmap
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   DMA zone: 21 pages reserved
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   DMA zone: 3998 pages, LIFO batch:0
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   DMA32 zone: 960 pages used for memmap
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   DMA32 zone: 61440 pages, LIFO batch:15
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Initmem setup node 1 [mem 0x0000000010000000-0x000000001ffdefff]
Apr 21 00:10:08 ubuntu kernel: [    0.000000] On node 1 totalpages: 65503
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   DMA32 zone: 1024 pages used for memmap
Apr 21 00:10:08 ubuntu kernel: [    0.000000]   DMA32 zone: 65503 pages, LIFO batch:15
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Reserved but unavailable: 98 pages
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: PM-Timer IO Port: 0x608
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: Local APIC address 0xfee00000
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: LAPIC_NMI (acpi_id[0xff] dfl dfl lint[0x1])
Apr 21 00:10:08 ubuntu kernel: [    0.000000] IOAPIC[0]: apic_id 0, version 32, address 0xfec00000, GSI 0-23
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 0 global_irq 2 dfl dfl)
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 5 global_irq 5 high level)
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 9 global_irq 9 high level)
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 10 global_irq 10 high level)
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 11 global_irq 11 high level)
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: IRQ0 used by override.
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: IRQ5 used by override.
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: IRQ9 used by override.
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: IRQ10 used by override.
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: IRQ11 used by override.
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Using ACPI (MADT) for SMP configuration information
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: HPET id: 0x8086a201 base: 0xfed00000
Apr 21 00:10:08 ubuntu kernel: [    0.000000] smpboot: Allowing 4 CPUs, 0 hotplug CPUs
Apr 21 00:10:08 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x00000000-0x00000fff]
Apr 21 00:10:08 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x0009f000-0x0009ffff]
Apr 21 00:10:08 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x000a0000-0x000effff]
Apr 21 00:10:08 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x000f0000-0x000fffff]
Apr 21 00:10:08 ubuntu kernel: [    0.000000] e820: [mem 0x20000000-0xfffbffff] available for PCI devices
Apr 21 00:10:08 ubuntu kernel: [    0.000000] clocksource: refined-jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 1910969940391419 ns
Apr 21 00:10:08 ubuntu kernel: [    0.000000] setup_percpu: NR_CPUS:64 nr_cpumask_bits:64 nr_cpu_ids:4 nr_node_ids:2
Apr 21 00:10:08 ubuntu kernel: [    0.000000] percpu: Embedded 43 pages/cpu @        (ptrval) s138520 r8192 d29416 u1048576
Apr 21 00:10:08 ubuntu kernel: [    0.000000] pcpu-alloc: s138520 r8192 d29416 u1048576 alloc=1*2097152
Apr 21 00:10:08 ubuntu kernel: [    0.000000] pcpu-alloc: [0] 0 2 [1] 1 3 
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Built 2 zonelists, mobility grouping on.  Total pages: 128872
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Policy zone: DMA32
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Kernel command line: root=/dev/sda rw console=ttyS0
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Calgary: detecting Calgary via BIOS EBDA area
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Calgary: Unable to locate Rio Grande table in EBDA - bailing!
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Memory: 488888K/523764K available (12300K kernel code, 1289K rwdata, 3716K rodata, 1224K init, 660K bss, 34876K reserved, 0K cma-reserved)
Apr 21 00:10:08 ubuntu kernel: [    0.000000] SLUB: HWalign=64, Order=0-3, MinObjects=0, CPUs=4, Nodes=2
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Hierarchical RCU implementation.
Apr 21 00:10:08 ubuntu kernel: [    0.000000] 	RCU event tracing is enabled.
Apr 21 00:10:08 ubuntu kernel: [    0.000000] 	RCU restricting CPUs from NR_CPUS=64 to nr_cpu_ids=4.
Apr 21 00:10:08 ubuntu kernel: [    0.000000] RCU: Adjusting geometry for rcu_fanout_leaf=16, nr_cpu_ids=4
Apr 21 00:10:08 ubuntu kernel: [    0.000000] NR_IRQS: 4352, nr_irqs: 456, preallocated irqs: 16
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Console: colour VGA+ 80x25
Apr 21 00:10:08 ubuntu kernel: [    0.000000] console [ttyS0] enabled
Apr 21 00:10:08 ubuntu kernel: [    0.000000] mempolicy: Enabling automatic NUMA balancing. Configure with numa_balancing= or the kernel.numa_balancing sysctl
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: Core revision 20170831
Apr 21 00:10:08 ubuntu kernel: [    0.000000] ACPI: 1 ACPI AML tables successfully acquired and loaded
Apr 21 00:10:08 ubuntu kernel: [    0.000000] clocksource: hpet: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 19112604467 ns
Apr 21 00:10:08 ubuntu kernel: [    0.000000] hpet clockevent registered
Apr 21 00:10:08 ubuntu kernel: [    0.003000] APIC: Switch to symmetric I/O mode setup
Apr 21 00:10:08 ubuntu kernel: [    0.007000] ..TIMER: vector=0x30 apic1=0 pin1=2 apic2=-1 pin2=-1
Apr 21 00:10:08 ubuntu kernel: [    0.012000] tsc: Fast TSC calibration using PIT
Apr 21 00:10:08 ubuntu kernel: [    0.013000] tsc: Detected 2699.444 MHz processor
Apr 21 00:10:08 ubuntu kernel: [    0.015170] tsc: Marking TSC unstable due to TSCs unsynchronized
Apr 21 00:10:08 ubuntu kernel: [    0.016081] Calibrating delay loop (skipped), value calculated using timer frequency.. 5398.88 BogoMIPS (lpj=2699444)
Apr 21 00:10:08 ubuntu kernel: [    0.018157] pid_max: default: 32768 minimum: 301
Apr 21 00:10:08 ubuntu kernel: [    0.019596] Security Framework initialized
Apr 21 00:10:08 ubuntu kernel: [    0.020111] SELinux:  Initializing.
Apr 21 00:10:08 ubuntu kernel: [    0.021231] SELinux:  Starting in permissive mode
Apr 21 00:10:08 ubuntu kernel: [    0.022872] Dentry cache hash table entries: 65536 (order: 7, 524288 bytes)
Apr 21 00:10:08 ubuntu kernel: [    0.025197] Inode-cache hash table entries: 32768 (order: 6, 262144 bytes)
Apr 21 00:10:08 ubuntu kernel: [    0.026287] Mount-cache hash table entries: 1024 (order: 1, 8192 bytes)
Apr 21 00:10:08 ubuntu kernel: [    0.027056] Mountpoint-cache hash table entries: 1024 (order: 1, 8192 bytes)
Apr 21 00:10:08 ubuntu kernel: [    0.043875] mce: CPU supports 10 MCE banks
Apr 21 00:10:08 ubuntu kernel: [    0.046392] Last level iTLB entries: 4KB 0, 2MB 0, 4MB 0
Apr 21 00:10:08 ubuntu kernel: [    0.047000] Last level dTLB entries: 4KB 0, 2MB 0, 4MB 0, 1GB 0
Apr 21 00:10:08 ubuntu kernel: [    0.048085] Spectre V2 mitigation: LFENCE not serializing. Switching to generic retpoline
Apr 21 00:10:08 ubuntu kernel: [    0.049000] Spectre V2 mitigation: Mitigation: Full generic retpoline
Apr 21 00:10:08 ubuntu kernel: [    0.050029] Spectre V2 mitigation: Filling RSB on context switch
Apr 21 00:10:08 ubuntu kernel: [    0.056497] Freeing SMP alternatives memory: 40K
Apr 21 00:10:08 ubuntu kernel: [    0.073000] smpboot: CPU0: AMD QEMU Virtual CPU version 2.5+ (family: 0x6, model: 0x6, stepping: 0x3)
Apr 21 00:10:08 ubuntu kernel: [    0.079214] Performance Events: PMU not available due to virtualization, using software events only.
Apr 21 00:10:08 ubuntu kernel: [    0.084331] Hierarchical SRCU implementation.
Apr 21 00:10:08 ubuntu kernel: [    0.095080] Huh? What family is it: 0x6?!
Apr 21 00:10:08 ubuntu kernel: [    0.099214] smp: Bringing up secondary CPUs ...
Apr 21 00:10:08 ubuntu kernel: [    0.105370] x86: Booting SMP configuration:
Apr 21 00:10:08 ubuntu kernel: [    0.106093] .... node  #1, CPUs:      #1
Apr 21 00:10:08 ubuntu kernel: [    0.199000] .... node  #0, CPUs:   #2
Apr 21 00:10:08 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping max bogoMips estimate 2 = 4905674
Apr 21 00:10:08 ubuntu kernel: [    0.001000] calibrate_delay_direct() failed to get a good estimate for loops_per_jiffy.
Apr 21 00:10:08 ubuntu kernel: [    0.001000] Probably due to long platform interrupts. Consider using "lpj=" boot option.
Apr 21 00:10:08 ubuntu kernel: [    0.299204] .... node  #1, CPUs:   #3
Apr 21 00:10:08 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping max bogoMips estimate 1 = 7926256
Apr 21 00:10:08 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping max bogoMips estimate 0 = 7479309
Apr 21 00:10:08 ubuntu kernel: [    0.370441] smp: Brought up 2 nodes, 4 CPUs
Apr 21 00:10:08 ubuntu kernel: [    0.371180] smpboot: Max logical packages: 4
Apr 21 00:10:08 ubuntu kernel: [    0.372107] smpboot: Total of 4 processors activated (22591.17 BogoMIPS)
Apr 21 00:10:08 ubuntu kernel: [    0.395293] devtmpfs: initialized
Apr 21 00:10:08 ubuntu kernel: [    0.422916] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 1911260446275000 ns
Apr 21 00:10:08 ubuntu kernel: [    0.424232] futex hash table entries: 1024 (order: 4, 65536 bytes)
Apr 21 00:10:08 ubuntu kernel: [    0.429893] RTC time:  0:09:39, date: 04/21/20
Apr 21 00:10:08 ubuntu kernel: [    0.441502] kworker/u9:0 (32) used greatest stack depth: 14280 bytes left
Apr 21 00:10:08 ubuntu kernel: [    0.448091] NET: Registered protocol family 16
Apr 21 00:10:08 ubuntu kernel: [    0.450000] audit: initializing netlink subsys (disabled)
Apr 21 00:10:08 ubuntu kernel: [    0.450057] audit: type=2000 audit(1587427778.449:1): state=initialized audit_enabled=0 res=1
Apr 21 00:10:08 ubuntu kernel: [    0.457830] cpuidle: using governor menu
Apr 21 00:10:08 ubuntu kernel: [    0.462293] ACPI: bus type PCI registered
Apr 21 00:10:08 ubuntu kernel: [    0.465000] PCI: Using configuration type 1 for base access
Apr 21 00:10:08 ubuntu kernel: [    0.474000] mtrr: your CPUs had inconsistent fixed MTRR settings
Apr 21 00:10:08 ubuntu kernel: [    0.474000] mtrr: your CPUs had inconsistent variable MTRR settings
Apr 21 00:10:08 ubuntu kernel: [    0.474079] mtrr: your CPUs had inconsistent MTRRdefType settings
Apr 21 00:10:08 ubuntu kernel: [    0.474901] mtrr: probably your BIOS does not setup all CPUs.
Apr 21 00:10:08 ubuntu kernel: [    0.475000] mtrr: corrected configuration.
Apr 21 00:10:08 ubuntu kernel: [    0.621277] kworker/u10:1 (357) used greatest stack depth: 14248 bytes left
Apr 21 00:10:08 ubuntu kernel: [    0.725029] HugeTLB registered 2.00 MiB page size, pre-allocated 0 pages
Apr 21 00:10:08 ubuntu kernel: [    0.740419] ACPI: Added _OSI(Module Device)
Apr 21 00:10:08 ubuntu kernel: [    0.742224] ACPI: Added _OSI(Processor Device)
Apr 21 00:10:08 ubuntu kernel: [    0.745087] ACPI: Added _OSI(3.0 _SCP Extensions)
Apr 21 00:10:08 ubuntu kernel: [    0.747066] ACPI: Added _OSI(Processor Aggregator Device)
Apr 21 00:10:08 ubuntu kernel: [    0.774690] ACPI: Interpreter enabled
Apr 21 00:10:08 ubuntu kernel: [    0.775869] ACPI: (supports S0 S3 S4 S5)
Apr 21 00:10:08 ubuntu kernel: [    0.776000] ACPI: Using IOAPIC for interrupt routing
Apr 21 00:10:08 ubuntu kernel: [    0.776000] PCI: Using host bridge windows from ACPI; if necessary, use "pci=nocrs" and report a bug
Apr 21 00:10:08 ubuntu kernel: [    0.782000] ACPI: Enabled 2 GPEs in block 00 to 0F
Apr 21 00:10:08 ubuntu kernel: [    0.880000] ACPI: PCI Root Bridge [PCI0] (domain 0000 [bus 00-ff])
Apr 21 00:10:08 ubuntu kernel: [    0.883363] acpi PNP0A03:00: _OSC: OS supports [ASPM ClockPM Segments MSI]
Apr 21 00:10:08 ubuntu kernel: [    0.884492] acpi PNP0A03:00: _OSC failed (AE_NOT_FOUND); disabling ASPM
Apr 21 00:10:08 ubuntu kernel: [    0.886205] acpi PNP0A03:00: fail to add MMCONFIG information, can't access extended PCI configuration space under this bridge.
Apr 21 00:10:08 ubuntu kernel: [    0.891467] PCI host bridge to bus 0000:00
Apr 21 00:10:08 ubuntu kernel: [    0.893559] pci_bus 0000:00: root bus resource [io  0x0000-0x0cf7 window]
Apr 21 00:10:08 ubuntu kernel: [    0.894178] pci_bus 0000:00: root bus resource [io  0x0d00-0xffff window]
Apr 21 00:10:08 ubuntu kernel: [    0.896079] pci_bus 0000:00: root bus resource [mem 0x000a0000-0x000bffff window]
Apr 21 00:10:08 ubuntu kernel: [    0.898059] pci_bus 0000:00: root bus resource [mem 0x20000000-0xfebfffff window]
Apr 21 00:10:08 ubuntu kernel: [    0.899000] pci_bus 0000:00: root bus resource [mem 0x100000000-0x17fffffff window]
Apr 21 00:10:08 ubuntu kernel: [    0.899294] pci_bus 0000:00: root bus resource [bus 00-ff]
Apr 21 00:10:08 ubuntu kernel: [    0.901793] pci 0000:00:00.0: [8086:1237] type 00 class 0x060000
Apr 21 00:10:08 ubuntu kernel: [    0.908502] pci 0000:00:01.0: [8086:7000] type 00 class 0x060100
Apr 21 00:10:08 ubuntu kernel: [    0.912114] pci 0000:00:01.1: [8086:7010] type 00 class 0x010180
Apr 21 00:10:08 ubuntu kernel: [    0.915000] pci 0000:00:01.1: reg 0x20: [io  0xc040-0xc04f]
Apr 21 00:10:08 ubuntu kernel: [    0.916249] pci 0000:00:01.1: legacy IDE quirk: reg 0x10: [io  0x01f0-0x01f7]
Apr 21 00:10:08 ubuntu kernel: [    0.917100] pci 0000:00:01.1: legacy IDE quirk: reg 0x14: [io  0x03f6]
Apr 21 00:10:08 ubuntu kernel: [    0.917959] pci 0000:00:01.1: legacy IDE quirk: reg 0x18: [io  0x0170-0x0177]
Apr 21 00:10:08 ubuntu kernel: [    0.918416] pci 0000:00:01.1: legacy IDE quirk: reg 0x1c: [io  0x0376]
Apr 21 00:10:08 ubuntu kernel: [    0.922134] pci 0000:00:01.3: [8086:7113] type 00 class 0x068000
Apr 21 00:10:08 ubuntu kernel: [    0.923116] pci 0000:00:01.3: quirk: [io  0x0600-0x063f] claimed by PIIX4 ACPI
Apr 21 00:10:08 ubuntu kernel: [    0.924052] pci 0000:00:01.3: quirk: [io  0x0700-0x070f] claimed by PIIX4 SMB
Apr 21 00:10:08 ubuntu kernel: [    0.932153] pci 0000:00:02.0: [1234:1111] type 00 class 0x030000
Apr 21 00:10:08 ubuntu kernel: [    0.932153] pci 0000:00:02.0: reg 0x10: [mem 0xfd000000-0xfdffffff pref]
Apr 21 00:10:08 ubuntu kernel: [    0.936000] pci 0000:00:02.0: reg 0x18: [mem 0xfebb0000-0xfebb0fff]
Apr 21 00:10:08 ubuntu kernel: [    0.939000] pci 0000:00:02.0: reg 0x30: [mem 0xfeba0000-0xfebaffff pref]
Apr 21 00:10:08 ubuntu kernel: [    0.943078] pci 0000:00:03.0: [8086:100e] type 00 class 0x020000
Apr 21 00:10:08 ubuntu kernel: [    0.944000] pci 0000:00:03.0: reg 0x10: [mem 0xfeb80000-0xfeb9ffff]
Apr 21 00:10:08 ubuntu kernel: [    0.944000] pci 0000:00:03.0: reg 0x14: [io  0xc000-0xc03f]
Apr 21 00:10:08 ubuntu kernel: [    0.946000] pci 0000:00:03.0: reg 0x30: [mem 0xfeb00000-0xfeb7ffff pref]
Apr 21 00:10:08 ubuntu kernel: [    0.972612] ACPI: PCI Interrupt Link [LNKA] (IRQs 5 *10 11)
Apr 21 00:10:08 ubuntu kernel: [    0.977538] ACPI: PCI Interrupt Link [LNKB] (IRQs 5 *10 11)
Apr 21 00:10:08 ubuntu kernel: [    0.981937] ACPI: PCI Interrupt Link [LNKC] (IRQs 5 10 *11)
Apr 21 00:10:08 ubuntu kernel: [    0.987216] ACPI: PCI Interrupt Link [LNKD] (IRQs 5 10 *11)
Apr 21 00:10:08 ubuntu kernel: [    0.991249] ACPI: PCI Interrupt Link [LNKS] (IRQs *9)
Apr 21 00:10:08 ubuntu kernel: [    1.003000] pci 0000:00:02.0: vgaarb: setting as boot VGA device
Apr 21 00:10:08 ubuntu kernel: [    1.003000] pci 0000:00:02.0: vgaarb: VGA device added: decodes=io+mem,owns=io+mem,locks=none
Apr 21 00:10:08 ubuntu kernel: [    1.003129] pci 0000:00:02.0: vgaarb: bridge control possible
Apr 21 00:10:08 ubuntu kernel: [    1.003872] vgaarb: loaded
Apr 21 00:10:08 ubuntu kernel: [    1.005000] SCSI subsystem initialized
Apr 21 00:10:08 ubuntu kernel: [    1.006523] libata version 3.00 loaded.
Apr 21 00:10:08 ubuntu kernel: [    1.007000] ACPI: bus type USB registered
Apr 21 00:10:08 ubuntu kernel: [    1.011251] usbcore: registered new interface driver usbfs
Apr 21 00:10:08 ubuntu kernel: [    1.022219] usbcore: registered new interface driver hub
Apr 21 00:10:08 ubuntu kernel: [    1.030496] usbcore: registered new device driver usb
Apr 21 00:10:08 ubuntu kernel: [    1.036343] pps_core: LinuxPPS API ver. 1 registered
Apr 21 00:10:08 ubuntu kernel: [    1.038520] pps_core: Software ver. 5.3.6 - Copyright 2005-2007 Rodolfo Giometti <giometti@linux.it>
Apr 21 00:10:08 ubuntu kernel: [    1.040260] PTP clock support registered
Apr 21 00:10:08 ubuntu kernel: [    1.046268] EDAC MC: Ver: 3.0.0
Apr 21 00:10:08 ubuntu kernel: [    1.049000] Advanced Linux Sound Architecture Driver Initialized.
Apr 21 00:10:08 ubuntu kernel: [    1.049000] PCI: Using ACPI for IRQ routing
Apr 21 00:10:08 ubuntu kernel: [    1.049000] PCI: pci_cache_line_size set to 64 bytes
Apr 21 00:10:08 ubuntu kernel: [    1.049000] e820: reserve RAM buffer [mem 0x0009fc00-0x0009ffff]
Apr 21 00:10:08 ubuntu kernel: [    1.049000] e820: reserve RAM buffer [mem 0x1ffdf000-0x1fffffff]
Apr 21 00:10:08 ubuntu kernel: [    1.054000] NetLabel: Initializing
Apr 21 00:10:08 ubuntu kernel: [    1.054000] NetLabel:  domain hash size = 128
Apr 21 00:10:08 ubuntu kernel: [    1.054000] NetLabel:  protocols = UNLABELED CIPSOv4 CALIPSO
Apr 21 00:10:08 ubuntu kernel: [    1.054000] NetLabel:  unlabeled traffic allowed by default
Apr 21 00:10:08 ubuntu kernel: [    1.054000] HPET: 3 timers in total, 0 timers will be used for per-cpu timer
Apr 21 00:10:08 ubuntu kernel: [    1.054000] hpet0: at MMIO 0xfed00000, IRQs 2, 8, 0
Apr 21 00:10:08 ubuntu kernel: [    1.054000] hpet0: 3 comparators, 64-bit 100.000000 MHz counter
Apr 21 00:10:08 ubuntu kernel: [    1.061000] clocksource: Switched to clocksource hpet
Apr 21 00:10:08 ubuntu kernel: [    1.348667] VFS: Disk quotas dquot_6.6.0
Apr 21 00:10:08 ubuntu kernel: [    1.348667] VFS: Dquot-cache hash table entries: 512 (order 0, 4096 bytes)
Apr 21 00:10:08 ubuntu kernel: [    1.356512] pnp: PnP ACPI init
Apr 21 00:10:08 ubuntu kernel: [    1.356512] pnp 00:00: Plug and Play ACPI device, IDs PNP0b00 (active)
Apr 21 00:10:08 ubuntu kernel: [    1.356512] pnp 00:01: Plug and Play ACPI device, IDs PNP0303 (active)
Apr 21 00:10:08 ubuntu kernel: [    1.356512] pnp 00:02: Plug and Play ACPI device, IDs PNP0f13 (active)
Apr 21 00:10:08 ubuntu kernel: [    1.356512] pnp 00:03: [dma 2]
Apr 21 00:10:08 ubuntu kernel: [    1.356512] pnp 00:03: Plug and Play ACPI device, IDs PNP0700 (active)
Apr 21 00:10:08 ubuntu kernel: [    1.356512] pnp 00:04: Plug and Play ACPI device, IDs PNP0400 (active)
Apr 21 00:10:08 ubuntu kernel: [    1.365551] pnp 00:05: Plug and Play ACPI device, IDs PNP0501 (active)
Apr 21 00:10:08 ubuntu kernel: [    1.368531] pnp: PnP ACPI: found 6 devices
Apr 21 00:10:08 ubuntu kernel: [    1.527776] clocksource: acpi_pm: mask: 0xffffff max_cycles: 0xffffff, max_idle_ns: 2085701024 ns
Apr 21 00:10:08 ubuntu kernel: [    1.535019] pci_bus 0000:00: resource 4 [io  0x0000-0x0cf7 window]
Apr 21 00:10:08 ubuntu kernel: [    1.535064] pci_bus 0000:00: resource 5 [io  0x0d00-0xffff window]
Apr 21 00:10:08 ubuntu kernel: [    1.535064] pci_bus 0000:00: resource 6 [mem 0x000a0000-0x000bffff window]
Apr 21 00:10:08 ubuntu kernel: [    1.535064] pci_bus 0000:00: resource 7 [mem 0x20000000-0xfebfffff window]
Apr 21 00:10:08 ubuntu kernel: [    1.535064] pci_bus 0000:00: resource 8 [mem 0x100000000-0x17fffffff window]
Apr 21 00:10:08 ubuntu kernel: [    1.537704] NET: Registered protocol family 2
Apr 21 00:10:08 ubuntu kernel: [    1.551856] TCP established hash table entries: 4096 (order: 3, 32768 bytes)
Apr 21 00:10:08 ubuntu kernel: [    1.551856] TCP bind hash table entries: 4096 (order: 4, 65536 bytes)
Apr 21 00:10:08 ubuntu kernel: [    1.551856] TCP: Hash tables configured (established 4096 bind 4096)
Apr 21 00:10:08 ubuntu kernel: [    1.557776] UDP hash table entries: 256 (order: 1, 8192 bytes)
Apr 21 00:10:08 ubuntu kernel: [    1.559202] UDP-Lite hash table entries: 256 (order: 1, 8192 bytes)
Apr 21 00:10:08 ubuntu kernel: [    1.559840] NET: Registered protocol family 1
Apr 21 00:10:08 ubuntu kernel: [    1.568970] RPC: Registered named UNIX socket transport module.
Apr 21 00:10:08 ubuntu kernel: [    1.569349] RPC: Registered udp transport module.
Apr 21 00:10:08 ubuntu kernel: [    1.569349] RPC: Registered tcp transport module.
Apr 21 00:10:08 ubuntu kernel: [    1.569349] RPC: Registered tcp NFSv4.1 backchannel transport module.
Apr 21 00:10:08 ubuntu kernel: [    1.576062] pci 0000:00:00.0: Limiting direct PCI/PCI transfers
Apr 21 00:10:08 ubuntu kernel: [    1.576755] pci 0000:00:01.0: PIIX3: Enabling Passive Release
Apr 21 00:10:08 ubuntu kernel: [    1.576755] pci 0000:00:01.0: Activating ISA DMA hang workarounds
Apr 21 00:10:08 ubuntu kernel: [    1.579284] pci 0000:00:02.0: Video device with shadowed ROM at [mem 0x000c0000-0x000dffff]
Apr 21 00:10:08 ubuntu kernel: [    1.582461] PCI: CLS 0 bytes, default 64
Apr 21 00:10:08 ubuntu kernel: [    1.590954] clocksource: tsc: mask: 0xffffffffffffffff max_cycles: 0x26e930ddc4f, max_idle_ns: 440795207869 ns
Apr 21 00:10:08 ubuntu kernel: [    1.614367] Scanning for low memory corruption every 60 seconds
Apr 21 00:10:08 ubuntu kernel: [    1.655016] Initialise system trusted keyrings
Apr 21 00:10:08 ubuntu kernel: [    1.665785] workingset: timestamp_bits=56 max_order=17 bucket_order=0
Apr 21 00:10:08 ubuntu kernel: [    1.763931] NFS: Registering the id_resolver key type
Apr 21 00:10:08 ubuntu kernel: [    1.763931] Key type id_resolver registered
Apr 21 00:10:08 ubuntu kernel: [    1.763931] Key type id_legacy registered
Apr 21 00:10:08 ubuntu kernel: [    1.770998] SELinux:  Registering netfilter hooks
Apr 21 00:10:08 ubuntu kernel: [    1.805957] Key type asymmetric registered
Apr 21 00:10:08 ubuntu kernel: [    1.807555] Asymmetric key parser 'x509' registered
Apr 21 00:10:08 ubuntu kernel: [    1.808467] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 250)
Apr 21 00:10:08 ubuntu kernel: [    1.808467] io scheduler noop registered
Apr 21 00:10:08 ubuntu kernel: [    1.812595] io scheduler deadline registered
Apr 21 00:10:08 ubuntu kernel: [    1.816341] io scheduler cfq registered (default)
Apr 21 00:10:08 ubuntu kernel: [    1.818065] io scheduler mq-deadline registered
Apr 21 00:10:08 ubuntu kernel: [    1.821479] io scheduler kyber registered
Apr 21 00:10:08 ubuntu kernel: [    1.836811] input: Power Button as /devices/LNXSYSTM:00/LNXPWRBN:00/input/input0
Apr 21 00:10:08 ubuntu kernel: [    1.843761] ACPI: Power Button [PWRF]
Apr 21 00:10:08 ubuntu kernel: [    1.860430] Serial: 8250/16550 driver, 4 ports, IRQ sharing enabled
Apr 21 00:10:08 ubuntu kernel: [    1.869035] 00:05: ttyS0 at I/O 0x3f8 (irq = 4, base_baud = 115200) is a 16550A
Apr 21 00:10:08 ubuntu kernel: [    1.915696] Non-volatile memory driver v1.3
Apr 21 00:10:08 ubuntu kernel: [    1.920411] Linux agpgart interface v0.103
Apr 21 00:10:08 ubuntu kernel: [    2.021513] loop: module loaded
Apr 21 00:10:08 ubuntu kernel: [    2.027269] ata_piix 0000:00:01.1: version 2.13
Apr 21 00:10:08 ubuntu kernel: [    2.049555] scsi host0: ata_piix
Apr 21 00:10:08 ubuntu kernel: [    2.066080] scsi host1: ata_piix
Apr 21 00:10:08 ubuntu kernel: [    2.067002] ata1: PATA max MWDMA2 cmd 0x1f0 ctl 0x3f6 bmdma 0xc040 irq 14
Apr 21 00:10:08 ubuntu kernel: [    2.070060] ata2: PATA max MWDMA2 cmd 0x170 ctl 0x376 bmdma 0xc048 irq 15
Apr 21 00:10:08 ubuntu kernel: [    2.072944] e100: Intel(R) PRO/100 Network Driver, 3.5.24-k2-NAPI
Apr 21 00:10:08 ubuntu kernel: [    2.072944] e100: Copyright(c) 1999-2006 Intel Corporation
Apr 21 00:10:08 ubuntu kernel: [    2.072944] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
Apr 21 00:10:08 ubuntu kernel: [    2.072944] e1000: Copyright (c) 1999-2006 Intel Corporation.
Apr 21 00:10:08 ubuntu kernel: [    2.362736] ata2.01: NODEV after polling detection
Apr 21 00:10:08 ubuntu kernel: [    2.376888] ata1.01: NODEV after polling detection
Apr 21 00:10:08 ubuntu kernel: [    2.396553] ata2.00: ATAPI: QEMU DVD-ROM, 2.5+, max UDMA/100
Apr 21 00:10:08 ubuntu kernel: [    2.411922] ata1.00: ATA-7: QEMU HARDDISK, 2.5+, max UDMA/100
Apr 21 00:10:08 ubuntu kernel: [    2.414316] ata1.00: 16777216 sectors, multi 16: LBA48 
Apr 21 00:10:08 ubuntu kernel: [    2.453961] ata2.00: configured for MWDMA2
Apr 21 00:10:08 ubuntu kernel: [    2.474290] ata1.00: configured for MWDMA2
Apr 21 00:10:08 ubuntu kernel: [    2.512933] ACPI: PCI Interrupt Link [LNKC] enabled at IRQ 11
Apr 21 00:10:08 ubuntu kernel: [    2.523764] scsi 0:0:0:0: Direct-Access     ATA      QEMU HARDDISK    2.5+ PQ: 0 ANSI: 5
Apr 21 00:10:08 ubuntu kernel: [    2.540712] sd 0:0:0:0: Attached scsi generic sg0 type 0
Apr 21 00:10:08 ubuntu kernel: [    2.548216] sd 0:0:0:0: [sda] 16777216 512-byte logical blocks: (8.59 GB/8.00 GiB)
Apr 21 00:10:08 ubuntu kernel: [    2.548216] sd 0:0:0:0: [sda] Write Protect is off
Apr 21 00:10:08 ubuntu kernel: [    2.548216] sd 0:0:0:0: [sda] Mode Sense: 00 3a 00 00
Apr 21 00:10:08 ubuntu kernel: [    2.548216] sd 0:0:0:0: [sda] Write cache: enabled, read cache: enabled, doesn't support DPO or FUA
Apr 21 00:10:08 ubuntu kernel: [    2.567019] scsi 1:0:0:0: CD-ROM            QEMU     QEMU DVD-ROM     2.5+ PQ: 0 ANSI: 5
Apr 21 00:10:08 ubuntu kernel: [    2.593409] sd 0:0:0:0: [sda] Attached SCSI disk
Apr 21 00:10:08 ubuntu kernel: [    2.612920] sr 1:0:0:0: [sr0] scsi3-mmc drive: 4x/4x cd/rw xa/form2 tray
Apr 21 00:10:08 ubuntu kernel: [    2.614709] cdrom: Uniform CD-ROM driver Revision: 3.20
Apr 21 00:10:08 ubuntu kernel: [    2.618666] sr 1:0:0:0: Attached scsi CD-ROM sr0
Apr 21 00:10:08 ubuntu kernel: [    2.624219] sr 1:0:0:0: Attached scsi generic sg1 type 5
Apr 21 00:10:08 ubuntu kernel: [    2.676012] e1000 0000:00:03.0 eth0: (PCI:33MHz:32-bit) 52:54:00:12:34:56
Apr 21 00:10:08 ubuntu kernel: [    2.677584] e1000 0000:00:03.0 eth0: Intel(R) PRO/1000 Network Connection
Apr 21 00:10:08 ubuntu kernel: [    2.679980] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
Apr 21 00:10:08 ubuntu kernel: [    2.683649] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
Apr 21 00:10:08 ubuntu kernel: [    2.687069] sky2: driver version 1.30
Apr 21 00:10:08 ubuntu kernel: [    2.715114] ehci_hcd: USB 2.0 'Enhanced' Host Controller (EHCI) Driver
Apr 21 00:10:08 ubuntu kernel: [    2.718943] ehci-pci: EHCI PCI platform driver
Apr 21 00:10:08 ubuntu kernel: [    2.724004] ohci_hcd: USB 1.1 'Open' Host Controller (OHCI) Driver
Apr 21 00:10:08 ubuntu kernel: [    2.726165] ohci-pci: OHCI PCI platform driver
Apr 21 00:10:08 ubuntu kernel: [    2.726862] uhci_hcd: USB Universal Host Controller Interface driver
Apr 21 00:10:08 ubuntu kernel: [    2.730071] usbcore: registered new interface driver usblp
Apr 21 00:10:08 ubuntu kernel: [    2.733823] usbcore: registered new interface driver usb-storage
Apr 21 00:10:08 ubuntu kernel: [    2.739343] i8042: PNP: PS/2 Controller [PNP0303:KBD,PNP0f13:MOU] at 0x60,0x64 irq 1,12
Apr 21 00:10:08 ubuntu kernel: [    2.748396] serio: i8042 KBD port at 0x60,0x64 irq 1
Apr 21 00:10:08 ubuntu kernel: [    2.748730] serio: i8042 AUX port at 0x60,0x64 irq 12
Apr 21 00:10:08 ubuntu kernel: [    2.763612] rtc_cmos 00:00: RTC can wake from S4
Apr 21 00:10:08 ubuntu kernel: [    2.768614] rtc_cmos 00:00: rtc core: registered rtc_cmos as rtc0
Apr 21 00:10:08 ubuntu kernel: [    2.769737] input: AT Translated Set 2 keyboard as /devices/platform/i8042/serio0/input/input1
Apr 21 00:10:08 ubuntu kernel: [    2.780098] rtc_cmos 00:00: alarms up to one day, y3k, 114 bytes nvram, hpet irqs
Apr 21 00:10:08 ubuntu kernel: [    2.801600] device-mapper: ioctl: 4.37.0-ioctl (2017-09-20) initialised: dm-devel@redhat.com
Apr 21 00:10:08 ubuntu kernel: [    2.805836] hidraw: raw HID events driver (C) Jiri Kosina
Apr 21 00:10:08 ubuntu kernel: [    2.815679] usbcore: registered new interface driver usbhid
Apr 21 00:10:08 ubuntu kernel: [    2.815679] usbhid: USB HID core driver
Apr 21 00:10:08 ubuntu kernel: [    2.842021] Netfilter messages via NETLINK v0.30.
Apr 21 00:10:08 ubuntu kernel: [    2.842535] nf_conntrack version 0.5.0 (4096 buckets, 16384 max)
Apr 21 00:10:08 ubuntu kernel: [    2.847249] ctnetlink v0.93: registering with nfnetlink.
Apr 21 00:10:08 ubuntu kernel: [    2.861083] ip_tables: (C) 2000-2006 Netfilter Core Team
Apr 21 00:10:08 ubuntu kernel: [    2.888960] Initializing XFRM netlink socket
Apr 21 00:10:08 ubuntu kernel: [    2.903968] NET: Registered protocol family 10
Apr 21 00:10:08 ubuntu kernel: [    2.936944] Segment Routing with IPv6
Apr 21 00:10:08 ubuntu kernel: [    2.936944] ip6_tables: (C) 2000-2006 Netfilter Core Team
Apr 21 00:10:08 ubuntu kernel: [    2.963795] sit: IPv6, IPv4 and MPLS over IPv4 tunneling driver
Apr 21 00:10:08 ubuntu kernel: [    2.964255] NET: Registered protocol family 17
Apr 21 00:10:08 ubuntu kernel: [    2.964255] Key type dns_resolver registered
Apr 21 00:10:08 ubuntu kernel: [    2.988034] registered taskstats version 1
Apr 21 00:10:08 ubuntu kernel: [    2.991730] Loading compiled-in X.509 certificates
Apr 21 00:10:08 ubuntu kernel: [    2.997218]   Magic number: 0:179:153
Apr 21 00:10:08 ubuntu kernel: [    2.997218] acpi device:20: hash matches
Apr 21 00:10:08 ubuntu kernel: [    2.997218] console [netcon0] enabled
Apr 21 00:10:08 ubuntu kernel: [    3.001163] netconsole: network logging started
Apr 21 00:10:08 ubuntu kernel: [    3.005924] cfg80211: Loading compiled-in X.509 certificates for regulatory database
Apr 21 00:10:08 ubuntu kernel: [    3.026742] cfg80211: Loaded X.509 cert 'sforshee: 00b28ddf47aef9cea7'
Apr 21 00:10:08 ubuntu kernel: [    3.029216] ALSA device list:
Apr 21 00:10:08 ubuntu kernel: [    3.029877]   No soundcards found.
Apr 21 00:10:08 ubuntu kernel: [    3.032690] platform regulatory.0: Direct firmware load for regulatory.db failed with error -2
Apr 21 00:10:08 ubuntu kernel: [    3.033036] cfg80211: failed to load regulatory.db
Apr 21 00:10:08 ubuntu kernel: [    3.531810] input: ImExPS/2 Generic Explorer Mouse as /devices/platform/i8042/serio1/input/input3
Apr 21 00:10:08 ubuntu kernel: [    3.542121] md: Waiting for all devices to be available before autodetect
Apr 21 00:10:08 ubuntu kernel: [    3.545378] md: If you don't use raid, use raid=noautodetect
Apr 21 00:10:08 ubuntu kernel: [    3.570828] md: Autodetecting RAID arrays.
Apr 21 00:10:08 ubuntu kernel: [    3.572348] md: autorun ...
Apr 21 00:10:08 ubuntu kernel: [    3.573005] md: ... autorun DONE.
Apr 21 00:10:08 ubuntu kernel: [    3.634819] EXT4-fs (sda): couldn't mount as ext3 due to feature incompatibilities
Apr 21 00:10:08 ubuntu kernel: [    3.652717] EXT4-fs (sda): couldn't mount as ext2 due to feature incompatibilities
Apr 21 00:10:08 ubuntu kernel: [    4.312750] EXT4-fs (sda): recovery complete
Apr 21 00:10:08 ubuntu kernel: [    4.318202] EXT4-fs (sda): mounted filesystem with ordered data mode. Opts: (null)
Apr 21 00:10:08 ubuntu kernel: [    4.320640] VFS: Mounted root (ext4 filesystem) on device 8:0.
Apr 21 00:10:08 ubuntu kernel: [    4.336837] devtmpfs: mounted
Apr 21 00:10:08 ubuntu kernel: [    4.414355] Freeing unused kernel memory: 1224K
Apr 21 00:10:08 ubuntu kernel: [    4.415155] Write protecting the kernel read-only data: 18432k
Apr 21 00:10:08 ubuntu kernel: [    4.421709] Freeing unused kernel memory: 2004K
Apr 21 00:10:08 ubuntu kernel: [    4.428267] Freeing unused kernel memory: 380K
Apr 21 00:10:08 ubuntu kernel: [    4.836102] random: crng init done
Apr 21 00:10:08 ubuntu kernel: [    7.253231] systemd-hiberna (1058) used greatest stack depth: 14208 bytes left
Apr 21 00:10:08 ubuntu kernel: [    7.260891] systemd-cryptse (1053) used greatest stack depth: 13760 bytes left
Apr 21 00:10:08 ubuntu kernel: [   17.538251] keyboard-setup. (1068) used greatest stack depth: 13712 bytes left
Apr 21 00:10:11 ubuntu kernel: [   33.094707] e1000 0000:00:03.0 enp0s3: renamed from eth0
Apr 21 00:13:20 ubuntu kernel: [  222.470749] python3 (1725) used greatest stack depth: 13480 bytes left
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Linux version 4.15.0 (root@ubuntu) (gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1~18.04)) #1 SMP Mon Apr 20 19:03:11 UTC 2020
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Command line: root=/dev/sda rw console=ttyS0
Apr 21 06:56:03 ubuntu kernel: [    0.000000] x86/fpu: x87 FPU will use FXSAVE
Apr 21 06:56:03 ubuntu kernel: [    0.000000] e820: BIOS-provided physical RAM map:
Apr 21 06:56:03 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x0000000000000000-0x000000000009fbff] usable
Apr 21 06:56:03 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x000000000009fc00-0x000000000009ffff] reserved
Apr 21 06:56:03 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x00000000000f0000-0x00000000000fffff] reserved
Apr 21 06:56:03 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x0000000000100000-0x000000001ffdefff] usable
Apr 21 06:56:03 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x000000001ffdf000-0x000000001fffffff] reserved
Apr 21 06:56:03 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x00000000fffc0000-0x00000000ffffffff] reserved
Apr 21 06:56:03 ubuntu kernel: [    0.000000] NX (Execute Disable) protection: active
Apr 21 06:56:03 ubuntu kernel: [    0.000000] random: fast init done
Apr 21 06:56:03 ubuntu kernel: [    0.000000] SMBIOS 2.8 present.
Apr 21 06:56:03 ubuntu kernel: [    0.000000] DMI: QEMU Standard PC (i440FX + PIIX, 1996), BIOS 1.10.2-1ubuntu1 04/01/2014
Apr 21 06:56:03 ubuntu kernel: [    0.000000] e820: update [mem 0x00000000-0x00000fff] usable ==> reserved
Apr 21 06:56:03 ubuntu kernel: [    0.000000] e820: remove [mem 0x000a0000-0x000fffff] usable
Apr 21 06:56:03 ubuntu kernel: [    0.000000] e820: last_pfn = 0x1ffdf max_arch_pfn = 0x400000000
Apr 21 06:56:03 ubuntu kernel: [    0.000000] MTRR default type: write-back
Apr 21 06:56:03 ubuntu kernel: [    0.000000] MTRR fixed ranges enabled:
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   00000-9FFFF write-back
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   A0000-BFFFF uncachable
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   C0000-FFFFF write-protect
Apr 21 06:56:03 ubuntu kernel: [    0.000000] MTRR variable ranges enabled:
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   0 base 0080000000 mask FF80000000 uncachable
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   1 disabled
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   2 disabled
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   3 disabled
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   4 disabled
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   5 disabled
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   6 disabled
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   7 disabled
Apr 21 06:56:03 ubuntu kernel: [    0.000000] x86/PAT: Configuration [0-7]: WB  WC  UC- UC  WB  WP  UC- WT  
Apr 21 06:56:03 ubuntu kernel: [    0.000000] found SMP MP-table at [mem 0x000f6a60-0x000f6a6f] mapped at [        (ptrval)]
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Scanning 1 areas for low memory corruption
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Base memory trampoline at [        (ptrval)] 99000 size 24576
Apr 21 06:56:03 ubuntu kernel: [    0.000000] BRK [0x1b12c000, 0x1b12cfff] PGTABLE
Apr 21 06:56:03 ubuntu kernel: [    0.000000] BRK [0x1b12d000, 0x1b12dfff] PGTABLE
Apr 21 06:56:03 ubuntu kernel: [    0.000000] BRK [0x1b12e000, 0x1b12efff] PGTABLE
Apr 21 06:56:03 ubuntu kernel: [    0.000000] BRK [0x1b12f000, 0x1b12ffff] PGTABLE
Apr 21 06:56:03 ubuntu kernel: [    0.000000] BRK [0x1b130000, 0x1b130fff] PGTABLE
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: Early table checksum verification disabled
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: RSDP 0x00000000000F6A10 000014 (v00 BOCHS )
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: RSDT 0x000000001FFE15BA 000034 (v01 BOCHS  BXPCRSDT 00000001 BXPC 00000001)
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: FACP 0x000000001FFE12EE 000074 (v01 BOCHS  BXPCFACP 00000001 BXPC 00000001)
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: DSDT 0x000000001FFDFDC0 00152E (v01 BOCHS  BXPCDSDT 00000001 BXPC 00000001)
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: FACS 0x000000001FFDFD80 000040
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: APIC 0x000000001FFE13E2 000090 (v01 BOCHS  BXPCAPIC 00000001 BXPC 00000001)
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: HPET 0x000000001FFE1472 000038 (v01 BOCHS  BXPCHPET 00000001 BXPC 00000001)
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: SRAT 0x000000001FFE14AA 000110 (v01 BOCHS  BXPCSRAT 00000001 BXPC 00000001)
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: Local APIC address 0xfee00000
Apr 21 06:56:03 ubuntu kernel: [    0.000000] SRAT: PXM 0 -> APIC 0x00 -> Node 0
Apr 21 06:56:03 ubuntu kernel: [    0.000000] SRAT: PXM 1 -> APIC 0x01 -> Node 1
Apr 21 06:56:03 ubuntu kernel: [    0.000000] SRAT: PXM 0 -> APIC 0x02 -> Node 0
Apr 21 06:56:03 ubuntu kernel: [    0.000000] SRAT: PXM 1 -> APIC 0x03 -> Node 1
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 0 PXM 0 [mem 0x00000000-0x0009ffff]
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 0 PXM 0 [mem 0x00100000-0x0fffffff]
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 1 PXM 1 [mem 0x10000000-0x1fffffff]
Apr 21 06:56:03 ubuntu kernel: [    0.000000] NUMA: Node 0 [mem 0x00000000-0x0009ffff] + [mem 0x00100000-0x0fffffff] -> [mem 0x00000000-0x0fffffff]
Apr 21 06:56:03 ubuntu kernel: [    0.000000] NODE_DATA(0) allocated [mem 0x0fffc000-0x0fffffff]
Apr 21 06:56:03 ubuntu kernel: [    0.000000] NODE_DATA(1) allocated [mem 0x1ffdb000-0x1ffdefff]
Apr 21 06:56:03 ubuntu kernel: [    0.000000] tsc: Fast TSC calibration using PIT
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Zone ranges:
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   DMA      [mem 0x0000000000001000-0x0000000000ffffff]
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   DMA32    [mem 0x0000000001000000-0x000000001ffdefff]
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   Normal   empty
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Movable zone start for each node
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Early memory node ranges
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   node   0: [mem 0x0000000000001000-0x000000000009efff]
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   node   0: [mem 0x0000000000100000-0x000000000fffffff]
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   node   1: [mem 0x0000000010000000-0x000000001ffdefff]
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Initmem setup node 0 [mem 0x0000000000001000-0x000000000fffffff]
Apr 21 06:56:03 ubuntu kernel: [    0.000000] On node 0 totalpages: 65438
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   DMA zone: 64 pages used for memmap
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   DMA zone: 21 pages reserved
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   DMA zone: 3998 pages, LIFO batch:0
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   DMA32 zone: 960 pages used for memmap
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   DMA32 zone: 61440 pages, LIFO batch:15
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Initmem setup node 1 [mem 0x0000000010000000-0x000000001ffdefff]
Apr 21 06:56:03 ubuntu kernel: [    0.000000] On node 1 totalpages: 65503
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   DMA32 zone: 1024 pages used for memmap
Apr 21 06:56:03 ubuntu kernel: [    0.000000]   DMA32 zone: 65503 pages, LIFO batch:15
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Reserved but unavailable: 98 pages
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: PM-Timer IO Port: 0x608
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: Local APIC address 0xfee00000
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: LAPIC_NMI (acpi_id[0xff] dfl dfl lint[0x1])
Apr 21 06:56:03 ubuntu kernel: [    0.000000] IOAPIC[0]: apic_id 0, version 32, address 0xfec00000, GSI 0-23
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 0 global_irq 2 dfl dfl)
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 5 global_irq 5 high level)
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 9 global_irq 9 high level)
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 10 global_irq 10 high level)
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 11 global_irq 11 high level)
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: IRQ0 used by override.
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: IRQ5 used by override.
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: IRQ9 used by override.
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: IRQ10 used by override.
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: IRQ11 used by override.
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Using ACPI (MADT) for SMP configuration information
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: HPET id: 0x8086a201 base: 0xfed00000
Apr 21 06:56:03 ubuntu kernel: [    0.000000] smpboot: Allowing 4 CPUs, 0 hotplug CPUs
Apr 21 06:56:03 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x00000000-0x00000fff]
Apr 21 06:56:03 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x0009f000-0x0009ffff]
Apr 21 06:56:03 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x000a0000-0x000effff]
Apr 21 06:56:03 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x000f0000-0x000fffff]
Apr 21 06:56:03 ubuntu kernel: [    0.000000] e820: [mem 0x20000000-0xfffbffff] available for PCI devices
Apr 21 06:56:03 ubuntu kernel: [    0.000000] clocksource: refined-jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 1910969940391419 ns
Apr 21 06:56:03 ubuntu kernel: [    0.000000] setup_percpu: NR_CPUS:64 nr_cpumask_bits:64 nr_cpu_ids:4 nr_node_ids:2
Apr 21 06:56:03 ubuntu kernel: [    0.000000] percpu: Embedded 43 pages/cpu @        (ptrval) s138520 r8192 d29416 u1048576
Apr 21 06:56:03 ubuntu kernel: [    0.000000] pcpu-alloc: s138520 r8192 d29416 u1048576 alloc=1*2097152
Apr 21 06:56:03 ubuntu kernel: [    0.000000] pcpu-alloc: [0] 0 2 [1] 1 3 
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Built 2 zonelists, mobility grouping on.  Total pages: 128872
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Policy zone: DMA32
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Kernel command line: root=/dev/sda rw console=ttyS0
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Calgary: detecting Calgary via BIOS EBDA area
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Calgary: Unable to locate Rio Grande table in EBDA - bailing!
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Memory: 488888K/523764K available (12300K kernel code, 1289K rwdata, 3716K rodata, 1224K init, 660K bss, 34876K reserved, 0K cma-reserved)
Apr 21 06:56:03 ubuntu kernel: [    0.000000] SLUB: HWalign=64, Order=0-3, MinObjects=0, CPUs=4, Nodes=2
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Hierarchical RCU implementation.
Apr 21 06:56:03 ubuntu kernel: [    0.000000] 	RCU event tracing is enabled.
Apr 21 06:56:03 ubuntu kernel: [    0.000000] 	RCU restricting CPUs from NR_CPUS=64 to nr_cpu_ids=4.
Apr 21 06:56:03 ubuntu kernel: [    0.000000] RCU: Adjusting geometry for rcu_fanout_leaf=16, nr_cpu_ids=4
Apr 21 06:56:03 ubuntu kernel: [    0.000000] NR_IRQS: 4352, nr_irqs: 456, preallocated irqs: 16
Apr 21 06:56:03 ubuntu kernel: [    0.000000] Console: colour VGA+ 80x25
Apr 21 06:56:03 ubuntu kernel: [    0.000000] console [ttyS0] enabled
Apr 21 06:56:03 ubuntu kernel: [    0.000000] mempolicy: Enabling automatic NUMA balancing. Configure with numa_balancing= or the kernel.numa_balancing sysctl
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: Core revision 20170831
Apr 21 06:56:03 ubuntu kernel: [    0.000000] ACPI: 1 ACPI AML tables successfully acquired and loaded
Apr 21 06:56:03 ubuntu kernel: [    0.000000] clocksource: hpet: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 19112604467 ns
Apr 21 06:56:03 ubuntu kernel: [    0.000000] hpet clockevent registered
Apr 21 06:56:03 ubuntu kernel: [    0.003000] APIC: Switch to symmetric I/O mode setup
Apr 21 06:56:03 ubuntu kernel: [    0.007000] ..TIMER: vector=0x30 apic1=0 pin1=2 apic2=-1 pin2=-1
Apr 21 06:56:03 ubuntu kernel: [    0.012000] tsc: Fast TSC calibration using PIT
Apr 21 06:56:03 ubuntu kernel: [    0.012000] tsc: Detected 2699.165 MHz processor
Apr 21 06:56:03 ubuntu kernel: [    0.012000] tsc: Marking TSC unstable due to TSCs unsynchronized
Apr 21 06:56:03 ubuntu kernel: [    0.012000] Calibrating delay loop (skipped), value calculated using timer frequency.. 5398.33 BogoMIPS (lpj=2699165)
Apr 21 06:56:03 ubuntu kernel: [    0.012000] pid_max: default: 32768 minimum: 301
Apr 21 06:56:03 ubuntu kernel: [    0.014967] Security Framework initialized
Apr 21 06:56:03 ubuntu kernel: [    0.015285] SELinux:  Initializing.
Apr 21 06:56:03 ubuntu kernel: [    0.016265] SELinux:  Starting in permissive mode
Apr 21 06:56:03 ubuntu kernel: [    0.018390] Dentry cache hash table entries: 65536 (order: 7, 524288 bytes)
Apr 21 06:56:03 ubuntu kernel: [    0.019179] Inode-cache hash table entries: 32768 (order: 6, 262144 bytes)
Apr 21 06:56:03 ubuntu kernel: [    0.020953] Mount-cache hash table entries: 1024 (order: 1, 8192 bytes)
Apr 21 06:56:03 ubuntu kernel: [    0.021134] Mountpoint-cache hash table entries: 1024 (order: 1, 8192 bytes)
Apr 21 06:56:03 ubuntu kernel: [    0.046558] mce: CPU supports 10 MCE banks
Apr 21 06:56:03 ubuntu kernel: [    0.049278] Last level iTLB entries: 4KB 0, 2MB 0, 4MB 0
Apr 21 06:56:03 ubuntu kernel: [    0.049554] Last level dTLB entries: 4KB 0, 2MB 0, 4MB 0, 1GB 0
Apr 21 06:56:03 ubuntu kernel: [    0.050113] Spectre V2 mitigation: LFENCE not serializing. Switching to generic retpoline
Apr 21 06:56:03 ubuntu kernel: [    0.050584] Spectre V2 mitigation: Mitigation: Full generic retpoline
Apr 21 06:56:03 ubuntu kernel: [    0.051099] Spectre V2 mitigation: Filling RSB on context switch
Apr 21 06:56:03 ubuntu kernel: [    0.056489] Freeing SMP alternatives memory: 40K
Apr 21 06:56:03 ubuntu kernel: [    0.073000] APIC calibration not consistent with PM-Timer: 143ms instead of 100ms
Apr 21 06:56:03 ubuntu kernel: [    0.073000] APIC delta adjusted to PM-Timer: 6249938 (8977270)
Apr 21 06:56:03 ubuntu kernel: [    0.074845] smpboot: CPU0: AMD QEMU Virtual CPU version 2.5+ (family: 0x6, model: 0x6, stepping: 0x3)
Apr 21 06:56:03 ubuntu kernel: [    0.081589] Performance Events: PMU not available due to virtualization, using software events only.
Apr 21 06:56:03 ubuntu kernel: [    0.083000] Hierarchical SRCU implementation.
Apr 21 06:56:03 ubuntu kernel: [    0.088000] Huh? What family is it: 0x6?!
Apr 21 06:56:03 ubuntu kernel: [    0.090688] smp: Bringing up secondary CPUs ...
Apr 21 06:56:03 ubuntu kernel: [    0.095152] x86: Booting SMP configuration:
Apr 21 06:56:03 ubuntu kernel: [    0.095531] .... node  #1, CPUs:      #1
Apr 21 06:56:03 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping max bogoMips estimate 3 = 8675108
Apr 21 06:56:03 ubuntu kernel: [    0.170000] .... node  #0, CPUs:   #2
Apr 21 06:56:03 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping max bogoMips estimate 4 = 14575469
Apr 21 06:56:03 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping max bogoMips estimate 3 = 7030003
Apr 21 06:56:03 ubuntu kernel: [    0.242076] .... node  #1, CPUs:   #3
Apr 21 06:56:03 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping max bogoMips estimate 4 = 4338378
Apr 21 06:56:03 ubuntu kernel: [    0.312145] smp: Brought up 2 nodes, 4 CPUs
Apr 21 06:56:03 ubuntu kernel: [    0.313113] smpboot: Max logical packages: 4
Apr 21 06:56:03 ubuntu kernel: [    0.313652] smpboot: Total of 4 processors activated (33887.06 BogoMIPS)
Apr 21 06:56:03 ubuntu kernel: [    0.338319] devtmpfs: initialized
Apr 21 06:56:03 ubuntu kernel: [    0.355084] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 1911260446275000 ns
Apr 21 06:56:03 ubuntu kernel: [    0.358191] futex hash table entries: 1024 (order: 4, 65536 bytes)
Apr 21 06:56:03 ubuntu kernel: [    0.363875] RTC time:  6:55:43, date: 04/21/20
Apr 21 06:56:03 ubuntu kernel: [    0.378351] kworker/u9:0 (32) used greatest stack depth: 14728 bytes left
Apr 21 06:56:03 ubuntu kernel: [    0.385000] NET: Registered protocol family 16
Apr 21 06:56:03 ubuntu kernel: [    0.387828] audit: initializing netlink subsys (disabled)
Apr 21 06:56:03 ubuntu kernel: [    0.390395] audit: type=2000 audit(1587452142.387:1): state=initialized audit_enabled=0 res=1
Apr 21 06:56:03 ubuntu kernel: [    0.401000] cpuidle: using governor menu
Apr 21 06:56:03 ubuntu kernel: [    0.402493] ACPI: bus type PCI registered
Apr 21 06:56:03 ubuntu kernel: [    0.402507] PCI: Using configuration type 1 for base access
Apr 21 06:56:03 ubuntu kernel: [    0.406000] mtrr: your CPUs had inconsistent fixed MTRR settings
Apr 21 06:56:03 ubuntu kernel: [    0.406000] mtrr: your CPUs had inconsistent variable MTRR settings
Apr 21 06:56:03 ubuntu kernel: [    0.406000] mtrr: your CPUs had inconsistent MTRRdefType settings
Apr 21 06:56:03 ubuntu kernel: [    0.406000] mtrr: probably your BIOS does not setup all CPUs.
Apr 21 06:56:03 ubuntu kernel: [    0.406000] mtrr: corrected configuration.
Apr 21 06:56:03 ubuntu kernel: [    0.418899] kworker/u10:0 (139) used greatest stack depth: 14280 bytes left
Apr 21 06:56:03 ubuntu kernel: [    0.541000] HugeTLB registered 2.00 MiB page size, pre-allocated 0 pages
Apr 21 06:56:03 ubuntu kernel: [    0.556426] ACPI: Added _OSI(Module Device)
Apr 21 06:56:03 ubuntu kernel: [    0.557086] ACPI: Added _OSI(Processor Device)
Apr 21 06:56:03 ubuntu kernel: [    0.557214] ACPI: Added _OSI(3.0 _SCP Extensions)
Apr 21 06:56:03 ubuntu kernel: [    0.557352] ACPI: Added _OSI(Processor Aggregator Device)
Apr 21 06:56:03 ubuntu kernel: [    0.583164] ACPI: Interpreter enabled
Apr 21 06:56:03 ubuntu kernel: [    0.588154] ACPI: (supports S0 S3 S4 S5)
Apr 21 06:56:03 ubuntu kernel: [    0.588679] ACPI: Using IOAPIC for interrupt routing
Apr 21 06:56:03 ubuntu kernel: [    0.590940] PCI: Using host bridge windows from ACPI; if necessary, use "pci=nocrs" and report a bug
Apr 21 06:56:03 ubuntu kernel: [    0.595542] ACPI: Enabled 2 GPEs in block 00 to 0F
Apr 21 06:56:03 ubuntu kernel: [    0.726781] ACPI: PCI Root Bridge [PCI0] (domain 0000 [bus 00-ff])
Apr 21 06:56:03 ubuntu kernel: [    0.728733] acpi PNP0A03:00: _OSC: OS supports [ASPM ClockPM Segments MSI]
Apr 21 06:56:03 ubuntu kernel: [    0.730553] acpi PNP0A03:00: _OSC failed (AE_NOT_FOUND); disabling ASPM
Apr 21 06:56:03 ubuntu kernel: [    0.732372] acpi PNP0A03:00: fail to add MMCONFIG information, can't access extended PCI configuration space under this bridge.
Apr 21 06:56:03 ubuntu kernel: [    0.740297] PCI host bridge to bus 0000:00
Apr 21 06:56:03 ubuntu kernel: [    0.741310] pci_bus 0000:00: root bus resource [io  0x0000-0x0cf7 window]
Apr 21 06:56:03 ubuntu kernel: [    0.742116] pci_bus 0000:00: root bus resource [io  0x0d00-0xffff window]
Apr 21 06:56:03 ubuntu kernel: [    0.743111] pci_bus 0000:00: root bus resource [mem 0x000a0000-0x000bffff window]
Apr 21 06:56:03 ubuntu kernel: [    0.744078] pci_bus 0000:00: root bus resource [mem 0x20000000-0xfebfffff window]
Apr 21 06:56:03 ubuntu kernel: [    0.745064] pci_bus 0000:00: root bus resource [mem 0x100000000-0x17fffffff window]
Apr 21 06:56:03 ubuntu kernel: [    0.745830] pci_bus 0000:00: root bus resource [bus 00-ff]
Apr 21 06:56:03 ubuntu kernel: [    0.749439] pci 0000:00:00.0: [8086:1237] type 00 class 0x060000
Apr 21 06:56:03 ubuntu kernel: [    0.754000] pci 0000:00:01.0: [8086:7000] type 00 class 0x060100
Apr 21 06:56:03 ubuntu kernel: [    0.754000] pci 0000:00:01.1: [8086:7010] type 00 class 0x010180
Apr 21 06:56:03 ubuntu kernel: [    0.756266] pci 0000:00:01.1: reg 0x20: [io  0xc040-0xc04f]
Apr 21 06:56:03 ubuntu kernel: [    0.757121] pci 0000:00:01.1: legacy IDE quirk: reg 0x10: [io  0x01f0-0x01f7]
Apr 21 06:56:03 ubuntu kernel: [    0.758142] pci 0000:00:01.1: legacy IDE quirk: reg 0x14: [io  0x03f6]
Apr 21 06:56:03 ubuntu kernel: [    0.759103] pci 0000:00:01.1: legacy IDE quirk: reg 0x18: [io  0x0170-0x0177]
Apr 21 06:56:03 ubuntu kernel: [    0.759300] pci 0000:00:01.1: legacy IDE quirk: reg 0x1c: [io  0x0376]
Apr 21 06:56:03 ubuntu kernel: [    0.760000] pci 0000:00:01.3: [8086:7113] type 00 class 0x068000
Apr 21 06:56:03 ubuntu kernel: [    0.760000] pci 0000:00:01.3: quirk: [io  0x0600-0x063f] claimed by PIIX4 ACPI
Apr 21 06:56:03 ubuntu kernel: [    0.760000] pci 0000:00:01.3: quirk: [io  0x0700-0x070f] claimed by PIIX4 SMB
Apr 21 06:56:03 ubuntu kernel: [    0.760000] pci 0000:00:02.0: [1234:1111] type 00 class 0x030000
Apr 21 06:56:03 ubuntu kernel: [    0.760000] pci 0000:00:02.0: reg 0x10: [mem 0xfd000000-0xfdffffff pref]
Apr 21 06:56:03 ubuntu kernel: [    0.760000] pci 0000:00:02.0: reg 0x18: [mem 0xfebb0000-0xfebb0fff]
Apr 21 06:56:03 ubuntu kernel: [    0.761084] pci 0000:00:02.0: reg 0x30: [mem 0xfeba0000-0xfebaffff pref]
Apr 21 06:56:03 ubuntu kernel: [    0.765262] pci 0000:00:03.0: [8086:100e] type 00 class 0x020000
Apr 21 06:56:03 ubuntu kernel: [    0.769000] pci 0000:00:03.0: reg 0x10: [mem 0xfeb80000-0xfeb9ffff]
Apr 21 06:56:03 ubuntu kernel: [    0.770000] pci 0000:00:03.0: reg 0x14: [io  0xc000-0xc03f]
Apr 21 06:56:03 ubuntu kernel: [    0.772000] pci 0000:00:03.0: reg 0x30: [mem 0xfeb00000-0xfeb7ffff pref]
Apr 21 06:56:03 ubuntu kernel: [    0.796064] ACPI: PCI Interrupt Link [LNKA] (IRQs 5 *10 11)
Apr 21 06:56:03 ubuntu kernel: [    0.798678] ACPI: PCI Interrupt Link [LNKB] (IRQs 5 *10 11)
Apr 21 06:56:03 ubuntu kernel: [    0.801658] ACPI: PCI Interrupt Link [LNKC] (IRQs 5 10 *11)
Apr 21 06:56:03 ubuntu kernel: [    0.804208] ACPI: PCI Interrupt Link [LNKD] (IRQs 5 10 *11)
Apr 21 06:56:03 ubuntu kernel: [    0.807061] ACPI: PCI Interrupt Link [LNKS] (IRQs *9)
Apr 21 06:56:03 ubuntu kernel: [    0.831159] pci 0000:00:02.0: vgaarb: setting as boot VGA device
Apr 21 06:56:03 ubuntu kernel: [    0.832000] pci 0000:00:02.0: vgaarb: VGA device added: decodes=io+mem,owns=io+mem,locks=none
Apr 21 06:56:03 ubuntu kernel: [    0.832116] pci 0000:00:02.0: vgaarb: bridge control possible
Apr 21 06:56:03 ubuntu kernel: [    0.833145] vgaarb: loaded
Apr 21 06:56:03 ubuntu kernel: [    0.836490] SCSI subsystem initialized
Apr 21 06:56:03 ubuntu kernel: [    0.843026] libata version 3.00 loaded.
Apr 21 06:56:03 ubuntu kernel: [    0.850239] ACPI: bus type USB registered
Apr 21 06:56:03 ubuntu kernel: [    0.856289] usbcore: registered new interface driver usbfs
Apr 21 06:56:03 ubuntu kernel: [    0.861081] usbcore: registered new interface driver hub
Apr 21 06:56:03 ubuntu kernel: [    0.866686] usbcore: registered new device driver usb
Apr 21 06:56:03 ubuntu kernel: [    0.874211] pps_core: LinuxPPS API ver. 1 registered
Apr 21 06:56:03 ubuntu kernel: [    0.875090] pps_core: Software ver. 5.3.6 - Copyright 2005-2007 Rodolfo Giometti <giometti@linux.it>
Apr 21 06:56:03 ubuntu kernel: [    0.878258] PTP clock support registered
Apr 21 06:56:03 ubuntu kernel: [    0.884141] EDAC MC: Ver: 3.0.0
Apr 21 06:56:03 ubuntu kernel: [    0.895209] Advanced Linux Sound Architecture Driver Initialized.
Apr 21 06:56:03 ubuntu kernel: [    0.898093] PCI: Using ACPI for IRQ routing
Apr 21 06:56:03 ubuntu kernel: [    0.899145] PCI: pci_cache_line_size set to 64 bytes
Apr 21 06:56:03 ubuntu kernel: [    0.902245] e820: reserve RAM buffer [mem 0x0009fc00-0x0009ffff]
Apr 21 06:56:03 ubuntu kernel: [    0.903097] e820: reserve RAM buffer [mem 0x1ffdf000-0x1fffffff]
Apr 21 06:56:03 ubuntu kernel: [    0.919783] NetLabel: Initializing
Apr 21 06:56:03 ubuntu kernel: [    0.920055] NetLabel:  domain hash size = 128
Apr 21 06:56:03 ubuntu kernel: [    0.920488] NetLabel:  protocols = UNLABELED CIPSOv4 CALIPSO
Apr 21 06:56:03 ubuntu kernel: [    0.923173] NetLabel:  unlabeled traffic allowed by default
Apr 21 06:56:03 ubuntu kernel: [    0.926427] HPET: 3 timers in total, 0 timers will be used for per-cpu timer
Apr 21 06:56:03 ubuntu kernel: [    0.928223] hpet0: at MMIO 0xfed00000, IRQs 2, 8, 0
Apr 21 06:56:03 ubuntu kernel: [    0.929079] hpet0: 3 comparators, 64-bit 100.000000 MHz counter
Apr 21 06:56:03 ubuntu kernel: [    0.941823] clocksource: Switched to clocksource hpet
Apr 21 06:56:03 ubuntu kernel: [    1.205609] VFS: Disk quotas dquot_6.6.0
Apr 21 06:56:03 ubuntu kernel: [    1.207448] VFS: Dquot-cache hash table entries: 512 (order 0, 4096 bytes)
Apr 21 06:56:03 ubuntu kernel: [    1.212894] pnp: PnP ACPI init
Apr 21 06:56:03 ubuntu kernel: [    1.219721] pnp 00:00: Plug and Play ACPI device, IDs PNP0b00 (active)
Apr 21 06:56:03 ubuntu kernel: [    1.221563] pnp 00:01: Plug and Play ACPI device, IDs PNP0303 (active)
Apr 21 06:56:03 ubuntu kernel: [    1.224005] pnp 00:02: Plug and Play ACPI device, IDs PNP0f13 (active)
Apr 21 06:56:03 ubuntu kernel: [    1.225631] pnp 00:03: [dma 2]
Apr 21 06:56:03 ubuntu kernel: [    1.226032] pnp 00:03: Plug and Play ACPI device, IDs PNP0700 (active)
Apr 21 06:56:03 ubuntu kernel: [    1.229077] pnp 00:04: Plug and Play ACPI device, IDs PNP0400 (active)
Apr 21 06:56:03 ubuntu kernel: [    1.232035] pnp 00:05: Plug and Play ACPI device, IDs PNP0501 (active)
Apr 21 06:56:03 ubuntu kernel: [    1.239809] pnp: PnP ACPI: found 6 devices
Apr 21 06:56:03 ubuntu kernel: [    1.380384] hrtimer: interrupt took 3910990 ns
Apr 21 06:56:03 ubuntu kernel: [    1.429861] clocksource: acpi_pm: mask: 0xffffff max_cycles: 0xffffff, max_idle_ns: 2085701024 ns
Apr 21 06:56:03 ubuntu kernel: [    1.432529] pci_bus 0000:00: resource 4 [io  0x0000-0x0cf7 window]
Apr 21 06:56:03 ubuntu kernel: [    1.432555] pci_bus 0000:00: resource 5 [io  0x0d00-0xffff window]
Apr 21 06:56:03 ubuntu kernel: [    1.432566] pci_bus 0000:00: resource 6 [mem 0x000a0000-0x000bffff window]
Apr 21 06:56:03 ubuntu kernel: [    1.432574] pci_bus 0000:00: resource 7 [mem 0x20000000-0xfebfffff window]
Apr 21 06:56:03 ubuntu kernel: [    1.432582] pci_bus 0000:00: resource 8 [mem 0x100000000-0x17fffffff window]
Apr 21 06:56:03 ubuntu kernel: [    1.433895] NET: Registered protocol family 2
Apr 21 06:56:03 ubuntu kernel: [    1.448078] TCP established hash table entries: 4096 (order: 3, 32768 bytes)
Apr 21 06:56:03 ubuntu kernel: [    1.449800] TCP bind hash table entries: 4096 (order: 4, 65536 bytes)
Apr 21 06:56:03 ubuntu kernel: [    1.450987] TCP: Hash tables configured (established 4096 bind 4096)
Apr 21 06:56:03 ubuntu kernel: [    1.454020] UDP hash table entries: 256 (order: 1, 8192 bytes)
Apr 21 06:56:03 ubuntu kernel: [    1.455839] UDP-Lite hash table entries: 256 (order: 1, 8192 bytes)
Apr 21 06:56:03 ubuntu kernel: [    1.459137] NET: Registered protocol family 1
Apr 21 06:56:03 ubuntu kernel: [    1.465950] RPC: Registered named UNIX socket transport module.
Apr 21 06:56:03 ubuntu kernel: [    1.467615] RPC: Registered udp transport module.
Apr 21 06:56:03 ubuntu kernel: [    1.467969] RPC: Registered tcp transport module.
Apr 21 06:56:03 ubuntu kernel: [    1.468666] RPC: Registered tcp NFSv4.1 backchannel transport module.
Apr 21 06:56:03 ubuntu kernel: [    1.476943] pci 0000:00:00.0: Limiting direct PCI/PCI transfers
Apr 21 06:56:03 ubuntu kernel: [    1.478324] pci 0000:00:01.0: PIIX3: Enabling Passive Release
Apr 21 06:56:03 ubuntu kernel: [    1.478859] pci 0000:00:01.0: Activating ISA DMA hang workarounds
Apr 21 06:56:03 ubuntu kernel: [    1.480443] pci 0000:00:02.0: Video device with shadowed ROM at [mem 0x000c0000-0x000dffff]
Apr 21 06:56:03 ubuntu kernel: [    1.481172] PCI: CLS 0 bytes, default 64
Apr 21 06:56:03 ubuntu kernel: [    1.492690] clocksource: tsc: mask: 0xffffffffffffffff max_cycles: 0x26e829b520f, max_idle_ns: 440795296882 ns
Apr 21 06:56:03 ubuntu kernel: [    1.526569] Scanning for low memory corruption every 60 seconds
Apr 21 06:56:03 ubuntu kernel: [    1.555624] Initialise system trusted keyrings
Apr 21 06:56:03 ubuntu kernel: [    1.561093] workingset: timestamp_bits=56 max_order=17 bucket_order=0
Apr 21 06:56:03 ubuntu kernel: [    1.717037] NFS: Registering the id_resolver key type
Apr 21 06:56:03 ubuntu kernel: [    1.719007] Key type id_resolver registered
Apr 21 06:56:03 ubuntu kernel: [    1.719726] Key type id_legacy registered
Apr 21 06:56:03 ubuntu kernel: [    1.724008] SELinux:  Registering netfilter hooks
Apr 21 06:56:03 ubuntu kernel: [    1.771783] Key type asymmetric registered
Apr 21 06:56:03 ubuntu kernel: [    1.774415] Asymmetric key parser 'x509' registered
Apr 21 06:56:03 ubuntu kernel: [    1.775032] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 250)
Apr 21 06:56:03 ubuntu kernel: [    1.777680] io scheduler noop registered
Apr 21 06:56:03 ubuntu kernel: [    1.778058] io scheduler deadline registered
Apr 21 06:56:03 ubuntu kernel: [    1.781601] io scheduler cfq registered (default)
Apr 21 06:56:03 ubuntu kernel: [    1.781958] io scheduler mq-deadline registered
Apr 21 06:56:03 ubuntu kernel: [    1.783509] io scheduler kyber registered
Apr 21 06:56:03 ubuntu kernel: [    1.794601] input: Power Button as /devices/LNXSYSTM:00/LNXPWRBN:00/input/input0
Apr 21 06:56:03 ubuntu kernel: [    1.801686] ACPI: Power Button [PWRF]
Apr 21 06:56:03 ubuntu kernel: [    1.832728] Serial: 8250/16550 driver, 4 ports, IRQ sharing enabled
Apr 21 06:56:03 ubuntu kernel: [    1.864958] 00:05: ttyS0 at I/O 0x3f8 (irq = 4, base_baud = 115200) is a 16550A
Apr 21 06:56:03 ubuntu kernel: [    1.907033] Non-volatile memory driver v1.3
Apr 21 06:56:03 ubuntu kernel: [    1.911123] Linux agpgart interface v0.103
Apr 21 06:56:03 ubuntu kernel: [    2.035865] loop: module loaded
Apr 21 06:56:03 ubuntu kernel: [    2.046842] ata_piix 0000:00:01.1: version 2.13
Apr 21 06:56:03 ubuntu kernel: [    2.072052] scsi host0: ata_piix
Apr 21 06:56:03 ubuntu kernel: [    2.079839] scsi host1: ata_piix
Apr 21 06:56:03 ubuntu kernel: [    2.085019] ata1: PATA max MWDMA2 cmd 0x1f0 ctl 0x3f6 bmdma 0xc040 irq 14
Apr 21 06:56:03 ubuntu kernel: [    2.092397] ata2: PATA max MWDMA2 cmd 0x170 ctl 0x376 bmdma 0xc048 irq 15
Apr 21 06:56:03 ubuntu kernel: [    2.111672] e100: Intel(R) PRO/100 Network Driver, 3.5.24-k2-NAPI
Apr 21 06:56:03 ubuntu kernel: [    2.119542] e100: Copyright(c) 1999-2006 Intel Corporation
Apr 21 06:56:03 ubuntu kernel: [    2.132426] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
Apr 21 06:56:03 ubuntu kernel: [    2.137750] e1000: Copyright (c) 1999-2006 Intel Corporation.
Apr 21 06:56:03 ubuntu kernel: [    2.324014] ata2.01: NODEV after polling detection
Apr 21 06:56:03 ubuntu kernel: [    2.334492] ata1.01: NODEV after polling detection
Apr 21 06:56:03 ubuntu kernel: [    2.346121] ata2.00: ATAPI: QEMU DVD-ROM, 2.5+, max UDMA/100
Apr 21 06:56:03 ubuntu kernel: [    2.361580] ata1.00: ATA-7: QEMU HARDDISK, 2.5+, max UDMA/100
Apr 21 06:56:03 ubuntu kernel: [    2.369438] ata1.00: 16777216 sectors, multi 16: LBA48 
Apr 21 06:56:03 ubuntu kernel: [    2.410005] ata2.00: configured for MWDMA2
Apr 21 06:56:03 ubuntu kernel: [    2.421030] ata1.00: configured for MWDMA2
Apr 21 06:56:03 ubuntu kernel: [    2.463695] scsi 0:0:0:0: Direct-Access     ATA      QEMU HARDDISK    2.5+ PQ: 0 ANSI: 5
Apr 21 06:56:03 ubuntu kernel: [    2.513926] sd 0:0:0:0: Attached scsi generic sg0 type 0
Apr 21 06:56:03 ubuntu kernel: [    2.531062] sd 0:0:0:0: [sda] 16777216 512-byte logical blocks: (8.59 GB/8.00 GiB)
Apr 21 06:56:03 ubuntu kernel: [    2.543758] sd 0:0:0:0: [sda] Write Protect is off
Apr 21 06:56:03 ubuntu kernel: [    2.547898] sd 0:0:0:0: [sda] Mode Sense: 00 3a 00 00
Apr 21 06:56:03 ubuntu kernel: [    2.551989] scsi 1:0:0:0: CD-ROM            QEMU     QEMU DVD-ROM     2.5+ PQ: 0 ANSI: 5
Apr 21 06:56:03 ubuntu kernel: [    2.557958] sd 0:0:0:0: [sda] Write cache: enabled, read cache: enabled, doesn't support DPO or FUA
Apr 21 06:56:03 ubuntu kernel: [    2.660549] sr 1:0:0:0: [sr0] scsi3-mmc drive: 4x/4x cd/rw xa/form2 tray
Apr 21 06:56:03 ubuntu kernel: [    2.669688] cdrom: Uniform CD-ROM driver Revision: 3.20
Apr 21 06:56:03 ubuntu kernel: [    2.689605] sr 1:0:0:0: Attached scsi CD-ROM sr0
Apr 21 06:56:03 ubuntu kernel: [    2.701929] sd 0:0:0:0: [sda] Attached SCSI disk
Apr 21 06:56:03 ubuntu kernel: [    2.712568] sr 1:0:0:0: Attached scsi generic sg1 type 5
Apr 21 06:56:03 ubuntu kernel: [    2.775886] ACPI: PCI Interrupt Link [LNKC] enabled at IRQ 11
Apr 21 06:56:03 ubuntu kernel: [    3.366003] e1000 0000:00:03.0 eth0: (PCI:33MHz:32-bit) 52:54:00:12:34:56
Apr 21 06:56:03 ubuntu kernel: [    3.366501] e1000 0000:00:03.0 eth0: Intel(R) PRO/1000 Network Connection
Apr 21 06:56:03 ubuntu kernel: [    3.370014] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
Apr 21 06:56:03 ubuntu kernel: [    3.370284] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
Apr 21 06:56:03 ubuntu kernel: [    3.375785] sky2: driver version 1.30
Apr 21 06:56:03 ubuntu kernel: [    3.395983] ehci_hcd: USB 2.0 'Enhanced' Host Controller (EHCI) Driver
Apr 21 06:56:03 ubuntu kernel: [    3.396724] ehci-pci: EHCI PCI platform driver
Apr 21 06:56:03 ubuntu kernel: [    3.396796] ohci_hcd: USB 1.1 'Open' Host Controller (OHCI) Driver
Apr 21 06:56:03 ubuntu kernel: [    3.396796] ohci-pci: OHCI PCI platform driver
Apr 21 06:56:03 ubuntu kernel: [    3.396796] uhci_hcd: USB Universal Host Controller Interface driver
Apr 21 06:56:03 ubuntu kernel: [    3.406657] usbcore: registered new interface driver usblp
Apr 21 06:56:03 ubuntu kernel: [    3.407547] usbcore: registered new interface driver usb-storage
Apr 21 06:56:03 ubuntu kernel: [    3.419797] i8042: PNP: PS/2 Controller [PNP0303:KBD,PNP0f13:MOU] at 0x60,0x64 irq 1,12
Apr 21 06:56:03 ubuntu kernel: [    3.434056] serio: i8042 KBD port at 0x60,0x64 irq 1
Apr 21 06:56:03 ubuntu kernel: [    3.434425] serio: i8042 AUX port at 0x60,0x64 irq 12
Apr 21 06:56:03 ubuntu kernel: [    3.447089] rtc_cmos 00:00: RTC can wake from S4
Apr 21 06:56:03 ubuntu kernel: [    3.458862] rtc_cmos 00:00: rtc core: registered rtc_cmos as rtc0
Apr 21 06:56:03 ubuntu kernel: [    3.464089] rtc_cmos 00:00: alarms up to one day, y3k, 114 bytes nvram, hpet irqs
Apr 21 06:56:03 ubuntu kernel: [    3.464301] input: AT Translated Set 2 keyboard as /devices/platform/i8042/serio0/input/input1
Apr 21 06:56:03 ubuntu kernel: [    3.475346] device-mapper: ioctl: 4.37.0-ioctl (2017-09-20) initialised: dm-devel@redhat.com
Apr 21 06:56:03 ubuntu kernel: [    3.499456] hidraw: raw HID events driver (C) Jiri Kosina
Apr 21 06:56:03 ubuntu kernel: [    3.554413] usbcore: registered new interface driver usbhid
Apr 21 06:56:03 ubuntu kernel: [    3.555026] usbhid: USB HID core driver
Apr 21 06:56:03 ubuntu kernel: [    3.578698] Netfilter messages via NETLINK v0.30.
Apr 21 06:56:03 ubuntu kernel: [    3.581032] nf_conntrack version 0.5.0 (4096 buckets, 16384 max)
Apr 21 06:56:03 ubuntu kernel: [    3.584899] ctnetlink v0.93: registering with nfnetlink.
Apr 21 06:56:03 ubuntu kernel: [    3.590867] ip_tables: (C) 2000-2006 Netfilter Core Team
Apr 21 06:56:03 ubuntu kernel: [    3.598741] Initializing XFRM netlink socket
Apr 21 06:56:03 ubuntu kernel: [    3.605150] NET: Registered protocol family 10
Apr 21 06:56:03 ubuntu kernel: [    3.625039] Segment Routing with IPv6
Apr 21 06:56:03 ubuntu kernel: [    3.627602] ip6_tables: (C) 2000-2006 Netfilter Core Team
Apr 21 06:56:03 ubuntu kernel: [    3.633422] sit: IPv6, IPv4 and MPLS over IPv4 tunneling driver
Apr 21 06:56:03 ubuntu kernel: [    3.640772] NET: Registered protocol family 17
Apr 21 06:56:03 ubuntu kernel: [    3.641328] Key type dns_resolver registered
Apr 21 06:56:03 ubuntu kernel: [    3.665827] registered taskstats version 1
Apr 21 06:56:03 ubuntu kernel: [    3.666325] Loading compiled-in X.509 certificates
Apr 21 06:56:03 ubuntu kernel: [    3.679715]   Magic number: 0:92:924
Apr 21 06:56:03 ubuntu kernel: [    3.683645] console [netcon0] enabled
Apr 21 06:56:03 ubuntu kernel: [    3.684164] netconsole: network logging started
Apr 21 06:56:03 ubuntu kernel: [    3.693114] cfg80211: Loading compiled-in X.509 certificates for regulatory database
Apr 21 06:56:03 ubuntu kernel: [    3.729072] cfg80211: Loaded X.509 cert 'sforshee: 00b28ddf47aef9cea7'
Apr 21 06:56:03 ubuntu kernel: [    3.731722] ALSA device list:
Apr 21 06:56:03 ubuntu kernel: [    3.732133]   No soundcards found.
Apr 21 06:56:03 ubuntu kernel: [    3.735486] platform regulatory.0: Direct firmware load for regulatory.db failed with error -2
Apr 21 06:56:03 ubuntu kernel: [    3.736199] cfg80211: failed to load regulatory.db
Apr 21 06:56:03 ubuntu kernel: [    4.218125] input: ImExPS/2 Generic Explorer Mouse as /devices/platform/i8042/serio1/input/input3
Apr 21 06:56:03 ubuntu kernel: [    4.237690] md: Waiting for all devices to be available before autodetect
Apr 21 06:56:03 ubuntu kernel: [    4.238118] md: If you don't use raid, use raid=noautodetect
Apr 21 06:56:03 ubuntu kernel: [    4.245911] md: Autodetecting RAID arrays.
Apr 21 06:56:03 ubuntu kernel: [    4.246201] md: autorun ...
Apr 21 06:56:03 ubuntu kernel: [    4.246361] md: ... autorun DONE.
Apr 21 06:56:03 ubuntu kernel: [    4.256949] EXT4-fs (sda): couldn't mount as ext3 due to feature incompatibilities
Apr 21 06:56:03 ubuntu kernel: [    4.262002] EXT4-fs (sda): couldn't mount as ext2 due to feature incompatibilities
Apr 21 06:56:03 ubuntu kernel: [    4.634057] EXT4-fs (sda): warning: mounting fs with errors, running e2fsck is recommended
Apr 21 06:56:03 ubuntu kernel: [    4.646020] EXT4-fs (sda): Errors on filesystem, clearing orphan list.
Apr 21 06:56:03 ubuntu kernel: [    4.646020] 
Apr 21 06:56:03 ubuntu kernel: [    4.646318] EXT4-fs (sda): recovery complete
Apr 21 06:56:03 ubuntu kernel: [    4.651826] EXT4-fs (sda): mounted filesystem with ordered data mode. Opts: (null)
Apr 21 06:56:03 ubuntu kernel: [    4.652343] VFS: Mounted root (ext4 filesystem) on device 8:0.
Apr 21 06:56:03 ubuntu kernel: [    4.661820] devtmpfs: mounted
Apr 21 06:56:03 ubuntu kernel: [    4.723456] Freeing unused kernel memory: 1224K
Apr 21 06:56:03 ubuntu kernel: [    4.723859] Write protecting the kernel read-only data: 18432k
Apr 21 06:56:03 ubuntu kernel: [    4.730018] Freeing unused kernel memory: 2004K
Apr 21 06:56:03 ubuntu kernel: [    4.735596] Freeing unused kernel memory: 380K
Apr 21 06:56:03 ubuntu kernel: [    5.542655] random: crng init done
Apr 21 06:56:03 ubuntu kernel: [    6.414124] systemd-debug-g (1053) used greatest stack depth: 14208 bytes left
Apr 21 06:56:03 ubuntu kernel: [    6.508766] systemd-cryptse (1052) used greatest stack depth: 13808 bytes left
Apr 21 06:56:03 ubuntu kernel: [    7.315678] systemd-sysv-ge (1060) used greatest stack depth: 13680 bytes left
Apr 21 06:56:08 ubuntu kernel: [   26.144896] e1000 0000:00:03.0 enp0s3: renamed from eth0
Apr 21 06:56:50 ubuntu kernel: [   68.801282] make (1753) used greatest stack depth: 13440 bytes left
Apr 21 06:57:03 ubuntu kernel: [   81.611658] EXT4-fs warning (device sda): ext4_dirent_csum_verify:353: inode #13453: comm make: No space for directory leaf checksum. Please run e2fsck -D.
Apr 21 06:57:03 ubuntu kernel: [   81.615052] EXT4-fs error (device sda): ext4_find_entry:1447: inode #13453: comm make: checksumming directory block 0
Apr 21 07:01:14 ubuntu kernel: [  332.776371] EXT4-fs (sda): error count since last fsck: 10
Apr 21 07:01:14 ubuntu kernel: [  332.780913] EXT4-fs (sda): initial error at time 1587451481: ext4_iget:4782: inode 304474
Apr 21 07:01:14 ubuntu kernel: [  332.782652] EXT4-fs (sda): last error at time 1587452223: ext4_find_entry:1447: inode 13453
Apr 21 07:13:05 ubuntu kernel: [ 1043.968943] EXT4-fs error (device sda): ext4_validate_block_bitmap:385: comm kworker/u9:3: bg 19: bad block bitmap checksum
Apr 21 07:16:50 ubuntu kernel: [ 1268.025152] kworker/dying (1269) used greatest stack depth: 13008 bytes left
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Linux version 4.15.0 (root@ubuntu) (gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1~18.04)) #1 SMP Mon Apr 20 19:03:11 UTC 2020
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Command line: root=/dev/sda rw console=ttyS0
Apr 21 17:03:21 ubuntu kernel: [    0.000000] x86/fpu: x87 FPU will use FXSAVE
Apr 21 17:03:21 ubuntu kernel: [    0.000000] e820: BIOS-provided physical RAM map:
Apr 21 17:03:21 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x0000000000000000-0x000000000009fbff] usable
Apr 21 17:03:21 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x000000000009fc00-0x000000000009ffff] reserved
Apr 21 17:03:21 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x00000000000f0000-0x00000000000fffff] reserved
Apr 21 17:03:21 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x0000000000100000-0x000000001ffdefff] usable
Apr 21 17:03:21 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x000000001ffdf000-0x000000001fffffff] reserved
Apr 21 17:03:21 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x00000000fffc0000-0x00000000ffffffff] reserved
Apr 21 17:03:21 ubuntu kernel: [    0.000000] NX (Execute Disable) protection: active
Apr 21 17:03:21 ubuntu kernel: [    0.000000] random: fast init done
Apr 21 17:03:21 ubuntu kernel: [    0.000000] SMBIOS 2.8 present.
Apr 21 17:03:21 ubuntu kernel: [    0.000000] DMI: QEMU Standard PC (i440FX + PIIX, 1996), BIOS 1.10.2-1ubuntu1 04/01/2014
Apr 21 17:03:21 ubuntu kernel: [    0.000000] e820: update [mem 0x00000000-0x00000fff] usable ==> reserved
Apr 21 17:03:21 ubuntu kernel: [    0.000000] e820: remove [mem 0x000a0000-0x000fffff] usable
Apr 21 17:03:21 ubuntu kernel: [    0.000000] e820: last_pfn = 0x1ffdf max_arch_pfn = 0x400000000
Apr 21 17:03:21 ubuntu kernel: [    0.000000] MTRR default type: write-back
Apr 21 17:03:21 ubuntu kernel: [    0.000000] MTRR fixed ranges enabled:
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   00000-9FFFF write-back
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   A0000-BFFFF uncachable
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   C0000-FFFFF write-protect
Apr 21 17:03:21 ubuntu kernel: [    0.000000] MTRR variable ranges enabled:
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   0 base 0080000000 mask FF80000000 uncachable
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   1 disabled
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   2 disabled
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   3 disabled
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   4 disabled
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   5 disabled
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   6 disabled
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   7 disabled
Apr 21 17:03:21 ubuntu kernel: [    0.000000] x86/PAT: Configuration [0-7]: WB  WC  UC- UC  WB  WP  UC- WT  
Apr 21 17:03:21 ubuntu kernel: [    0.000000] found SMP MP-table at [mem 0x000f6a60-0x000f6a6f] mapped at [        (ptrval)]
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Scanning 1 areas for low memory corruption
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Base memory trampoline at [        (ptrval)] 99000 size 24576
Apr 21 17:03:21 ubuntu kernel: [    0.000000] BRK [0x1bf2c000, 0x1bf2cfff] PGTABLE
Apr 21 17:03:21 ubuntu kernel: [    0.000000] BRK [0x1bf2d000, 0x1bf2dfff] PGTABLE
Apr 21 17:03:21 ubuntu kernel: [    0.000000] BRK [0x1bf2e000, 0x1bf2efff] PGTABLE
Apr 21 17:03:21 ubuntu kernel: [    0.000000] BRK [0x1bf2f000, 0x1bf2ffff] PGTABLE
Apr 21 17:03:21 ubuntu kernel: [    0.000000] BRK [0x1bf30000, 0x1bf30fff] PGTABLE
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: Early table checksum verification disabled
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: RSDP 0x00000000000F6A10 000014 (v00 BOCHS )
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: RSDT 0x000000001FFE15BA 000034 (v01 BOCHS  BXPCRSDT 00000001 BXPC 00000001)
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: FACP 0x000000001FFE12EE 000074 (v01 BOCHS  BXPCFACP 00000001 BXPC 00000001)
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: DSDT 0x000000001FFDFDC0 00152E (v01 BOCHS  BXPCDSDT 00000001 BXPC 00000001)
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: FACS 0x000000001FFDFD80 000040
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: APIC 0x000000001FFE13E2 000090 (v01 BOCHS  BXPCAPIC 00000001 BXPC 00000001)
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: HPET 0x000000001FFE1472 000038 (v01 BOCHS  BXPCHPET 00000001 BXPC 00000001)
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: SRAT 0x000000001FFE14AA 000110 (v01 BOCHS  BXPCSRAT 00000001 BXPC 00000001)
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: Local APIC address 0xfee00000
Apr 21 17:03:21 ubuntu kernel: [    0.000000] SRAT: PXM 0 -> APIC 0x00 -> Node 0
Apr 21 17:03:21 ubuntu kernel: [    0.000000] SRAT: PXM 1 -> APIC 0x01 -> Node 1
Apr 21 17:03:21 ubuntu kernel: [    0.000000] SRAT: PXM 0 -> APIC 0x02 -> Node 0
Apr 21 17:03:21 ubuntu kernel: [    0.000000] SRAT: PXM 1 -> APIC 0x03 -> Node 1
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 0 PXM 0 [mem 0x00000000-0x0009ffff]
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 0 PXM 0 [mem 0x00100000-0x0fffffff]
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 1 PXM 1 [mem 0x10000000-0x1fffffff]
Apr 21 17:03:21 ubuntu kernel: [    0.000000] NUMA: Node 0 [mem 0x00000000-0x0009ffff] + [mem 0x00100000-0x0fffffff] -> [mem 0x00000000-0x0fffffff]
Apr 21 17:03:21 ubuntu kernel: [    0.000000] NODE_DATA(0) allocated [mem 0x0fffc000-0x0fffffff]
Apr 21 17:03:21 ubuntu kernel: [    0.000000] NODE_DATA(1) allocated [mem 0x1ffdb000-0x1ffdefff]
Apr 21 17:03:21 ubuntu kernel: [    0.000000] tsc: Fast TSC calibration using PIT
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Zone ranges:
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   DMA      [mem 0x0000000000001000-0x0000000000ffffff]
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   DMA32    [mem 0x0000000001000000-0x000000001ffdefff]
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   Normal   empty
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Movable zone start for each node
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Early memory node ranges
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   node   0: [mem 0x0000000000001000-0x000000000009efff]
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   node   0: [mem 0x0000000000100000-0x000000000fffffff]
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   node   1: [mem 0x0000000010000000-0x000000001ffdefff]
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Initmem setup node 0 [mem 0x0000000000001000-0x000000000fffffff]
Apr 21 17:03:21 ubuntu kernel: [    0.000000] On node 0 totalpages: 65438
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   DMA zone: 64 pages used for memmap
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   DMA zone: 21 pages reserved
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   DMA zone: 3998 pages, LIFO batch:0
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   DMA32 zone: 960 pages used for memmap
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   DMA32 zone: 61440 pages, LIFO batch:15
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Initmem setup node 1 [mem 0x0000000010000000-0x000000001ffdefff]
Apr 21 17:03:21 ubuntu kernel: [    0.000000] On node 1 totalpages: 65503
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   DMA32 zone: 1024 pages used for memmap
Apr 21 17:03:21 ubuntu kernel: [    0.000000]   DMA32 zone: 65503 pages, LIFO batch:15
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Reserved but unavailable: 98 pages
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: PM-Timer IO Port: 0x608
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: Local APIC address 0xfee00000
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: LAPIC_NMI (acpi_id[0xff] dfl dfl lint[0x1])
Apr 21 17:03:21 ubuntu kernel: [    0.000000] IOAPIC[0]: apic_id 0, version 32, address 0xfec00000, GSI 0-23
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 0 global_irq 2 dfl dfl)
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 5 global_irq 5 high level)
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 9 global_irq 9 high level)
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 10 global_irq 10 high level)
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 11 global_irq 11 high level)
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: IRQ0 used by override.
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: IRQ5 used by override.
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: IRQ9 used by override.
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: IRQ10 used by override.
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: IRQ11 used by override.
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Using ACPI (MADT) for SMP configuration information
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: HPET id: 0x8086a201 base: 0xfed00000
Apr 21 17:03:21 ubuntu kernel: [    0.000000] smpboot: Allowing 4 CPUs, 0 hotplug CPUs
Apr 21 17:03:21 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x00000000-0x00000fff]
Apr 21 17:03:21 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x0009f000-0x0009ffff]
Apr 21 17:03:21 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x000a0000-0x000effff]
Apr 21 17:03:21 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x000f0000-0x000fffff]
Apr 21 17:03:21 ubuntu kernel: [    0.000000] e820: [mem 0x20000000-0xfffbffff] available for PCI devices
Apr 21 17:03:21 ubuntu kernel: [    0.000000] clocksource: refined-jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 1910969940391419 ns
Apr 21 17:03:21 ubuntu kernel: [    0.000000] setup_percpu: NR_CPUS:64 nr_cpumask_bits:64 nr_cpu_ids:4 nr_node_ids:2
Apr 21 17:03:21 ubuntu kernel: [    0.000000] percpu: Embedded 43 pages/cpu @        (ptrval) s138520 r8192 d29416 u1048576
Apr 21 17:03:21 ubuntu kernel: [    0.000000] pcpu-alloc: s138520 r8192 d29416 u1048576 alloc=1*2097152
Apr 21 17:03:21 ubuntu kernel: [    0.000000] pcpu-alloc: [0] 0 2 [1] 1 3 
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Built 2 zonelists, mobility grouping on.  Total pages: 128872
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Policy zone: DMA32
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Kernel command line: root=/dev/sda rw console=ttyS0
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Calgary: detecting Calgary via BIOS EBDA area
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Calgary: Unable to locate Rio Grande table in EBDA - bailing!
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Memory: 488888K/523764K available (12300K kernel code, 1289K rwdata, 3716K rodata, 1224K init, 660K bss, 34876K reserved, 0K cma-reserved)
Apr 21 17:03:21 ubuntu kernel: [    0.000000] SLUB: HWalign=64, Order=0-3, MinObjects=0, CPUs=4, Nodes=2
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Hierarchical RCU implementation.
Apr 21 17:03:21 ubuntu kernel: [    0.000000] 	RCU event tracing is enabled.
Apr 21 17:03:21 ubuntu kernel: [    0.000000] 	RCU restricting CPUs from NR_CPUS=64 to nr_cpu_ids=4.
Apr 21 17:03:21 ubuntu kernel: [    0.000000] RCU: Adjusting geometry for rcu_fanout_leaf=16, nr_cpu_ids=4
Apr 21 17:03:21 ubuntu kernel: [    0.000000] NR_IRQS: 4352, nr_irqs: 456, preallocated irqs: 16
Apr 21 17:03:21 ubuntu kernel: [    0.000000] Console: colour VGA+ 80x25
Apr 21 17:03:21 ubuntu kernel: [    0.000000] console [ttyS0] enabled
Apr 21 17:03:21 ubuntu kernel: [    0.000000] mempolicy: Enabling automatic NUMA balancing. Configure with numa_balancing= or the kernel.numa_balancing sysctl
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: Core revision 20170831
Apr 21 17:03:21 ubuntu kernel: [    0.000000] ACPI: 1 ACPI AML tables successfully acquired and loaded
Apr 21 17:03:21 ubuntu kernel: [    0.000000] clocksource: hpet: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 19112604467 ns
Apr 21 17:03:21 ubuntu kernel: [    0.000000] hpet clockevent registered
Apr 21 17:03:21 ubuntu kernel: [    0.004000] APIC: Switch to symmetric I/O mode setup
Apr 21 17:03:21 ubuntu kernel: [    0.008000] ..TIMER: vector=0x30 apic1=0 pin1=2 apic2=-1 pin2=-1
Apr 21 17:03:21 ubuntu kernel: [    0.013000] tsc: Fast TSC calibration using PIT
Apr 21 17:03:21 ubuntu kernel: [    0.014000] tsc: Detected 2699.479 MHz processor
Apr 21 17:03:21 ubuntu kernel: [    0.016310] tsc: Marking TSC unstable due to TSCs unsynchronized
Apr 21 17:03:21 ubuntu kernel: [    0.017207] Calibrating delay loop (skipped), value calculated using timer frequency.. 5398.95 BogoMIPS (lpj=2699479)
Apr 21 17:03:21 ubuntu kernel: [    0.017882] pid_max: default: 32768 minimum: 301
Apr 21 17:03:21 ubuntu kernel: [    0.019505] Security Framework initialized
Apr 21 17:03:21 ubuntu kernel: [    0.020072] SELinux:  Initializing.
Apr 21 17:03:21 ubuntu kernel: [    0.020666] SELinux:  Starting in permissive mode
Apr 21 17:03:21 ubuntu kernel: [    0.022734] Dentry cache hash table entries: 65536 (order: 7, 524288 bytes)
Apr 21 17:03:21 ubuntu kernel: [    0.024173] Inode-cache hash table entries: 32768 (order: 6, 262144 bytes)
Apr 21 17:03:21 ubuntu kernel: [    0.025000] Mount-cache hash table entries: 1024 (order: 1, 8192 bytes)
Apr 21 17:03:21 ubuntu kernel: [    0.025000] Mountpoint-cache hash table entries: 1024 (order: 1, 8192 bytes)
Apr 21 17:03:21 ubuntu kernel: [    0.036642] mce: CPU supports 10 MCE banks
Apr 21 17:03:21 ubuntu kernel: [    0.038574] Last level iTLB entries: 4KB 0, 2MB 0, 4MB 0
Apr 21 17:03:21 ubuntu kernel: [    0.039092] Last level dTLB entries: 4KB 0, 2MB 0, 4MB 0, 1GB 0
Apr 21 17:03:21 ubuntu kernel: [    0.039527] Spectre V2 mitigation: LFENCE not serializing. Switching to generic retpoline
Apr 21 17:03:21 ubuntu kernel: [    0.040090] Spectre V2 mitigation: Mitigation: Full generic retpoline
Apr 21 17:03:21 ubuntu kernel: [    0.040525] Spectre V2 mitigation: Filling RSB on context switch
Apr 21 17:03:21 ubuntu kernel: [    0.048264] Freeing SMP alternatives memory: 40K
Apr 21 17:03:21 ubuntu kernel: [    0.068000] APIC calibration not consistent with PM-Timer: 101ms instead of 100ms
Apr 21 17:03:21 ubuntu kernel: [    0.068000] APIC delta adjusted to PM-Timer: 6250224 (6369221)
Apr 21 17:03:21 ubuntu kernel: [    0.068621] smpboot: CPU0: AMD QEMU Virtual CPU version 2.5+ (family: 0x6, model: 0x6, stepping: 0x3)
Apr 21 17:03:21 ubuntu kernel: [    0.078251] Performance Events: PMU not available due to virtualization, using software events only.
Apr 21 17:03:21 ubuntu kernel: [    0.082191] Hierarchical SRCU implementation.
Apr 21 17:03:21 ubuntu kernel: [    0.088258] Huh? What family is it: 0x6?!
Apr 21 17:03:21 ubuntu kernel: [    0.090807] smp: Bringing up secondary CPUs ...
Apr 21 17:03:21 ubuntu kernel: [    0.094331] x86: Booting SMP configuration:
Apr 21 17:03:21 ubuntu kernel: [    0.094746] .... node  #1, CPUs:      #1
Apr 21 17:03:21 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping max bogoMips estimate 3 = 6201299
Apr 21 17:03:21 ubuntu kernel: [    0.179000] .... node  #0, CPUs:   #2
Apr 21 17:03:21 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping max bogoMips estimate 4 = 5696948
Apr 21 17:03:21 ubuntu kernel: [    0.254257] .... node  #1, CPUs:   #3
Apr 21 17:03:21 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping min bogoMips estimate 1 = 4885274
Apr 21 17:03:21 ubuntu kernel: [    0.325344] smp: Brought up 2 nodes, 4 CPUs
Apr 21 17:03:21 ubuntu kernel: [    0.326197] smpboot: Max logical packages: 4
Apr 21 17:03:21 ubuntu kernel: [    0.326498] smpboot: Total of 4 processors activated (37589.45 BogoMIPS)
Apr 21 17:03:21 ubuntu kernel: [    0.347092] devtmpfs: initialized
Apr 21 17:03:21 ubuntu kernel: [    0.357417] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 1911260446275000 ns
Apr 21 17:03:21 ubuntu kernel: [    0.358000] futex hash table entries: 1024 (order: 4, 65536 bytes)
Apr 21 17:03:21 ubuntu kernel: [    0.358433] RTC time: 17:02:53, date: 04/21/20
Apr 21 17:03:21 ubuntu kernel: [    0.373578] NET: Registered protocol family 16
Apr 21 17:03:21 ubuntu kernel: [    0.376159] kworker/u9:1 (32) used greatest stack depth: 14728 bytes left
Apr 21 17:03:21 ubuntu kernel: [    0.380290] audit: initializing netlink subsys (disabled)
Apr 21 17:03:21 ubuntu kernel: [    0.385595] audit: type=2000 audit(1587488572.383:1): state=initialized audit_enabled=0 res=1
Apr 21 17:03:21 ubuntu kernel: [    0.395453] cpuidle: using governor menu
Apr 21 17:03:21 ubuntu kernel: [    0.396731] ACPI: bus type PCI registered
Apr 21 17:03:21 ubuntu kernel: [    0.403143] PCI: Using configuration type 1 for base access
Apr 21 17:03:21 ubuntu kernel: [    0.410889] mtrr: your CPUs had inconsistent fixed MTRR settings
Apr 21 17:03:21 ubuntu kernel: [    0.411835] mtrr: your CPUs had inconsistent variable MTRR settings
Apr 21 17:03:21 ubuntu kernel: [    0.411835] mtrr: your CPUs had inconsistent MTRRdefType settings
Apr 21 17:03:21 ubuntu kernel: [    0.411943] mtrr: probably your BIOS does not setup all CPUs.
Apr 21 17:03:21 ubuntu kernel: [    0.413022] mtrr: corrected configuration.
Apr 21 17:03:21 ubuntu kernel: [    0.423489] kworker/u10:0 (87) used greatest stack depth: 14280 bytes left
Apr 21 17:03:21 ubuntu kernel: [    0.582443] HugeTLB registered 2.00 MiB page size, pre-allocated 0 pages
Apr 21 17:03:21 ubuntu kernel: [    0.591541] ACPI: Added _OSI(Module Device)
Apr 21 17:03:21 ubuntu kernel: [    0.591774] ACPI: Added _OSI(Processor Device)
Apr 21 17:03:21 ubuntu kernel: [    0.591888] ACPI: Added _OSI(3.0 _SCP Extensions)
Apr 21 17:03:21 ubuntu kernel: [    0.592000] ACPI: Added _OSI(Processor Aggregator Device)
Apr 21 17:03:21 ubuntu kernel: [    0.615646] ACPI: Interpreter enabled
Apr 21 17:03:21 ubuntu kernel: [    0.616000] ACPI: (supports S0 S3 S4 S5)
Apr 21 17:03:21 ubuntu kernel: [    0.616239] ACPI: Using IOAPIC for interrupt routing
Apr 21 17:03:21 ubuntu kernel: [    0.619402] PCI: Using host bridge windows from ACPI; if necessary, use "pci=nocrs" and report a bug
Apr 21 17:03:21 ubuntu kernel: [    0.621000] ACPI: Enabled 2 GPEs in block 00 to 0F
Apr 21 17:03:21 ubuntu kernel: [    0.702344] ACPI: PCI Root Bridge [PCI0] (domain 0000 [bus 00-ff])
Apr 21 17:03:21 ubuntu kernel: [    0.702956] acpi PNP0A03:00: _OSC: OS supports [ASPM ClockPM Segments MSI]
Apr 21 17:03:21 ubuntu kernel: [    0.703000] acpi PNP0A03:00: _OSC failed (AE_NOT_FOUND); disabling ASPM
Apr 21 17:03:21 ubuntu kernel: [    0.703000] acpi PNP0A03:00: fail to add MMCONFIG information, can't access extended PCI configuration space under this bridge.
Apr 21 17:03:21 ubuntu kernel: [    0.703000] PCI host bridge to bus 0000:00
Apr 21 17:03:21 ubuntu kernel: [    0.703000] pci_bus 0000:00: root bus resource [io  0x0000-0x0cf7 window]
Apr 21 17:03:21 ubuntu kernel: [    0.703000] pci_bus 0000:00: root bus resource [io  0x0d00-0xffff window]
Apr 21 17:03:21 ubuntu kernel: [    0.703000] pci_bus 0000:00: root bus resource [mem 0x000a0000-0x000bffff window]
Apr 21 17:03:21 ubuntu kernel: [    0.703000] pci_bus 0000:00: root bus resource [mem 0x20000000-0xfebfffff window]
Apr 21 17:03:21 ubuntu kernel: [    0.703000] pci_bus 0000:00: root bus resource [mem 0x100000000-0x17fffffff window]
Apr 21 17:03:21 ubuntu kernel: [    0.703000] pci_bus 0000:00: root bus resource [bus 00-ff]
Apr 21 17:03:21 ubuntu kernel: [    0.703000] pci 0000:00:00.0: [8086:1237] type 00 class 0x060000
Apr 21 17:03:21 ubuntu kernel: [    0.703000] pci 0000:00:01.0: [8086:7000] type 00 class 0x060100
Apr 21 17:03:21 ubuntu kernel: [    0.704436] pci 0000:00:01.1: [8086:7010] type 00 class 0x010180
Apr 21 17:03:21 ubuntu kernel: [    0.705288] pci 0000:00:01.1: reg 0x20: [io  0xc040-0xc04f]
Apr 21 17:03:21 ubuntu kernel: [    0.706157] pci 0000:00:01.1: legacy IDE quirk: reg 0x10: [io  0x01f0-0x01f7]
Apr 21 17:03:21 ubuntu kernel: [    0.706663] pci 0000:00:01.1: legacy IDE quirk: reg 0x14: [io  0x03f6]
Apr 21 17:03:21 ubuntu kernel: [    0.707084] pci 0000:00:01.1: legacy IDE quirk: reg 0x18: [io  0x0170-0x0177]
Apr 21 17:03:21 ubuntu kernel: [    0.708081] pci 0000:00:01.1: legacy IDE quirk: reg 0x1c: [io  0x0376]
Apr 21 17:03:21 ubuntu kernel: [    0.713653] pci 0000:00:01.3: [8086:7113] type 00 class 0x068000
Apr 21 17:03:21 ubuntu kernel: [    0.715553] pci 0000:00:01.3: quirk: [io  0x0600-0x063f] claimed by PIIX4 ACPI
Apr 21 17:03:21 ubuntu kernel: [    0.716156] pci 0000:00:01.3: quirk: [io  0x0700-0x070f] claimed by PIIX4 SMB
Apr 21 17:03:21 ubuntu kernel: [    0.719149] pci 0000:00:02.0: [1234:1111] type 00 class 0x030000
Apr 21 17:03:21 ubuntu kernel: [    0.720000] pci 0000:00:02.0: reg 0x10: [mem 0xfd000000-0xfdffffff pref]
Apr 21 17:03:21 ubuntu kernel: [    0.722000] pci 0000:00:02.0: reg 0x18: [mem 0xfebb0000-0xfebb0fff]
Apr 21 17:03:21 ubuntu kernel: [    0.722000] pci 0000:00:02.0: reg 0x30: [mem 0xfeba0000-0xfebaffff pref]
Apr 21 17:03:21 ubuntu kernel: [    0.722786] pci 0000:00:03.0: [8086:100e] type 00 class 0x020000
Apr 21 17:03:21 ubuntu kernel: [    0.723000] pci 0000:00:03.0: reg 0x10: [mem 0xfeb80000-0xfeb9ffff]
Apr 21 17:03:21 ubuntu kernel: [    0.723000] pci 0000:00:03.0: reg 0x14: [io  0xc000-0xc03f]
Apr 21 17:03:21 ubuntu kernel: [    0.723000] pci 0000:00:03.0: reg 0x30: [mem 0xfeb00000-0xfeb7ffff pref]
Apr 21 17:03:21 ubuntu kernel: [    0.735606] ACPI: PCI Interrupt Link [LNKA] (IRQs 5 *10 11)
Apr 21 17:03:21 ubuntu kernel: [    0.738548] ACPI: PCI Interrupt Link [LNKB] (IRQs 5 *10 11)
Apr 21 17:03:21 ubuntu kernel: [    0.740000] ACPI: PCI Interrupt Link [LNKC] (IRQs 5 10 *11)
Apr 21 17:03:21 ubuntu kernel: [    0.741502] ACPI: PCI Interrupt Link [LNKD] (IRQs 5 10 *11)
Apr 21 17:03:21 ubuntu kernel: [    0.743187] ACPI: PCI Interrupt Link [LNKS] (IRQs *9)
Apr 21 17:03:21 ubuntu kernel: [    0.756279] pci 0000:00:02.0: vgaarb: setting as boot VGA device
Apr 21 17:03:21 ubuntu kernel: [    0.757000] pci 0000:00:02.0: vgaarb: VGA device added: decodes=io+mem,owns=io+mem,locks=none
Apr 21 17:03:21 ubuntu kernel: [    0.757275] pci 0000:00:02.0: vgaarb: bridge control possible
Apr 21 17:03:21 ubuntu kernel: [    0.758571] vgaarb: loaded
Apr 21 17:03:21 ubuntu kernel: [    0.762792] SCSI subsystem initialized
Apr 21 17:03:21 ubuntu kernel: [    0.767343] libata version 3.00 loaded.
Apr 21 17:03:21 ubuntu kernel: [    0.771526] ACPI: bus type USB registered
Apr 21 17:03:21 ubuntu kernel: [    0.772941] usbcore: registered new interface driver usbfs
Apr 21 17:03:21 ubuntu kernel: [    0.774402] usbcore: registered new interface driver hub
Apr 21 17:03:21 ubuntu kernel: [    0.774876] usbcore: registered new device driver usb
Apr 21 17:03:21 ubuntu kernel: [    0.775000] pps_core: LinuxPPS API ver. 1 registered
Apr 21 17:03:21 ubuntu kernel: [    0.775000] pps_core: Software ver. 5.3.6 - Copyright 2005-2007 Rodolfo Giometti <giometti@linux.it>
Apr 21 17:03:21 ubuntu kernel: [    0.775000] PTP clock support registered
Apr 21 17:03:21 ubuntu kernel: [    0.778373] EDAC MC: Ver: 3.0.0
Apr 21 17:03:21 ubuntu kernel: [    0.798100] Advanced Linux Sound Architecture Driver Initialized.
Apr 21 17:03:21 ubuntu kernel: [    0.801244] PCI: Using ACPI for IRQ routing
Apr 21 17:03:21 ubuntu kernel: [    0.802257] PCI: pci_cache_line_size set to 64 bytes
Apr 21 17:03:21 ubuntu kernel: [    0.802864] e820: reserve RAM buffer [mem 0x0009fc00-0x0009ffff]
Apr 21 17:03:21 ubuntu kernel: [    0.803231] e820: reserve RAM buffer [mem 0x1ffdf000-0x1fffffff]
Apr 21 17:03:21 ubuntu kernel: [    0.819314] NetLabel: Initializing
Apr 21 17:03:21 ubuntu kernel: [    0.820084] NetLabel:  domain hash size = 128
Apr 21 17:03:21 ubuntu kernel: [    0.821065] NetLabel:  protocols = UNLABELED CIPSOv4 CALIPSO
Apr 21 17:03:21 ubuntu kernel: [    0.824533] NetLabel:  unlabeled traffic allowed by default
Apr 21 17:03:21 ubuntu kernel: [    0.827816] HPET: 3 timers in total, 0 timers will be used for per-cpu timer
Apr 21 17:03:21 ubuntu kernel: [    0.828000] hpet0: at MMIO 0xfed00000, IRQs 2, 8, 0
Apr 21 17:03:21 ubuntu kernel: [    0.828000] hpet0: 3 comparators, 64-bit 100.000000 MHz counter
Apr 21 17:03:21 ubuntu kernel: [    0.828000] clocksource: Switched to clocksource hpet
Apr 21 17:03:21 ubuntu kernel: [    1.076703] VFS: Disk quotas dquot_6.6.0
Apr 21 17:03:21 ubuntu kernel: [    1.077226] VFS: Dquot-cache hash table entries: 512 (order 0, 4096 bytes)
Apr 21 17:03:21 ubuntu kernel: [    1.082409] pnp: PnP ACPI init
Apr 21 17:03:21 ubuntu kernel: [    1.085890] pnp 00:00: Plug and Play ACPI device, IDs PNP0b00 (active)
Apr 21 17:03:21 ubuntu kernel: [    1.087787] pnp 00:01: Plug and Play ACPI device, IDs PNP0303 (active)
Apr 21 17:03:21 ubuntu kernel: [    1.088640] pnp 00:02: Plug and Play ACPI device, IDs PNP0f13 (active)
Apr 21 17:03:21 ubuntu kernel: [    1.088933] pnp 00:03: [dma 2]
Apr 21 17:03:21 ubuntu kernel: [    1.089127] pnp 00:03: Plug and Play ACPI device, IDs PNP0700 (active)
Apr 21 17:03:21 ubuntu kernel: [    1.091066] pnp 00:04: Plug and Play ACPI device, IDs PNP0400 (active)
Apr 21 17:03:21 ubuntu kernel: [    1.092857] pnp 00:05: Plug and Play ACPI device, IDs PNP0501 (active)
Apr 21 17:03:21 ubuntu kernel: [    1.096560] pnp: PnP ACPI: found 6 devices
Apr 21 17:03:21 ubuntu kernel: [    1.279497] clocksource: acpi_pm: mask: 0xffffff max_cycles: 0xffffff, max_idle_ns: 2085701024 ns
Apr 21 17:03:21 ubuntu kernel: [    1.281899] pci_bus 0000:00: resource 4 [io  0x0000-0x0cf7 window]
Apr 21 17:03:21 ubuntu kernel: [    1.281935] pci_bus 0000:00: resource 5 [io  0x0d00-0xffff window]
Apr 21 17:03:21 ubuntu kernel: [    1.281954] pci_bus 0000:00: resource 6 [mem 0x000a0000-0x000bffff window]
Apr 21 17:03:21 ubuntu kernel: [    1.281972] pci_bus 0000:00: resource 7 [mem 0x20000000-0xfebfffff window]
Apr 21 17:03:21 ubuntu kernel: [    1.281989] pci_bus 0000:00: resource 8 [mem 0x100000000-0x17fffffff window]
Apr 21 17:03:21 ubuntu kernel: [    1.284494] NET: Registered protocol family 2
Apr 21 17:03:21 ubuntu kernel: [    1.296636] TCP established hash table entries: 4096 (order: 3, 32768 bytes)
Apr 21 17:03:21 ubuntu kernel: [    1.297910] TCP bind hash table entries: 4096 (order: 4, 65536 bytes)
Apr 21 17:03:21 ubuntu kernel: [    1.299048] TCP: Hash tables configured (established 4096 bind 4096)
Apr 21 17:03:21 ubuntu kernel: [    1.303582] UDP hash table entries: 256 (order: 1, 8192 bytes)
Apr 21 17:03:21 ubuntu kernel: [    1.304720] UDP-Lite hash table entries: 256 (order: 1, 8192 bytes)
Apr 21 17:03:21 ubuntu kernel: [    1.310011] NET: Registered protocol family 1
Apr 21 17:03:21 ubuntu kernel: [    1.324828] RPC: Registered named UNIX socket transport module.
Apr 21 17:03:21 ubuntu kernel: [    1.325765] RPC: Registered udp transport module.
Apr 21 17:03:21 ubuntu kernel: [    1.326098] RPC: Registered tcp transport module.
Apr 21 17:03:21 ubuntu kernel: [    1.326570] RPC: Registered tcp NFSv4.1 backchannel transport module.
Apr 21 17:03:21 ubuntu kernel: [    1.335906] pci 0000:00:00.0: Limiting direct PCI/PCI transfers
Apr 21 17:03:21 ubuntu kernel: [    1.336935] pci 0000:00:01.0: PIIX3: Enabling Passive Release
Apr 21 17:03:21 ubuntu kernel: [    1.337794] pci 0000:00:01.0: Activating ISA DMA hang workarounds
Apr 21 17:03:21 ubuntu kernel: [    1.337794] pci 0000:00:02.0: Video device with shadowed ROM at [mem 0x000c0000-0x000dffff]
Apr 21 17:03:21 ubuntu kernel: [    1.337794] PCI: CLS 0 bytes, default 64
Apr 21 17:03:21 ubuntu kernel: [    1.349933] clocksource: tsc: mask: 0xffffffffffffffff max_cycles: 0x26e95222755, max_idle_ns: 440795220792 ns
Apr 21 17:03:21 ubuntu kernel: [    1.383846] Scanning for low memory corruption every 60 seconds
Apr 21 17:03:21 ubuntu kernel: [    1.416469] Initialise system trusted keyrings
Apr 21 17:03:21 ubuntu kernel: [    1.429687] workingset: timestamp_bits=56 max_order=17 bucket_order=0
Apr 21 17:03:21 ubuntu kernel: [    1.462253] hrtimer: interrupt took 4574620 ns
Apr 21 17:03:21 ubuntu kernel: [    1.559815] NFS: Registering the id_resolver key type
Apr 21 17:03:21 ubuntu kernel: [    1.561902] Key type id_resolver registered
Apr 21 17:03:21 ubuntu kernel: [    1.563211] Key type id_legacy registered
Apr 21 17:03:21 ubuntu kernel: [    1.571622] SELinux:  Registering netfilter hooks
Apr 21 17:03:21 ubuntu kernel: [    1.652238] Key type asymmetric registered
Apr 21 17:03:21 ubuntu kernel: [    1.652512] Asymmetric key parser 'x509' registered
Apr 21 17:03:21 ubuntu kernel: [    1.654955] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 250)
Apr 21 17:03:21 ubuntu kernel: [    1.656576] io scheduler noop registered
Apr 21 17:03:21 ubuntu kernel: [    1.656771] io scheduler deadline registered
Apr 21 17:03:21 ubuntu kernel: [    1.660798] io scheduler cfq registered (default)
Apr 21 17:03:21 ubuntu kernel: [    1.661067] io scheduler mq-deadline registered
Apr 21 17:03:21 ubuntu kernel: [    1.662612] io scheduler kyber registered
Apr 21 17:03:21 ubuntu kernel: [    1.677015] input: Power Button as /devices/LNXSYSTM:00/LNXPWRBN:00/input/input0
Apr 21 17:03:21 ubuntu kernel: [    1.683931] ACPI: Power Button [PWRF]
Apr 21 17:03:21 ubuntu kernel: [    1.727847] Serial: 8250/16550 driver, 4 ports, IRQ sharing enabled
Apr 21 17:03:21 ubuntu kernel: [    1.774857] 00:05: ttyS0 at I/O 0x3f8 (irq = 4, base_baud = 115200) is a 16550A
Apr 21 17:03:21 ubuntu kernel: [    1.810054] Non-volatile memory driver v1.3
Apr 21 17:03:21 ubuntu kernel: [    1.814935] Linux agpgart interface v0.103
Apr 21 17:03:21 ubuntu kernel: [    1.926885] loop: module loaded
Apr 21 17:03:21 ubuntu kernel: [    1.933596] ata_piix 0000:00:01.1: version 2.13
Apr 21 17:03:21 ubuntu kernel: [    1.950933] scsi host0: ata_piix
Apr 21 17:03:21 ubuntu kernel: [    1.956521] scsi host1: ata_piix
Apr 21 17:03:21 ubuntu kernel: [    1.959815] ata1: PATA max MWDMA2 cmd 0x1f0 ctl 0x3f6 bmdma 0xc040 irq 14
Apr 21 17:03:21 ubuntu kernel: [    1.960080] ata2: PATA max MWDMA2 cmd 0x170 ctl 0x376 bmdma 0xc048 irq 15
Apr 21 17:03:21 ubuntu kernel: [    1.960536] e100: Intel(R) PRO/100 Network Driver, 3.5.24-k2-NAPI
Apr 21 17:03:21 ubuntu kernel: [    1.960536] e100: Copyright(c) 1999-2006 Intel Corporation
Apr 21 17:03:21 ubuntu kernel: [    1.960536] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
Apr 21 17:03:21 ubuntu kernel: [    1.960536] e1000: Copyright (c) 1999-2006 Intel Corporation.
Apr 21 17:03:21 ubuntu kernel: [    2.215556] ata2.01: NODEV after polling detection
Apr 21 17:03:21 ubuntu kernel: [    2.235498] ata1.01: NODEV after polling detection
Apr 21 17:03:21 ubuntu kernel: [    2.261071] ata2.00: ATAPI: QEMU DVD-ROM, 2.5+, max UDMA/100
Apr 21 17:03:21 ubuntu kernel: [    2.272945] ata1.00: ATA-7: QEMU HARDDISK, 2.5+, max UDMA/100
Apr 21 17:03:21 ubuntu kernel: [    2.274899] ata1.00: 16777216 sectors, multi 16: LBA48 
Apr 21 17:03:21 ubuntu kernel: [    2.311379] ata2.00: configured for MWDMA2
Apr 21 17:03:21 ubuntu kernel: [    2.312392] ACPI: PCI Interrupt Link [LNKC] enabled at IRQ 11
Apr 21 17:03:21 ubuntu kernel: [    2.319604] ata1.00: configured for MWDMA2
Apr 21 17:03:21 ubuntu kernel: [    2.369656] scsi 0:0:0:0: Direct-Access     ATA      QEMU HARDDISK    2.5+ PQ: 0 ANSI: 5
Apr 21 17:03:21 ubuntu kernel: [    2.379793] sd 0:0:0:0: Attached scsi generic sg0 type 0
Apr 21 17:03:21 ubuntu kernel: [    2.383649] sd 0:0:0:0: [sda] 16777216 512-byte logical blocks: (8.59 GB/8.00 GiB)
Apr 21 17:03:21 ubuntu kernel: [    2.384532] sd 0:0:0:0: [sda] Write Protect is off
Apr 21 17:03:21 ubuntu kernel: [    2.384532] sd 0:0:0:0: [sda] Mode Sense: 00 3a 00 00
Apr 21 17:03:21 ubuntu kernel: [    2.384532] sd 0:0:0:0: [sda] Write cache: enabled, read cache: enabled, doesn't support DPO or FUA
Apr 21 17:03:21 ubuntu kernel: [    2.431590] sd 0:0:0:0: [sda] Attached SCSI disk
Apr 21 17:03:21 ubuntu kernel: [    2.434398] scsi 1:0:0:0: CD-ROM            QEMU     QEMU DVD-ROM     2.5+ PQ: 0 ANSI: 5
Apr 21 17:03:21 ubuntu kernel: [    2.459680] sr 1:0:0:0: [sr0] scsi3-mmc drive: 4x/4x cd/rw xa/form2 tray
Apr 21 17:03:21 ubuntu kernel: [    2.460094] cdrom: Uniform CD-ROM driver Revision: 3.20
Apr 21 17:03:21 ubuntu kernel: [    2.463640] sr 1:0:0:0: Attached scsi CD-ROM sr0
Apr 21 17:03:21 ubuntu kernel: [    2.466998] sr 1:0:0:0: Attached scsi generic sg1 type 5
Apr 21 17:03:21 ubuntu kernel: [    3.091699] e1000 0000:00:03.0 eth0: (PCI:33MHz:32-bit) 52:54:00:12:34:56
Apr 21 17:03:21 ubuntu kernel: [    3.094541] e1000 0000:00:03.0 eth0: Intel(R) PRO/1000 Network Connection
Apr 21 17:03:21 ubuntu kernel: [    3.097597] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
Apr 21 17:03:21 ubuntu kernel: [    3.097848] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
Apr 21 17:03:21 ubuntu kernel: [    3.099441] sky2: driver version 1.30
Apr 21 17:03:21 ubuntu kernel: [    3.106714] ehci_hcd: USB 2.0 'Enhanced' Host Controller (EHCI) Driver
Apr 21 17:03:21 ubuntu kernel: [    3.109677] ehci-pci: EHCI PCI platform driver
Apr 21 17:03:21 ubuntu kernel: [    3.110925] ohci_hcd: USB 1.1 'Open' Host Controller (OHCI) Driver
Apr 21 17:03:21 ubuntu kernel: [    3.113049] ohci-pci: OHCI PCI platform driver
Apr 21 17:03:21 ubuntu kernel: [    3.114868] uhci_hcd: USB Universal Host Controller Interface driver
Apr 21 17:03:21 ubuntu kernel: [    3.117562] usbcore: registered new interface driver usblp
Apr 21 17:03:21 ubuntu kernel: [    3.118167] usbcore: registered new interface driver usb-storage
Apr 21 17:03:21 ubuntu kernel: [    3.125395] i8042: PNP: PS/2 Controller [PNP0303:KBD,PNP0f13:MOU] at 0x60,0x64 irq 1,12
Apr 21 17:03:21 ubuntu kernel: [    3.135104] serio: i8042 KBD port at 0x60,0x64 irq 1
Apr 21 17:03:21 ubuntu kernel: [    3.137438] serio: i8042 AUX port at 0x60,0x64 irq 12
Apr 21 17:03:21 ubuntu kernel: [    3.157396] rtc_cmos 00:00: RTC can wake from S4
Apr 21 17:03:21 ubuntu kernel: [    3.165367] input: AT Translated Set 2 keyboard as /devices/platform/i8042/serio0/input/input1
Apr 21 17:03:21 ubuntu kernel: [    3.171838] rtc_cmos 00:00: rtc core: registered rtc_cmos as rtc0
Apr 21 17:03:21 ubuntu kernel: [    3.178598] rtc_cmos 00:00: alarms up to one day, y3k, 114 bytes nvram, hpet irqs
Apr 21 17:03:21 ubuntu kernel: [    3.214167] device-mapper: ioctl: 4.37.0-ioctl (2017-09-20) initialised: dm-devel@redhat.com
Apr 21 17:03:21 ubuntu kernel: [    3.220904] hidraw: raw HID events driver (C) Jiri Kosina
Apr 21 17:03:21 ubuntu kernel: [    3.244106] usbcore: registered new interface driver usbhid
Apr 21 17:03:21 ubuntu kernel: [    3.245957] usbhid: USB HID core driver
Apr 21 17:03:21 ubuntu kernel: [    3.274187] Netfilter messages via NETLINK v0.30.
Apr 21 17:03:21 ubuntu kernel: [    3.274187] nf_conntrack version 0.5.0 (4096 buckets, 16384 max)
Apr 21 17:03:21 ubuntu kernel: [    3.281911] ctnetlink v0.93: registering with nfnetlink.
Apr 21 17:03:21 ubuntu kernel: [    3.289025] ip_tables: (C) 2000-2006 Netfilter Core Team
Apr 21 17:03:21 ubuntu kernel: [    3.296146] Initializing XFRM netlink socket
Apr 21 17:03:21 ubuntu kernel: [    3.300253] NET: Registered protocol family 10
Apr 21 17:03:21 ubuntu kernel: [    3.316028] Segment Routing with IPv6
Apr 21 17:03:21 ubuntu kernel: [    3.318150] ip6_tables: (C) 2000-2006 Netfilter Core Team
Apr 21 17:03:21 ubuntu kernel: [    3.325782] sit: IPv6, IPv4 and MPLS over IPv4 tunneling driver
Apr 21 17:03:21 ubuntu kernel: [    3.332792] NET: Registered protocol family 17
Apr 21 17:03:21 ubuntu kernel: [    3.334469] Key type dns_resolver registered
Apr 21 17:03:21 ubuntu kernel: [    3.364834] registered taskstats version 1
Apr 21 17:03:21 ubuntu kernel: [    3.365164] Loading compiled-in X.509 certificates
Apr 21 17:03:21 ubuntu kernel: [    3.375630]   Magic number: 0:331:37
Apr 21 17:03:21 ubuntu kernel: [    3.376162] bdi 7:2: hash matches
Apr 21 17:03:21 ubuntu kernel: [    3.378507] console [netcon0] enabled
Apr 21 17:03:21 ubuntu kernel: [    3.378843] netconsole: network logging started
Apr 21 17:03:21 ubuntu kernel: [    3.386964] cfg80211: Loading compiled-in X.509 certificates for regulatory database
Apr 21 17:03:21 ubuntu kernel: [    3.415770] cfg80211: Loaded X.509 cert 'sforshee: 00b28ddf47aef9cea7'
Apr 21 17:03:21 ubuntu kernel: [    3.420479] ALSA device list:
Apr 21 17:03:21 ubuntu kernel: [    3.420768]   No soundcards found.
Apr 21 17:03:21 ubuntu kernel: [    3.424769] platform regulatory.0: Direct firmware load for regulatory.db failed with error -2
Apr 21 17:03:21 ubuntu kernel: [    3.426979] cfg80211: failed to load regulatory.db
Apr 21 17:03:21 ubuntu kernel: [    3.919053] input: ImExPS/2 Generic Explorer Mouse as /devices/platform/i8042/serio1/input/input3
Apr 21 17:03:21 ubuntu kernel: [    3.924865] md: Waiting for all devices to be available before autodetect
Apr 21 17:03:21 ubuntu kernel: [    3.926741] md: If you don't use raid, use raid=noautodetect
Apr 21 17:03:21 ubuntu kernel: [    3.932833] md: Autodetecting RAID arrays.
Apr 21 17:03:21 ubuntu kernel: [    3.932833] md: autorun ...
Apr 21 17:03:21 ubuntu kernel: [    3.932833] md: ... autorun DONE.
Apr 21 17:03:21 ubuntu kernel: [    3.949664] EXT4-fs (sda): couldn't mount as ext3 due to feature incompatibilities
Apr 21 17:03:21 ubuntu kernel: [    3.959942] EXT4-fs (sda): couldn't mount as ext2 due to feature incompatibilities
Apr 21 17:03:21 ubuntu kernel: [    5.226960] random: crng init done
Apr 21 17:03:21 ubuntu kernel: [    5.543200] EXT4-fs (sda): warning: mounting fs with errors, running e2fsck is recommended
Apr 21 17:03:21 ubuntu kernel: [    5.551459] EXT4-fs (sda): Errors on filesystem, clearing orphan list.
Apr 21 17:03:21 ubuntu kernel: [    5.551459] 
Apr 21 17:03:21 ubuntu kernel: [    5.552004] EXT4-fs (sda): recovery complete
Apr 21 17:03:21 ubuntu kernel: [    5.555960] EXT4-fs (sda): mounted filesystem with ordered data mode. Opts: (null)
Apr 21 17:03:21 ubuntu kernel: [    5.558695] VFS: Mounted root (ext4 filesystem) on device 8:0.
Apr 21 17:03:21 ubuntu kernel: [    5.565643] devtmpfs: mounted
Apr 21 17:03:21 ubuntu kernel: [    5.638976] Freeing unused kernel memory: 1224K
Apr 21 17:03:21 ubuntu kernel: [    5.639250] Write protecting the kernel read-only data: 18432k
Apr 21 17:03:21 ubuntu kernel: [    5.646507] Freeing unused kernel memory: 2004K
Apr 21 17:03:21 ubuntu kernel: [    5.654873] Freeing unused kernel memory: 380K
Apr 21 17:03:21 ubuntu kernel: [    7.600664] systemd-debug-g (1054) used greatest stack depth: 13832 bytes left
Apr 21 17:03:21 ubuntu kernel: [    8.360438] systemd-fstab-g (1055) used greatest stack depth: 13760 bytes left
Apr 21 17:03:21 ubuntu kernel: [    8.676429] systemd-sysv-ge (1061) used greatest stack depth: 13288 bytes left
Apr 21 17:03:23 ubuntu kernel: [   31.045707] e1000 0000:00:03.0 enp0s3: renamed from eth0
Apr 21 17:08:24 ubuntu kernel: [  332.768329] EXT4-fs (sda): error count since last fsck: 11
Apr 21 17:08:24 ubuntu kernel: [  332.768738] EXT4-fs (sda): initial error at time 1587451481: ext4_iget:4782: inode 304474
Apr 21 17:08:24 ubuntu kernel: [  332.768738] EXT4-fs (sda): last error at time 1587453185: ext4_validate_block_bitmap:385: inode 13453
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Linux version 4.15.0 (root@ubuntu) (gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1~18.04)) #2 SMP Tue Apr 21 07:10:56 UTC 2020
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Command line: root=/dev/sda rw console=ttyS0
Apr 21 17:33:13 ubuntu kernel: [    0.000000] x86/fpu: x87 FPU will use FXSAVE
Apr 21 17:33:13 ubuntu kernel: [    0.000000] e820: BIOS-provided physical RAM map:
Apr 21 17:33:13 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x0000000000000000-0x000000000009fbff] usable
Apr 21 17:33:13 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x000000000009fc00-0x000000000009ffff] reserved
Apr 21 17:33:13 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x00000000000f0000-0x00000000000fffff] reserved
Apr 21 17:33:13 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x0000000000100000-0x000000001ffdefff] usable
Apr 21 17:33:13 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x000000001ffdf000-0x000000001fffffff] reserved
Apr 21 17:33:13 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x00000000fffc0000-0x00000000ffffffff] reserved
Apr 21 17:33:13 ubuntu kernel: [    0.000000] NX (Execute Disable) protection: active
Apr 21 17:33:13 ubuntu kernel: [    0.000000] random: fast init done
Apr 21 17:33:13 ubuntu kernel: [    0.000000] SMBIOS 2.8 present.
Apr 21 17:33:13 ubuntu kernel: [    0.000000] DMI: QEMU Standard PC (i440FX + PIIX, 1996), BIOS 1.10.2-1ubuntu1 04/01/2014
Apr 21 17:33:13 ubuntu kernel: [    0.000000] e820: update [mem 0x00000000-0x00000fff] usable ==> reserved
Apr 21 17:33:13 ubuntu kernel: [    0.000000] e820: remove [mem 0x000a0000-0x000fffff] usable
Apr 21 17:33:13 ubuntu kernel: [    0.000000] e820: last_pfn = 0x1ffdf max_arch_pfn = 0x400000000
Apr 21 17:33:13 ubuntu kernel: [    0.000000] MTRR default type: write-back
Apr 21 17:33:13 ubuntu kernel: [    0.000000] MTRR fixed ranges enabled:
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   00000-9FFFF write-back
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   A0000-BFFFF uncachable
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   C0000-FFFFF write-protect
Apr 21 17:33:13 ubuntu kernel: [    0.000000] MTRR variable ranges enabled:
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   0 base 0080000000 mask FF80000000 uncachable
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   1 disabled
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   2 disabled
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   3 disabled
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   4 disabled
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   5 disabled
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   6 disabled
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   7 disabled
Apr 21 17:33:13 ubuntu kernel: [    0.000000] x86/PAT: Configuration [0-7]: WB  WC  UC- UC  WB  WP  UC- WT  
Apr 21 17:33:13 ubuntu kernel: [    0.000000] found SMP MP-table at [mem 0x000f6a60-0x000f6a6f] mapped at [        (ptrval)]
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Scanning 1 areas for low memory corruption
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Base memory trampoline at [        (ptrval)] 99000 size 24576
Apr 21 17:33:13 ubuntu kernel: [    0.000000] BRK [0x0ed2c000, 0x0ed2cfff] PGTABLE
Apr 21 17:33:13 ubuntu kernel: [    0.000000] BRK [0x0ed2d000, 0x0ed2dfff] PGTABLE
Apr 21 17:33:13 ubuntu kernel: [    0.000000] BRK [0x0ed2e000, 0x0ed2efff] PGTABLE
Apr 21 17:33:13 ubuntu kernel: [    0.000000] BRK [0x0ed2f000, 0x0ed2ffff] PGTABLE
Apr 21 17:33:13 ubuntu kernel: [    0.000000] BRK [0x0ed30000, 0x0ed30fff] PGTABLE
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: Early table checksum verification disabled
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: RSDP 0x00000000000F6A10 000014 (v00 BOCHS )
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: RSDT 0x000000001FFE15BA 000034 (v01 BOCHS  BXPCRSDT 00000001 BXPC 00000001)
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: FACP 0x000000001FFE12EE 000074 (v01 BOCHS  BXPCFACP 00000001 BXPC 00000001)
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: DSDT 0x000000001FFDFDC0 00152E (v01 BOCHS  BXPCDSDT 00000001 BXPC 00000001)
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: FACS 0x000000001FFDFD80 000040
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: APIC 0x000000001FFE13E2 000090 (v01 BOCHS  BXPCAPIC 00000001 BXPC 00000001)
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: HPET 0x000000001FFE1472 000038 (v01 BOCHS  BXPCHPET 00000001 BXPC 00000001)
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: SRAT 0x000000001FFE14AA 000110 (v01 BOCHS  BXPCSRAT 00000001 BXPC 00000001)
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: Local APIC address 0xfee00000
Apr 21 17:33:13 ubuntu kernel: [    0.000000] SRAT: PXM 0 -> APIC 0x00 -> Node 0
Apr 21 17:33:13 ubuntu kernel: [    0.000000] SRAT: PXM 1 -> APIC 0x01 -> Node 1
Apr 21 17:33:13 ubuntu kernel: [    0.000000] SRAT: PXM 0 -> APIC 0x02 -> Node 0
Apr 21 17:33:13 ubuntu kernel: [    0.000000] SRAT: PXM 1 -> APIC 0x03 -> Node 1
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 0 PXM 0 [mem 0x00000000-0x0009ffff]
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 0 PXM 0 [mem 0x00100000-0x0fffffff]
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 1 PXM 1 [mem 0x10000000-0x1fffffff]
Apr 21 17:33:13 ubuntu kernel: [    0.000000] NUMA: Node 0 [mem 0x00000000-0x0009ffff] + [mem 0x00100000-0x0fffffff] -> [mem 0x00000000-0x0fffffff]
Apr 21 17:33:13 ubuntu kernel: [    0.000000] NODE_DATA(0) allocated [mem 0x0fffc000-0x0fffffff]
Apr 21 17:33:13 ubuntu kernel: [    0.000000] NODE_DATA(1) allocated [mem 0x1ffdb000-0x1ffdefff]
Apr 21 17:33:13 ubuntu kernel: [    0.000000] tsc: Unable to calibrate against PIT
Apr 21 17:33:13 ubuntu kernel: [    0.000000] tsc: No reference (HPET/PMTIMER) available
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Zone ranges:
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   DMA      [mem 0x0000000000001000-0x0000000000ffffff]
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   DMA32    [mem 0x0000000001000000-0x000000001ffdefff]
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   Normal   empty
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Movable zone start for each node
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Early memory node ranges
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   node   0: [mem 0x0000000000001000-0x000000000009efff]
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   node   0: [mem 0x0000000000100000-0x000000000fffffff]
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   node   1: [mem 0x0000000010000000-0x000000001ffdefff]
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Initmem setup node 0 [mem 0x0000000000001000-0x000000000fffffff]
Apr 21 17:33:13 ubuntu kernel: [    0.000000] On node 0 totalpages: 65438
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   DMA zone: 64 pages used for memmap
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   DMA zone: 21 pages reserved
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   DMA zone: 3998 pages, LIFO batch:0
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   DMA32 zone: 960 pages used for memmap
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   DMA32 zone: 61440 pages, LIFO batch:15
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Initmem setup node 1 [mem 0x0000000010000000-0x000000001ffdefff]
Apr 21 17:33:13 ubuntu kernel: [    0.000000] On node 1 totalpages: 65503
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   DMA32 zone: 1024 pages used for memmap
Apr 21 17:33:13 ubuntu kernel: [    0.000000]   DMA32 zone: 65503 pages, LIFO batch:15
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Reserved but unavailable: 98 pages
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: PM-Timer IO Port: 0x608
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: Local APIC address 0xfee00000
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: LAPIC_NMI (acpi_id[0xff] dfl dfl lint[0x1])
Apr 21 17:33:13 ubuntu kernel: [    0.000000] IOAPIC[0]: apic_id 0, version 32, address 0xfec00000, GSI 0-23
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 0 global_irq 2 dfl dfl)
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 5 global_irq 5 high level)
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 9 global_irq 9 high level)
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 10 global_irq 10 high level)
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 11 global_irq 11 high level)
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: IRQ0 used by override.
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: IRQ5 used by override.
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: IRQ9 used by override.
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: IRQ10 used by override.
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: IRQ11 used by override.
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Using ACPI (MADT) for SMP configuration information
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: HPET id: 0x8086a201 base: 0xfed00000
Apr 21 17:33:13 ubuntu kernel: [    0.000000] smpboot: Allowing 4 CPUs, 0 hotplug CPUs
Apr 21 17:33:13 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x00000000-0x00000fff]
Apr 21 17:33:13 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x0009f000-0x0009ffff]
Apr 21 17:33:13 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x000a0000-0x000effff]
Apr 21 17:33:13 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x000f0000-0x000fffff]
Apr 21 17:33:13 ubuntu kernel: [    0.000000] e820: [mem 0x20000000-0xfffbffff] available for PCI devices
Apr 21 17:33:13 ubuntu kernel: [    0.000000] clocksource: refined-jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 1910969940391419 ns
Apr 21 17:33:13 ubuntu kernel: [    0.000000] setup_percpu: NR_CPUS:64 nr_cpumask_bits:64 nr_cpu_ids:4 nr_node_ids:2
Apr 21 17:33:13 ubuntu kernel: [    0.000000] percpu: Embedded 43 pages/cpu @        (ptrval) s138520 r8192 d29416 u1048576
Apr 21 17:33:13 ubuntu kernel: [    0.000000] pcpu-alloc: s138520 r8192 d29416 u1048576 alloc=1*2097152
Apr 21 17:33:13 ubuntu kernel: [    0.000000] pcpu-alloc: [0] 0 2 [1] 1 3 
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Built 2 zonelists, mobility grouping on.  Total pages: 128872
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Policy zone: DMA32
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Kernel command line: root=/dev/sda rw console=ttyS0
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Calgary: detecting Calgary via BIOS EBDA area
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Calgary: Unable to locate Rio Grande table in EBDA - bailing!
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Memory: 488888K/523764K available (12300K kernel code, 1289K rwdata, 3716K rodata, 1224K init, 660K bss, 34876K reserved, 0K cma-reserved)
Apr 21 17:33:13 ubuntu kernel: [    0.000000] SLUB: HWalign=64, Order=0-3, MinObjects=0, CPUs=4, Nodes=2
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Hierarchical RCU implementation.
Apr 21 17:33:13 ubuntu kernel: [    0.000000] 	RCU event tracing is enabled.
Apr 21 17:33:13 ubuntu kernel: [    0.000000] 	RCU restricting CPUs from NR_CPUS=64 to nr_cpu_ids=4.
Apr 21 17:33:13 ubuntu kernel: [    0.000000] RCU: Adjusting geometry for rcu_fanout_leaf=16, nr_cpu_ids=4
Apr 21 17:33:13 ubuntu kernel: [    0.000000] NR_IRQS: 4352, nr_irqs: 456, preallocated irqs: 16
Apr 21 17:33:13 ubuntu kernel: [    0.000000] Console: colour VGA+ 80x25
Apr 21 17:33:13 ubuntu kernel: [    0.000000] console [ttyS0] enabled
Apr 21 17:33:13 ubuntu kernel: [    0.000000] mempolicy: Enabling automatic NUMA balancing. Configure with numa_balancing= or the kernel.numa_balancing sysctl
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: Core revision 20170831
Apr 21 17:33:13 ubuntu kernel: [    0.000000] ACPI: 1 ACPI AML tables successfully acquired and loaded
Apr 21 17:33:13 ubuntu kernel: [    0.000000] clocksource: hpet: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 19112604467 ns
Apr 21 17:33:13 ubuntu kernel: [    0.000000] hpet clockevent registered
Apr 21 17:33:13 ubuntu kernel: [    0.004000] APIC: Switch to symmetric I/O mode setup
Apr 21 17:33:13 ubuntu kernel: [    0.008000] ..TIMER: vector=0x30 apic1=0 pin1=2 apic2=-1 pin2=-1
Apr 21 17:33:13 ubuntu kernel: [    0.013000] tsc: Fast TSC calibration using PIT
Apr 21 17:33:13 ubuntu kernel: [    0.015000] tsc: Detected 2699.257 MHz processor
Apr 21 17:33:13 ubuntu kernel: [    0.017000] tsc: Marking TSC unstable due to TSCs unsynchronized
Apr 21 17:33:13 ubuntu kernel: [    0.019158] Calibrating delay loop (skipped), value calculated using timer frequency.. 5398.51 BogoMIPS (lpj=2699257)
Apr 21 17:33:13 ubuntu kernel: [    0.020460] pid_max: default: 32768 minimum: 301
Apr 21 17:33:13 ubuntu kernel: [    0.024339] Security Framework initialized
Apr 21 17:33:13 ubuntu kernel: [    0.025157] SELinux:  Initializing.
Apr 21 17:33:13 ubuntu kernel: [    0.026252] SELinux:  Starting in permissive mode
Apr 21 17:33:13 ubuntu kernel: [    0.030164] Dentry cache hash table entries: 65536 (order: 7, 524288 bytes)
Apr 21 17:33:13 ubuntu kernel: [    0.033865] Inode-cache hash table entries: 32768 (order: 6, 262144 bytes)
Apr 21 17:33:13 ubuntu kernel: [    0.035159] Mount-cache hash table entries: 1024 (order: 1, 8192 bytes)
Apr 21 17:33:13 ubuntu kernel: [    0.036135] Mountpoint-cache hash table entries: 1024 (order: 1, 8192 bytes)
Apr 21 17:33:13 ubuntu kernel: [    0.055000] mce: CPU supports 10 MCE banks
Apr 21 17:33:13 ubuntu kernel: [    0.055235] Last level iTLB entries: 4KB 0, 2MB 0, 4MB 0
Apr 21 17:33:13 ubuntu kernel: [    0.055472] Last level dTLB entries: 4KB 0, 2MB 0, 4MB 0, 1GB 0
Apr 21 17:33:13 ubuntu kernel: [    0.055682] Spectre V2 mitigation: LFENCE not serializing. Switching to generic retpoline
Apr 21 17:33:13 ubuntu kernel: [    0.055888] Spectre V2 mitigation: Mitigation: Full generic retpoline
Apr 21 17:33:13 ubuntu kernel: [    0.056049] Spectre V2 mitigation: Filling RSB on context switch
Apr 21 17:33:13 ubuntu kernel: [    0.059590] Freeing SMP alternatives memory: 40K
Apr 21 17:33:13 ubuntu kernel: [    0.074000] APIC calibration not consistent with PM-Timer: 111ms instead of 100ms
Apr 21 17:33:13 ubuntu kernel: [    0.074000] APIC delta adjusted to PM-Timer: 6249969 (6943089)
Apr 21 17:33:13 ubuntu kernel: [    0.074000] smpboot: CPU0: AMD QEMU Virtual CPU version 2.5+ (family: 0x6, model: 0x6, stepping: 0x3)
Apr 21 17:33:13 ubuntu kernel: [    0.081000] Performance Events: PMU not available due to virtualization, using software events only.
Apr 21 17:33:13 ubuntu kernel: [    0.085539] Hierarchical SRCU implementation.
Apr 21 17:33:13 ubuntu kernel: [    0.089000] Huh? What family is it: 0x6?!
Apr 21 17:33:13 ubuntu kernel: [    0.094052] smp: Bringing up secondary CPUs ...
Apr 21 17:33:13 ubuntu kernel: [    0.106838] x86: Booting SMP configuration:
Apr 21 17:33:13 ubuntu kernel: [    0.108000] .... node  #1, CPUs:      #1
Apr 21 17:33:13 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping min bogoMips estimate 3 = 6203331
Apr 21 17:33:13 ubuntu kernel: [    0.215317] .... node  #0, CPUs:   #2
Apr 21 17:33:13 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping max bogoMips estimate 2 = 4809133
Apr 21 17:33:13 ubuntu kernel: [    0.001000] calibrate_delay_direct() failed to get a good estimate for loops_per_jiffy.
Apr 21 17:33:13 ubuntu kernel: [    0.001000] Probably due to long platform interrupts. Consider using "lpj=" boot option.
Apr 21 17:33:13 ubuntu kernel: [    0.316716] .... node  #1, CPUs:   #3
Apr 21 17:33:13 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping max bogoMips estimate 1 = 4117357
Apr 21 17:33:13 ubuntu kernel: [    0.390091] smp: Brought up 2 nodes, 4 CPUs
Apr 21 17:33:13 ubuntu kernel: [    0.390800] smpboot: Max logical packages: 4
Apr 21 17:33:13 ubuntu kernel: [    0.391490] smpboot: Total of 4 processors activated (27011.08 BogoMIPS)
Apr 21 17:33:13 ubuntu kernel: [    0.413646] devtmpfs: initialized
Apr 21 17:33:13 ubuntu kernel: [    0.438928] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 1911260446275000 ns
Apr 21 17:33:13 ubuntu kernel: [    0.439000] futex hash table entries: 1024 (order: 4, 65536 bytes)
Apr 21 17:33:13 ubuntu kernel: [    0.449139] RTC time: 17:32:43, date: 04/21/20
Apr 21 17:33:13 ubuntu kernel: [    0.463394] kworker/u9:0 (32) used greatest stack depth: 14280 bytes left
Apr 21 17:33:13 ubuntu kernel: [    0.482564] NET: Registered protocol family 16
Apr 21 17:33:13 ubuntu kernel: [    0.489037] audit: initializing netlink subsys (disabled)
Apr 21 17:33:13 ubuntu kernel: [    0.496075] audit: type=2000 audit(1587490362.492:1): state=initialized audit_enabled=0 res=1
Apr 21 17:33:13 ubuntu kernel: [    0.538720] cpuidle: using governor menu
Apr 21 17:33:13 ubuntu kernel: [    0.539416] ACPI: bus type PCI registered
Apr 21 17:33:13 ubuntu kernel: [    0.545000] PCI: Using configuration type 1 for base access
Apr 21 17:33:13 ubuntu kernel: [    0.559000] mtrr: your CPUs had inconsistent fixed MTRR settings
Apr 21 17:33:13 ubuntu kernel: [    0.559000] mtrr: your CPUs had inconsistent variable MTRR settings
Apr 21 17:33:13 ubuntu kernel: [    0.559129] mtrr: your CPUs had inconsistent MTRRdefType settings
Apr 21 17:33:13 ubuntu kernel: [    0.559486] mtrr: probably your BIOS does not setup all CPUs.
Apr 21 17:33:13 ubuntu kernel: [    0.559758] mtrr: corrected configuration.
Apr 21 17:33:13 ubuntu kernel: [    0.703136] kworker/u10:2 (186) used greatest stack depth: 14248 bytes left
Apr 21 17:33:13 ubuntu kernel: [    0.857267] HugeTLB registered 2.00 MiB page size, pre-allocated 0 pages
Apr 21 17:33:13 ubuntu kernel: [    0.871349] ACPI: Added _OSI(Module Device)
Apr 21 17:33:13 ubuntu kernel: [    0.872176] ACPI: Added _OSI(Processor Device)
Apr 21 17:33:13 ubuntu kernel: [    0.872369] ACPI: Added _OSI(3.0 _SCP Extensions)
Apr 21 17:33:13 ubuntu kernel: [    0.872587] ACPI: Added _OSI(Processor Aggregator Device)
Apr 21 17:33:13 ubuntu kernel: [    0.917192] ACPI: Interpreter enabled
Apr 21 17:33:13 ubuntu kernel: [    0.920271] ACPI: (supports S0 S3 S4 S5)
Apr 21 17:33:13 ubuntu kernel: [    0.921665] ACPI: Using IOAPIC for interrupt routing
Apr 21 17:33:13 ubuntu kernel: [    0.923328] PCI: Using host bridge windows from ACPI; if necessary, use "pci=nocrs" and report a bug
Apr 21 17:33:13 ubuntu kernel: [    0.934743] ACPI: Enabled 2 GPEs in block 00 to 0F
Apr 21 17:33:13 ubuntu kernel: [    1.082283] ACPI: PCI Root Bridge [PCI0] (domain 0000 [bus 00-ff])
Apr 21 17:33:13 ubuntu kernel: [    1.084453] acpi PNP0A03:00: _OSC: OS supports [ASPM ClockPM Segments MSI]
Apr 21 17:33:13 ubuntu kernel: [    1.086337] acpi PNP0A03:00: _OSC failed (AE_NOT_FOUND); disabling ASPM
Apr 21 17:33:13 ubuntu kernel: [    1.088210] acpi PNP0A03:00: fail to add MMCONFIG information, can't access extended PCI configuration space under this bridge.
Apr 21 17:33:13 ubuntu kernel: [    1.094240] PCI host bridge to bus 0000:00
Apr 21 17:33:13 ubuntu kernel: [    1.094591] pci_bus 0000:00: root bus resource [io  0x0000-0x0cf7 window]
Apr 21 17:33:13 ubuntu kernel: [    1.094774] pci_bus 0000:00: root bus resource [io  0x0d00-0xffff window]
Apr 21 17:33:13 ubuntu kernel: [    1.094943] pci_bus 0000:00: root bus resource [mem 0x000a0000-0x000bffff window]
Apr 21 17:33:13 ubuntu kernel: [    1.095000] pci_bus 0000:00: root bus resource [mem 0x20000000-0xfebfffff window]
Apr 21 17:33:13 ubuntu kernel: [    1.095000] pci_bus 0000:00: root bus resource [mem 0x100000000-0x17fffffff window]
Apr 21 17:33:13 ubuntu kernel: [    1.095373] pci_bus 0000:00: root bus resource [bus 00-ff]
Apr 21 17:33:13 ubuntu kernel: [    1.097436] pci 0000:00:00.0: [8086:1237] type 00 class 0x060000
Apr 21 17:33:13 ubuntu kernel: [    1.106459] pci 0000:00:01.0: [8086:7000] type 00 class 0x060100
Apr 21 17:33:13 ubuntu kernel: [    1.113000] pci 0000:00:01.1: [8086:7010] type 00 class 0x010180
Apr 21 17:33:13 ubuntu kernel: [    1.113000] pci 0000:00:01.1: reg 0x20: [io  0xc040-0xc04f]
Apr 21 17:33:13 ubuntu kernel: [    1.114000] pci 0000:00:01.1: legacy IDE quirk: reg 0x10: [io  0x01f0-0x01f7]
Apr 21 17:33:13 ubuntu kernel: [    1.114000] pci 0000:00:01.1: legacy IDE quirk: reg 0x14: [io  0x03f6]
Apr 21 17:33:13 ubuntu kernel: [    1.114000] pci 0000:00:01.1: legacy IDE quirk: reg 0x18: [io  0x0170-0x0177]
Apr 21 17:33:13 ubuntu kernel: [    1.114000] pci 0000:00:01.1: legacy IDE quirk: reg 0x1c: [io  0x0376]
Apr 21 17:33:13 ubuntu kernel: [    1.120125] pci 0000:00:01.3: [8086:7113] type 00 class 0x068000
Apr 21 17:33:13 ubuntu kernel: [    1.122094] pci 0000:00:01.3: quirk: [io  0x0600-0x063f] claimed by PIIX4 ACPI
Apr 21 17:33:13 ubuntu kernel: [    1.122842] pci 0000:00:01.3: quirk: [io  0x0700-0x070f] claimed by PIIX4 SMB
Apr 21 17:33:13 ubuntu kernel: [    1.126422] pci 0000:00:02.0: [1234:1111] type 00 class 0x030000
Apr 21 17:33:13 ubuntu kernel: [    1.127000] pci 0000:00:02.0: reg 0x10: [mem 0xfd000000-0xfdffffff pref]
Apr 21 17:33:13 ubuntu kernel: [    1.128000] pci 0000:00:02.0: reg 0x18: [mem 0xfebb0000-0xfebb0fff]
Apr 21 17:33:13 ubuntu kernel: [    1.130000] pci 0000:00:02.0: reg 0x30: [mem 0xfeba0000-0xfebaffff pref]
Apr 21 17:33:13 ubuntu kernel: [    1.133312] pci 0000:00:03.0: [8086:100e] type 00 class 0x020000
Apr 21 17:33:13 ubuntu kernel: [    1.134000] pci 0000:00:03.0: reg 0x10: [mem 0xfeb80000-0xfeb9ffff]
Apr 21 17:33:13 ubuntu kernel: [    1.135000] pci 0000:00:03.0: reg 0x14: [io  0xc000-0xc03f]
Apr 21 17:33:13 ubuntu kernel: [    1.138000] pci 0000:00:03.0: reg 0x30: [mem 0xfeb00000-0xfeb7ffff pref]
Apr 21 17:33:13 ubuntu kernel: [    1.166271] ACPI: PCI Interrupt Link [LNKA] (IRQs 5 *10 11)
Apr 21 17:33:13 ubuntu kernel: [    1.169367] ACPI: PCI Interrupt Link [LNKB] (IRQs 5 *10 11)
Apr 21 17:33:13 ubuntu kernel: [    1.179079] ACPI: PCI Interrupt Link [LNKC] (IRQs 5 10 *11)
Apr 21 17:33:13 ubuntu kernel: [    1.184000] ACPI: PCI Interrupt Link [LNKD] (IRQs 5 10 *11)
Apr 21 17:33:13 ubuntu kernel: [    1.186482] ACPI: PCI Interrupt Link [LNKS] (IRQs *9)
Apr 21 17:33:13 ubuntu kernel: [    1.210000] pci 0000:00:02.0: vgaarb: setting as boot VGA device
Apr 21 17:33:13 ubuntu kernel: [    1.210000] pci 0000:00:02.0: vgaarb: VGA device added: decodes=io+mem,owns=io+mem,locks=none
Apr 21 17:33:13 ubuntu kernel: [    1.210000] pci 0000:00:02.0: vgaarb: bridge control possible
Apr 21 17:33:13 ubuntu kernel: [    1.210000] vgaarb: loaded
Apr 21 17:33:13 ubuntu kernel: [    1.214089] SCSI subsystem initialized
Apr 21 17:33:13 ubuntu kernel: [    1.223985] libata version 3.00 loaded.
Apr 21 17:33:13 ubuntu kernel: [    1.224379] ACPI: bus type USB registered
Apr 21 17:33:13 ubuntu kernel: [    1.236363] usbcore: registered new interface driver usbfs
Apr 21 17:33:13 ubuntu kernel: [    1.240279] usbcore: registered new interface driver hub
Apr 21 17:33:13 ubuntu kernel: [    1.244163] usbcore: registered new device driver usb
Apr 21 17:33:13 ubuntu kernel: [    1.248321] pps_core: LinuxPPS API ver. 1 registered
Apr 21 17:33:13 ubuntu kernel: [    1.248732] pps_core: Software ver. 5.3.6 - Copyright 2005-2007 Rodolfo Giometti <giometti@linux.it>
Apr 21 17:33:13 ubuntu kernel: [    1.249000] PTP clock support registered
Apr 21 17:33:13 ubuntu kernel: [    1.259169] EDAC MC: Ver: 3.0.0
Apr 21 17:33:13 ubuntu kernel: [    1.277229] Advanced Linux Sound Architecture Driver Initialized.
Apr 21 17:33:13 ubuntu kernel: [    1.279274] PCI: Using ACPI for IRQ routing
Apr 21 17:33:13 ubuntu kernel: [    1.279646] PCI: pci_cache_line_size set to 64 bytes
Apr 21 17:33:13 ubuntu kernel: [    1.282398] e820: reserve RAM buffer [mem 0x0009fc00-0x0009ffff]
Apr 21 17:33:13 ubuntu kernel: [    1.282535] e820: reserve RAM buffer [mem 0x1ffdf000-0x1fffffff]
Apr 21 17:33:13 ubuntu kernel: [    1.302000] NetLabel: Initializing
Apr 21 17:33:13 ubuntu kernel: [    1.302000] NetLabel:  domain hash size = 128
Apr 21 17:33:13 ubuntu kernel: [    1.302000] NetLabel:  protocols = UNLABELED CIPSOv4 CALIPSO
Apr 21 17:33:13 ubuntu kernel: [    1.302395] NetLabel:  unlabeled traffic allowed by default
Apr 21 17:33:13 ubuntu kernel: [    1.312273] HPET: 3 timers in total, 0 timers will be used for per-cpu timer
Apr 21 17:33:13 ubuntu kernel: [    1.316000] hpet0: at MMIO 0xfed00000, IRQs 2, 8, 0
Apr 21 17:33:13 ubuntu kernel: [    1.317143] hpet0: 3 comparators, 64-bit 100.000000 MHz counter
Apr 21 17:33:13 ubuntu kernel: [    1.330332] clocksource: Switched to clocksource hpet
Apr 21 17:33:13 ubuntu kernel: [    1.644548] VFS: Disk quotas dquot_6.6.0
Apr 21 17:33:13 ubuntu kernel: [    1.645631] VFS: Dquot-cache hash table entries: 512 (order 0, 4096 bytes)
Apr 21 17:33:13 ubuntu kernel: [    1.653957] pnp: PnP ACPI init
Apr 21 17:33:13 ubuntu kernel: [    1.667673] pnp 00:00: Plug and Play ACPI device, IDs PNP0b00 (active)
Apr 21 17:33:13 ubuntu kernel: [    1.676857] pnp 00:01: Plug and Play ACPI device, IDs PNP0303 (active)
Apr 21 17:33:13 ubuntu kernel: [    1.679183] pnp 00:02: Plug and Play ACPI device, IDs PNP0f13 (active)
Apr 21 17:33:13 ubuntu kernel: [    1.681826] pnp 00:03: [dma 2]
Apr 21 17:33:13 ubuntu kernel: [    1.682807] pnp 00:03: Plug and Play ACPI device, IDs PNP0700 (active)
Apr 21 17:33:13 ubuntu kernel: [    1.686731] pnp 00:04: Plug and Play ACPI device, IDs PNP0400 (active)
Apr 21 17:33:13 ubuntu kernel: [    1.691827] pnp 00:05: Plug and Play ACPI device, IDs PNP0501 (active)
Apr 21 17:33:13 ubuntu kernel: [    1.698124] pnp: PnP ACPI: found 6 devices
Apr 21 17:33:13 ubuntu kernel: [    1.905978] clocksource: acpi_pm: mask: 0xffffff max_cycles: 0xffffff, max_idle_ns: 2085701024 ns
Apr 21 17:33:13 ubuntu kernel: [    1.908861] pci_bus 0000:00: resource 4 [io  0x0000-0x0cf7 window]
Apr 21 17:33:13 ubuntu kernel: [    1.908884] pci_bus 0000:00: resource 5 [io  0x0d00-0xffff window]
Apr 21 17:33:13 ubuntu kernel: [    1.908896] pci_bus 0000:00: resource 6 [mem 0x000a0000-0x000bffff window]
Apr 21 17:33:13 ubuntu kernel: [    1.908905] pci_bus 0000:00: resource 7 [mem 0x20000000-0xfebfffff window]
Apr 21 17:33:13 ubuntu kernel: [    1.908914] pci_bus 0000:00: resource 8 [mem 0x100000000-0x17fffffff window]
Apr 21 17:33:13 ubuntu kernel: [    1.910052] NET: Registered protocol family 2
Apr 21 17:33:13 ubuntu kernel: [    1.942771] TCP established hash table entries: 4096 (order: 3, 32768 bytes)
Apr 21 17:33:13 ubuntu kernel: [    1.943990] TCP bind hash table entries: 4096 (order: 4, 65536 bytes)
Apr 21 17:33:13 ubuntu kernel: [    1.946698] TCP: Hash tables configured (established 4096 bind 4096)
Apr 21 17:33:13 ubuntu kernel: [    1.951767] UDP hash table entries: 256 (order: 1, 8192 bytes)
Apr 21 17:33:13 ubuntu kernel: [    1.953829] UDP-Lite hash table entries: 256 (order: 1, 8192 bytes)
Apr 21 17:33:13 ubuntu kernel: [    1.966045] NET: Registered protocol family 1
Apr 21 17:33:13 ubuntu kernel: [    1.986807] RPC: Registered named UNIX socket transport module.
Apr 21 17:33:13 ubuntu kernel: [    1.987188] RPC: Registered udp transport module.
Apr 21 17:33:13 ubuntu kernel: [    1.987188] RPC: Registered tcp transport module.
Apr 21 17:33:13 ubuntu kernel: [    1.996263] RPC: Registered tcp NFSv4.1 backchannel transport module.
Apr 21 17:33:13 ubuntu kernel: [    2.019853] pci 0000:00:00.0: Limiting direct PCI/PCI transfers
Apr 21 17:33:13 ubuntu kernel: [    2.020983] pci 0000:00:01.0: PIIX3: Enabling Passive Release
Apr 21 17:33:13 ubuntu kernel: [    2.021577] pci 0000:00:01.0: Activating ISA DMA hang workarounds
Apr 21 17:33:13 ubuntu kernel: [    2.021392] hrtimer: interrupt took 5210430 ns
Apr 21 17:33:13 ubuntu kernel: [    2.028796] pci 0000:00:02.0: Video device with shadowed ROM at [mem 0x000c0000-0x000dffff]
Apr 21 17:33:13 ubuntu kernel: [    2.032184] PCI: CLS 0 bytes, default 64
Apr 21 17:33:13 ubuntu kernel: [    2.050950] clocksource: tsc: mask: 0xffffffffffffffff max_cycles: 0x26e8808f070, max_idle_ns: 440795250941 ns
Apr 21 17:33:13 ubuntu kernel: [    2.096660] Scanning for low memory corruption every 60 seconds
Apr 21 17:33:13 ubuntu kernel: [    2.144011] Initialise system trusted keyrings
Apr 21 17:33:13 ubuntu kernel: [    2.153097] workingset: timestamp_bits=56 max_order=17 bucket_order=0
Apr 21 17:33:13 ubuntu kernel: [    2.366127] NFS: Registering the id_resolver key type
Apr 21 17:33:13 ubuntu kernel: [    2.367989] Key type id_resolver registered
Apr 21 17:33:13 ubuntu kernel: [    2.369472] Key type id_legacy registered
Apr 21 17:33:13 ubuntu kernel: [    2.384171] SELinux:  Registering netfilter hooks
Apr 21 17:33:13 ubuntu kernel: [    2.446075] Key type asymmetric registered
Apr 21 17:33:13 ubuntu kernel: [    2.446595] Asymmetric key parser 'x509' registered
Apr 21 17:33:13 ubuntu kernel: [    2.450123] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 250)
Apr 21 17:33:14 ubuntu kernel: [    2.454407] io scheduler noop registered
Apr 21 17:33:14 ubuntu kernel: [    2.454840] io scheduler deadline registered
Apr 21 17:33:14 ubuntu kernel: [    2.459929] io scheduler cfq registered (default)
Apr 21 17:33:14 ubuntu kernel: [    2.462968] io scheduler mq-deadline registered
Apr 21 17:33:14 ubuntu kernel: [    2.468462] io scheduler kyber registered
Apr 21 17:33:14 ubuntu kernel: [    2.488777] input: Power Button as /devices/LNXSYSTM:00/LNXPWRBN:00/input/input0
Apr 21 17:33:14 ubuntu kernel: [    2.521831] ACPI: Power Button [PWRF]
Apr 21 17:33:14 ubuntu kernel: [    2.584238] Serial: 8250/16550 driver, 4 ports, IRQ sharing enabled
Apr 21 17:33:14 ubuntu kernel: [    2.665602] 00:05: ttyS0 at I/O 0x3f8 (irq = 4, base_baud = 115200) is a 16550A
Apr 21 17:33:14 ubuntu kernel: [    2.712703] Non-volatile memory driver v1.3
Apr 21 17:33:14 ubuntu kernel: [    2.718390] Linux agpgart interface v0.103
Apr 21 17:33:14 ubuntu kernel: [    2.830763] loop: module loaded
Apr 21 17:33:14 ubuntu kernel: [    2.843175] ata_piix 0000:00:01.1: version 2.13
Apr 21 17:33:14 ubuntu kernel: [    2.883738] scsi host0: ata_piix
Apr 21 17:33:14 ubuntu kernel: [    2.901710] scsi host1: ata_piix
Apr 21 17:33:14 ubuntu kernel: [    2.904776] ata1: PATA max MWDMA2 cmd 0x1f0 ctl 0x3f6 bmdma 0xc040 irq 14
Apr 21 17:33:14 ubuntu kernel: [    2.905182] ata2: PATA max MWDMA2 cmd 0x170 ctl 0x376 bmdma 0xc048 irq 15
Apr 21 17:33:14 ubuntu kernel: [    2.915178] e100: Intel(R) PRO/100 Network Driver, 3.5.24-k2-NAPI
Apr 21 17:33:14 ubuntu kernel: [    2.919370] e100: Copyright(c) 1999-2006 Intel Corporation
Apr 21 17:33:14 ubuntu kernel: [    2.953575] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
Apr 21 17:33:14 ubuntu kernel: [    2.954084] e1000: Copyright (c) 1999-2006 Intel Corporation.
Apr 21 17:33:14 ubuntu kernel: [    3.159806] ata2.01: NODEV after polling detection
Apr 21 17:33:14 ubuntu kernel: [    3.172509] ata1.01: NODEV after polling detection
Apr 21 17:33:14 ubuntu kernel: [    3.189832] ata2.00: ATAPI: QEMU DVD-ROM, 2.5+, max UDMA/100
Apr 21 17:33:14 ubuntu kernel: [    3.209666] ata1.00: ATA-7: QEMU HARDDISK, 2.5+, max UDMA/100
Apr 21 17:33:14 ubuntu kernel: [    3.210100] ata1.00: 16777216 sectors, multi 16: LBA48 
Apr 21 17:33:14 ubuntu kernel: [    3.252814] ata2.00: configured for MWDMA2
Apr 21 17:33:14 ubuntu kernel: [    3.263707] ata1.00: configured for MWDMA2
Apr 21 17:33:14 ubuntu kernel: [    3.340553] scsi 0:0:0:0: Direct-Access     ATA      QEMU HARDDISK    2.5+ PQ: 0 ANSI: 5
Apr 21 17:33:14 ubuntu kernel: [    3.370066] sd 0:0:0:0: Attached scsi generic sg0 type 0
Apr 21 17:33:14 ubuntu kernel: [    3.411792] sd 0:0:0:0: [sda] 16777216 512-byte logical blocks: (8.59 GB/8.00 GiB)
Apr 21 17:33:14 ubuntu kernel: [    3.419394] sd 0:0:0:0: [sda] Write Protect is off
Apr 21 17:33:14 ubuntu kernel: [    3.419929] sd 0:0:0:0: [sda] Mode Sense: 00 3a 00 00
Apr 21 17:33:14 ubuntu kernel: [    3.423645] scsi 1:0:0:0: CD-ROM            QEMU     QEMU DVD-ROM     2.5+ PQ: 0 ANSI: 5
Apr 21 17:33:14 ubuntu kernel: [    3.435594] sd 0:0:0:0: [sda] Write cache: enabled, read cache: enabled, doesn't support DPO or FUA
Apr 21 17:33:14 ubuntu kernel: [    3.545693] sr 1:0:0:0: [sr0] scsi3-mmc drive: 4x/4x cd/rw xa/form2 tray
Apr 21 17:33:14 ubuntu kernel: [    3.548548] cdrom: Uniform CD-ROM driver Revision: 3.20
Apr 21 17:33:14 ubuntu kernel: [    3.554926] sr 1:0:0:0: Attached scsi CD-ROM sr0
Apr 21 17:33:14 ubuntu kernel: [    3.574817] sr 1:0:0:0: Attached scsi generic sg1 type 5
Apr 21 17:33:14 ubuntu kernel: [    3.639028] sd 0:0:0:0: [sda] Attached SCSI disk
Apr 21 17:33:14 ubuntu kernel: [    3.797623] ACPI: PCI Interrupt Link [LNKC] enabled at IRQ 11
Apr 21 17:33:14 ubuntu kernel: [    3.860351] e1000 0000:00:03.0 eth0: (PCI:33MHz:32-bit) 52:54:00:12:34:56
Apr 21 17:33:14 ubuntu kernel: [    3.861002] e1000 0000:00:03.0 eth0: Intel(R) PRO/1000 Network Connection
Apr 21 17:33:14 ubuntu kernel: [    3.865079] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
Apr 21 17:33:14 ubuntu kernel: [    3.866788] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
Apr 21 17:33:14 ubuntu kernel: [    3.868064] sky2: driver version 1.30
Apr 21 17:33:14 ubuntu kernel: [    3.879662] ehci_hcd: USB 2.0 'Enhanced' Host Controller (EHCI) Driver
Apr 21 17:33:14 ubuntu kernel: [    3.879988] ehci-pci: EHCI PCI platform driver
Apr 21 17:33:14 ubuntu kernel: [    3.879988] ohci_hcd: USB 1.1 'Open' Host Controller (OHCI) Driver
Apr 21 17:33:14 ubuntu kernel: [    3.879988] ohci-pci: OHCI PCI platform driver
Apr 21 17:33:14 ubuntu kernel: [    3.879988] uhci_hcd: USB Universal Host Controller Interface driver
Apr 21 17:33:14 ubuntu kernel: [    3.897829] usbcore: registered new interface driver usblp
Apr 21 17:33:14 ubuntu kernel: [    3.898454] usbcore: registered new interface driver usb-storage
Apr 21 17:33:14 ubuntu kernel: [    3.918810] i8042: PNP: PS/2 Controller [PNP0303:KBD,PNP0f13:MOU] at 0x60,0x64 irq 1,12
Apr 21 17:33:14 ubuntu kernel: [    3.959753] serio: i8042 KBD port at 0x60,0x64 irq 1
Apr 21 17:33:14 ubuntu kernel: [    3.960959] serio: i8042 AUX port at 0x60,0x64 irq 12
Apr 21 17:33:14 ubuntu kernel: [    3.978927] rtc_cmos 00:00: RTC can wake from S4
Apr 21 17:33:14 ubuntu kernel: [    4.000124] input: AT Translated Set 2 keyboard as /devices/platform/i8042/serio0/input/input1
Apr 21 17:33:14 ubuntu kernel: [    4.016688] rtc_cmos 00:00: rtc core: registered rtc_cmos as rtc0
Apr 21 17:33:14 ubuntu kernel: [    4.017147] rtc_cmos 00:00: alarms up to one day, y3k, 114 bytes nvram, hpet irqs
Apr 21 17:33:14 ubuntu kernel: [    4.053413] device-mapper: ioctl: 4.37.0-ioctl (2017-09-20) initialised: dm-devel@redhat.com
Apr 21 17:33:14 ubuntu kernel: [    4.059899] hidraw: raw HID events driver (C) Jiri Kosina
Apr 21 17:33:14 ubuntu kernel: [    4.096822] usbcore: registered new interface driver usbhid
Apr 21 17:33:14 ubuntu kernel: [    4.097276] usbhid: USB HID core driver
Apr 21 17:33:14 ubuntu kernel: [    4.138451] Netfilter messages via NETLINK v0.30.
Apr 21 17:33:14 ubuntu kernel: [    4.143348] nf_conntrack version 0.5.0 (4096 buckets, 16384 max)
Apr 21 17:33:14 ubuntu kernel: [    4.155268] ctnetlink v0.93: registering with nfnetlink.
Apr 21 17:33:14 ubuntu kernel: [    4.180832] ip_tables: (C) 2000-2006 Netfilter Core Team
Apr 21 17:33:14 ubuntu kernel: [    4.204163] Initializing XFRM netlink socket
Apr 21 17:33:14 ubuntu kernel: [    4.234920] NET: Registered protocol family 10
Apr 21 17:33:14 ubuntu kernel: [    4.273898] Segment Routing with IPv6
Apr 21 17:33:14 ubuntu kernel: [    4.277054] ip6_tables: (C) 2000-2006 Netfilter Core Team
Apr 21 17:33:14 ubuntu kernel: [    4.288020] sit: IPv6, IPv4 and MPLS over IPv4 tunneling driver
Apr 21 17:33:14 ubuntu kernel: [    4.305199] NET: Registered protocol family 17
Apr 21 17:33:14 ubuntu kernel: [    4.310738] Key type dns_resolver registered
Apr 21 17:33:14 ubuntu kernel: [    4.347238] registered taskstats version 1
Apr 21 17:33:14 ubuntu kernel: [    4.348870] Loading compiled-in X.509 certificates
Apr 21 17:33:14 ubuntu kernel: [    4.361652]   Magic number: 0:846:542
Apr 21 17:33:14 ubuntu kernel: [    4.362838] console [netcon0] enabled
Apr 21 17:33:14 ubuntu kernel: [    4.366925] netconsole: network logging started
Apr 21 17:33:14 ubuntu kernel: [    4.388008] cfg80211: Loading compiled-in X.509 certificates for regulatory database
Apr 21 17:33:14 ubuntu kernel: [    4.431704] cfg80211: Loaded X.509 cert 'sforshee: 00b28ddf47aef9cea7'
Apr 21 17:33:14 ubuntu kernel: [    4.434647] ALSA device list:
Apr 21 17:33:14 ubuntu kernel: [    4.434828]   No soundcards found.
Apr 21 17:33:14 ubuntu kernel: [    4.438561] platform regulatory.0: Direct firmware load for regulatory.db failed with error -2
Apr 21 17:33:14 ubuntu kernel: [    4.442906] cfg80211: failed to load regulatory.db
Apr 21 17:33:14 ubuntu kernel: [    4.856132] input: ImExPS/2 Generic Explorer Mouse as /devices/platform/i8042/serio1/input/input3
Apr 21 17:33:14 ubuntu kernel: [    4.862788] md: Waiting for all devices to be available before autodetect
Apr 21 17:33:14 ubuntu kernel: [    4.863064] md: If you don't use raid, use raid=noautodetect
Apr 21 17:33:14 ubuntu kernel: [    4.870754] md: Autodetecting RAID arrays.
Apr 21 17:33:14 ubuntu kernel: [    4.871043] md: autorun ...
Apr 21 17:33:14 ubuntu kernel: [    4.871565] md: ... autorun DONE.
Apr 21 17:33:14 ubuntu kernel: [    4.897139] EXT4-fs (sda): couldn't mount as ext3 due to feature incompatibilities
Apr 21 17:33:14 ubuntu kernel: [    4.902577] EXT4-fs (sda): couldn't mount as ext2 due to feature incompatibilities
Apr 21 17:33:14 ubuntu kernel: [    5.008687] EXT4-fs (sda): recovery complete
Apr 21 17:33:14 ubuntu kernel: [    5.016849] EXT4-fs (sda): mounted filesystem with ordered data mode. Opts: (null)
Apr 21 17:33:14 ubuntu kernel: [    5.023254] VFS: Mounted root (ext4 filesystem) on device 8:0.
Apr 21 17:33:14 ubuntu kernel: [    5.061618] devtmpfs: mounted
Apr 21 17:33:14 ubuntu kernel: [    5.140665] Freeing unused kernel memory: 1224K
Apr 21 17:33:14 ubuntu kernel: [    5.140665] Write protecting the kernel read-only data: 18432k
Apr 21 17:33:14 ubuntu kernel: [    5.146628] Freeing unused kernel memory: 2004K
Apr 21 17:33:14 ubuntu kernel: [    5.149289] Freeing unused kernel memory: 380K
Apr 21 17:33:14 ubuntu kernel: [    5.894017] random: crng init done
Apr 21 17:33:14 ubuntu kernel: [    7.822546] systemd-debug-g (1057) used greatest stack depth: 14208 bytes left
Apr 21 17:33:14 ubuntu kernel: [    7.938972] systemd-gpt-aut (1060) used greatest stack depth: 14064 bytes left
Apr 21 17:33:14 ubuntu kernel: [    8.036355] systemd-cryptse (1056) used greatest stack depth: 13392 bytes left
Apr 21 17:33:20 ubuntu kernel: [   37.996650] e1000 0000:00:03.0 enp0s3: renamed from eth0
Apr 21 17:37:03 ubuntu kernel: [  261.904266] e1000 0000:00:03.0 eth0: (PCI:33MHz:32-bit) 52:54:00:12:34:56
Apr 21 17:37:03 ubuntu kernel: [  261.904266] e1000 0000:00:03.0 eth0: Intel(R) PRO/1000 Network Connection
Apr 21 17:37:04 ubuntu kernel: [  262.078648] e1000 0000:00:03.0 enp0s3: renamed from eth0
Apr 21 17:37:06 ubuntu kernel: [  264.621717] IPv6: ADDRCONF(NETDEV_UP): enp0s3: link is not ready
Apr 21 17:37:06 ubuntu kernel: [  264.624381] e1000: enp0s3 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: RX
Apr 21 17:37:06 ubuntu kernel: [  264.652850] IPv6: ADDRCONF(NETDEV_CHANGE): enp0s3: link becomes ready
Apr 21 18:05:25 ubuntu kernel: [ 1963.745526] ar (4267) used greatest stack depth: 13320 bytes left
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Linux version 4.15.0 (root@ubuntu) (gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1~18.04)) #2 SMP Tue Apr 21 07:10:56 UTC 2020
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Command line: root=/dev/sda rw console=ttyS0
Apr 21 18:22:01 ubuntu kernel: [    0.000000] x86/fpu: x87 FPU will use FXSAVE
Apr 21 18:22:01 ubuntu kernel: [    0.000000] e820: BIOS-provided physical RAM map:
Apr 21 18:22:01 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x0000000000000000-0x000000000009fbff] usable
Apr 21 18:22:01 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x000000000009fc00-0x000000000009ffff] reserved
Apr 21 18:22:01 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x00000000000f0000-0x00000000000fffff] reserved
Apr 21 18:22:01 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x0000000000100000-0x000000001ffdefff] usable
Apr 21 18:22:01 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x000000001ffdf000-0x000000001fffffff] reserved
Apr 21 18:22:01 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x00000000fffc0000-0x00000000ffffffff] reserved
Apr 21 18:22:01 ubuntu kernel: [    0.000000] NX (Execute Disable) protection: active
Apr 21 18:22:01 ubuntu kernel: [    0.000000] random: fast init done
Apr 21 18:22:01 ubuntu kernel: [    0.000000] SMBIOS 2.8 present.
Apr 21 18:22:01 ubuntu kernel: [    0.000000] DMI: QEMU Standard PC (i440FX + PIIX, 1996), BIOS 1.10.2-1ubuntu1 04/01/2014
Apr 21 18:22:01 ubuntu kernel: [    0.000000] e820: update [mem 0x00000000-0x00000fff] usable ==> reserved
Apr 21 18:22:01 ubuntu kernel: [    0.000000] e820: remove [mem 0x000a0000-0x000fffff] usable
Apr 21 18:22:01 ubuntu kernel: [    0.000000] e820: last_pfn = 0x1ffdf max_arch_pfn = 0x400000000
Apr 21 18:22:01 ubuntu kernel: [    0.000000] MTRR default type: write-back
Apr 21 18:22:01 ubuntu kernel: [    0.000000] MTRR fixed ranges enabled:
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   00000-9FFFF write-back
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   A0000-BFFFF uncachable
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   C0000-FFFFF write-protect
Apr 21 18:22:01 ubuntu kernel: [    0.000000] MTRR variable ranges enabled:
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   0 base 0080000000 mask FF80000000 uncachable
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   1 disabled
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   2 disabled
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   3 disabled
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   4 disabled
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   5 disabled
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   6 disabled
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   7 disabled
Apr 21 18:22:01 ubuntu kernel: [    0.000000] x86/PAT: Configuration [0-7]: WB  WC  UC- UC  WB  WP  UC- WT  
Apr 21 18:22:01 ubuntu kernel: [    0.000000] found SMP MP-table at [mem 0x000f6a60-0x000f6a6f] mapped at [        (ptrval)]
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Scanning 1 areas for low memory corruption
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Base memory trampoline at [        (ptrval)] 99000 size 24576
Apr 21 18:22:01 ubuntu kernel: [    0.000000] BRK [0x1732c000, 0x1732cfff] PGTABLE
Apr 21 18:22:01 ubuntu kernel: [    0.000000] BRK [0x1732d000, 0x1732dfff] PGTABLE
Apr 21 18:22:01 ubuntu kernel: [    0.000000] BRK [0x1732e000, 0x1732efff] PGTABLE
Apr 21 18:22:01 ubuntu kernel: [    0.000000] BRK [0x1732f000, 0x1732ffff] PGTABLE
Apr 21 18:22:01 ubuntu kernel: [    0.000000] BRK [0x17330000, 0x17330fff] PGTABLE
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: Early table checksum verification disabled
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: RSDP 0x00000000000F6A10 000014 (v00 BOCHS )
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: RSDT 0x000000001FFE15BA 000034 (v01 BOCHS  BXPCRSDT 00000001 BXPC 00000001)
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: FACP 0x000000001FFE12EE 000074 (v01 BOCHS  BXPCFACP 00000001 BXPC 00000001)
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: DSDT 0x000000001FFDFDC0 00152E (v01 BOCHS  BXPCDSDT 00000001 BXPC 00000001)
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: FACS 0x000000001FFDFD80 000040
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: APIC 0x000000001FFE13E2 000090 (v01 BOCHS  BXPCAPIC 00000001 BXPC 00000001)
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: HPET 0x000000001FFE1472 000038 (v01 BOCHS  BXPCHPET 00000001 BXPC 00000001)
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: SRAT 0x000000001FFE14AA 000110 (v01 BOCHS  BXPCSRAT 00000001 BXPC 00000001)
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: Local APIC address 0xfee00000
Apr 21 18:22:01 ubuntu kernel: [    0.000000] SRAT: PXM 0 -> APIC 0x00 -> Node 0
Apr 21 18:22:01 ubuntu kernel: [    0.000000] SRAT: PXM 1 -> APIC 0x01 -> Node 1
Apr 21 18:22:01 ubuntu kernel: [    0.000000] SRAT: PXM 0 -> APIC 0x02 -> Node 0
Apr 21 18:22:01 ubuntu kernel: [    0.000000] SRAT: PXM 1 -> APIC 0x03 -> Node 1
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 0 PXM 0 [mem 0x00000000-0x0009ffff]
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 0 PXM 0 [mem 0x00100000-0x0fffffff]
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 1 PXM 1 [mem 0x10000000-0x1fffffff]
Apr 21 18:22:01 ubuntu kernel: [    0.000000] NUMA: Node 0 [mem 0x00000000-0x0009ffff] + [mem 0x00100000-0x0fffffff] -> [mem 0x00000000-0x0fffffff]
Apr 21 18:22:01 ubuntu kernel: [    0.000000] NODE_DATA(0) allocated [mem 0x0fffc000-0x0fffffff]
Apr 21 18:22:01 ubuntu kernel: [    0.000000] NODE_DATA(1) allocated [mem 0x1ffdb000-0x1ffdefff]
Apr 21 18:22:01 ubuntu kernel: [    0.000000] tsc: Unable to calibrate against PIT
Apr 21 18:22:01 ubuntu kernel: [    0.000000] tsc: No reference (HPET/PMTIMER) available
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Zone ranges:
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   DMA      [mem 0x0000000000001000-0x0000000000ffffff]
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   DMA32    [mem 0x0000000001000000-0x000000001ffdefff]
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   Normal   empty
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Movable zone start for each node
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Early memory node ranges
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   node   0: [mem 0x0000000000001000-0x000000000009efff]
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   node   0: [mem 0x0000000000100000-0x000000000fffffff]
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   node   1: [mem 0x0000000010000000-0x000000001ffdefff]
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Initmem setup node 0 [mem 0x0000000000001000-0x000000000fffffff]
Apr 21 18:22:01 ubuntu kernel: [    0.000000] On node 0 totalpages: 65438
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   DMA zone: 64 pages used for memmap
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   DMA zone: 21 pages reserved
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   DMA zone: 3998 pages, LIFO batch:0
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   DMA32 zone: 960 pages used for memmap
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   DMA32 zone: 61440 pages, LIFO batch:15
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Initmem setup node 1 [mem 0x0000000010000000-0x000000001ffdefff]
Apr 21 18:22:01 ubuntu kernel: [    0.000000] On node 1 totalpages: 65503
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   DMA32 zone: 1024 pages used for memmap
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   DMA32 zone: 65503 pages, LIFO batch:15
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Reserved but unavailable: 98 pages
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: PM-Timer IO Port: 0x608
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: Local APIC address 0xfee00000
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: LAPIC_NMI (acpi_id[0xff] dfl dfl lint[0x1])
Apr 21 18:22:01 ubuntu kernel: [    0.000000] IOAPIC[0]: apic_id 0, version 32, address 0xfec00000, GSI 0-23
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 0 global_irq 2 dfl dfl)
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 5 global_irq 5 high level)
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 9 global_irq 9 high level)
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 10 global_irq 10 high level)
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 11 global_irq 11 high level)
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: IRQ0 used by override.
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: IRQ5 used by override.
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: IRQ9 used by override.
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: IRQ10 used by override.
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: IRQ11 used by override.
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Using ACPI (MADT) for SMP configuration information
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: HPET id: 0x8086a201 base: 0xfed00000
Apr 21 18:22:01 ubuntu kernel: [    0.000000] smpboot: Allowing 4 CPUs, 0 hotplug CPUs
Apr 21 18:22:01 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x00000000-0x00000fff]
Apr 21 18:22:01 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x0009f000-0x0009ffff]
Apr 21 18:22:01 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x000a0000-0x000effff]
Apr 21 18:22:01 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x000f0000-0x000fffff]
Apr 21 18:22:01 ubuntu kernel: [    0.000000] e820: [mem 0x20000000-0xfffbffff] available for PCI devices
Apr 21 18:22:01 ubuntu kernel: [    0.000000] clocksource: refined-jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 1910969940391419 ns
Apr 21 18:22:01 ubuntu kernel: [    0.000000] setup_percpu: NR_CPUS:64 nr_cpumask_bits:64 nr_cpu_ids:4 nr_node_ids:2
Apr 21 18:22:01 ubuntu kernel: [    0.000000] percpu: Embedded 43 pages/cpu @        (ptrval) s138520 r8192 d29416 u1048576
Apr 21 18:22:01 ubuntu kernel: [    0.000000] pcpu-alloc: s138520 r8192 d29416 u1048576 alloc=1*2097152
Apr 21 18:22:01 ubuntu kernel: [    0.000000] pcpu-alloc: [0] 0 2 [1] 1 3 
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Built 2 zonelists, mobility grouping on.  Total pages: 128872
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Policy zone: DMA32
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Kernel command line: root=/dev/sda rw console=ttyS0
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Calgary: detecting Calgary via BIOS EBDA area
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Calgary: Unable to locate Rio Grande table in EBDA - bailing!
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Memory: 488888K/523764K available (12300K kernel code, 1289K rwdata, 3716K rodata, 1224K init, 660K bss, 34876K reserved, 0K cma-reserved)
Apr 21 18:22:01 ubuntu kernel: [    0.000000] SLUB: HWalign=64, Order=0-3, MinObjects=0, CPUs=4, Nodes=2
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Hierarchical RCU implementation.
Apr 21 18:22:01 ubuntu kernel: [    0.000000] 	RCU event tracing is enabled.
Apr 21 18:22:01 ubuntu kernel: [    0.000000] 	RCU restricting CPUs from NR_CPUS=64 to nr_cpu_ids=4.
Apr 21 18:22:01 ubuntu kernel: [    0.000000] RCU: Adjusting geometry for rcu_fanout_leaf=16, nr_cpu_ids=4
Apr 21 18:22:01 ubuntu kernel: [    0.000000] NR_IRQS: 4352, nr_irqs: 456, preallocated irqs: 16
Apr 21 18:22:01 ubuntu kernel: [    0.000000] Console: colour VGA+ 80x25
Apr 21 18:22:01 ubuntu kernel: [    0.000000] console [ttyS0] enabled
Apr 21 18:22:01 ubuntu kernel: [    0.000000] mempolicy: Enabling automatic NUMA balancing. Configure with numa_balancing= or the kernel.numa_balancing sysctl
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: Core revision 20170831
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: 1 ACPI AML tables successfully acquired and loaded
Apr 21 18:22:01 ubuntu kernel: [    0.000000] clocksource: hpet: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 19112604467 ns
Apr 21 18:22:01 ubuntu kernel: [    0.000000] hpet clockevent registered
Apr 21 18:22:01 ubuntu kernel: [    0.004000] APIC: Switch to symmetric I/O mode setup
Apr 21 18:22:01 ubuntu kernel: [    0.008000] ..TIMER: vector=0x30 apic1=0 pin1=2 apic2=-1 pin2=-1
Apr 21 18:22:01 ubuntu kernel: [    0.017000] tsc: Unable to calibrate against PIT
Apr 21 18:22:01 ubuntu kernel: [    0.017000] tsc: using HPET reference calibration
Apr 21 18:22:01 ubuntu kernel: [    0.017000] tsc: Detected 2699.341 MHz processor
Apr 21 18:22:01 ubuntu kernel: [    0.019618] tsc: Marking TSC unstable due to TSCs unsynchronized
Apr 21 18:22:01 ubuntu kernel: [    0.021919] Calibrating delay loop (skipped), value calculated using timer frequency.. 5398.68 BogoMIPS (lpj=2699341)
Apr 21 18:22:01 ubuntu kernel: [    0.022000] pid_max: default: 32768 minimum: 301
Apr 21 18:22:01 ubuntu kernel: [    0.026268] Security Framework initialized
Apr 21 18:22:01 ubuntu kernel: [    0.026725] SELinux:  Initializing.
Apr 21 18:22:01 ubuntu kernel: [    0.027000] SELinux:  Starting in permissive mode
Apr 21 18:22:01 ubuntu kernel: [    0.027000] Dentry cache hash table entries: 65536 (order: 7, 524288 bytes)
Apr 21 18:22:01 ubuntu kernel: [    0.028000] Inode-cache hash table entries: 32768 (order: 6, 262144 bytes)
Apr 21 18:22:01 ubuntu kernel: [    0.029000] Mount-cache hash table entries: 1024 (order: 1, 8192 bytes)
Apr 21 18:22:01 ubuntu kernel: [    0.029562] Mountpoint-cache hash table entries: 1024 (order: 1, 8192 bytes)
Apr 21 18:22:01 ubuntu kernel: [    0.053808] mce: CPU supports 10 MCE banks
Apr 21 18:22:01 ubuntu kernel: [    0.056179] Last level iTLB entries: 4KB 0, 2MB 0, 4MB 0
Apr 21 18:22:01 ubuntu kernel: [    0.056566] Last level dTLB entries: 4KB 0, 2MB 0, 4MB 0, 1GB 0
Apr 21 18:22:01 ubuntu kernel: [    0.057099] Spectre V2 mitigation: LFENCE not serializing. Switching to generic retpoline
Apr 21 18:22:01 ubuntu kernel: [    0.057616] Spectre V2 mitigation: Mitigation: Full generic retpoline
Apr 21 18:22:01 ubuntu kernel: [    0.058149] Spectre V2 mitigation: Filling RSB on context switch
Apr 21 18:22:01 ubuntu kernel: [    0.063000] Freeing SMP alternatives memory: 40K
Apr 21 18:22:01 ubuntu kernel: [    0.084000] APIC calibration not consistent with PM-Timer: 112ms instead of 100ms
Apr 21 18:22:01 ubuntu kernel: [    0.084000] APIC delta adjusted to PM-Timer: 6249946 (7044333)
Apr 21 18:22:01 ubuntu kernel: [    0.084781] smpboot: CPU0: AMD QEMU Virtual CPU version 2.5+ (family: 0x6, model: 0x6, stepping: 0x3)
Apr 21 18:22:01 ubuntu kernel: [    0.101393] Performance Events: PMU not available due to virtualization, using software events only.
Apr 21 18:22:01 ubuntu kernel: [    0.107000] Hierarchical SRCU implementation.
Apr 21 18:22:01 ubuntu kernel: [    0.113517] Huh? What family is it: 0x6?!
Apr 21 18:22:01 ubuntu kernel: [    0.116574] smp: Bringing up secondary CPUs ...
Apr 21 18:22:01 ubuntu kernel: [    0.123447] x86: Booting SMP configuration:
Apr 21 18:22:01 ubuntu kernel: [    0.123826] .... node  #1, CPUs:      #1
Apr 21 18:22:01 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping max bogoMips estimate 1 = 21728983
Apr 21 18:22:01 ubuntu kernel: [    0.001000] calibrate_delay_direct() failed to get a good estimate for loops_per_jiffy.
Apr 21 18:22:01 ubuntu kernel: [    0.001000] Probably due to long platform interrupts. Consider using "lpj=" boot option.
Apr 21 18:22:01 ubuntu kernel: [    0.226000] .... node  #0, CPUs:   #2
Apr 21 18:22:01 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping max bogoMips estimate 3 = 8963802
Apr 21 18:22:01 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping max bogoMips estimate 1 = 6241052
Apr 21 18:22:01 ubuntu kernel: [    0.001000] calibrate_delay_direct() failed to get a good estimate for loops_per_jiffy.
Apr 21 18:22:01 ubuntu kernel: [    0.001000] Probably due to long platform interrupts. Consider using "lpj=" boot option.
Apr 21 18:22:01 ubuntu kernel: [    0.320210] .... node  #1, CPUs:   #3
Apr 21 18:22:01 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping max bogoMips estimate 3 = 6261916
Apr 21 18:22:01 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping min bogoMips estimate 2 = 4358566
Apr 21 18:22:01 ubuntu kernel: [    0.390170] smp: Brought up 2 nodes, 4 CPUs
Apr 21 18:22:01 ubuntu kernel: [    0.392064] smpboot: Max logical packages: 4
Apr 21 18:22:01 ubuntu kernel: [    0.393168] smpboot: Total of 4 processors activated (15911.98 BogoMIPS)
Apr 21 18:22:01 ubuntu kernel: [    0.419000] devtmpfs: initialized
Apr 21 18:22:01 ubuntu kernel: [    0.441130] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 1911260446275000 ns
Apr 21 18:22:01 ubuntu kernel: [    0.442000] futex hash table entries: 1024 (order: 4, 65536 bytes)
Apr 21 18:22:01 ubuntu kernel: [    0.447451] RTC time: 18:21:31, date: 04/21/20
Apr 21 18:22:01 ubuntu kernel: [    0.457051] kworker/u9:0 (32) used greatest stack depth: 14280 bytes left
Apr 21 18:22:01 ubuntu kernel: [    0.468317] NET: Registered protocol family 16
Apr 21 18:22:01 ubuntu kernel: [    0.473902] audit: initializing netlink subsys (disabled)
Apr 21 18:22:01 ubuntu kernel: [    0.478370] audit: type=2000 audit(1587493289.476:1): state=initialized audit_enabled=0 res=1
Apr 21 18:22:01 ubuntu kernel: [    0.504387] cpuidle: using governor menu
Apr 21 18:22:01 ubuntu kernel: [    0.508307] ACPI: bus type PCI registered
Apr 21 18:22:01 ubuntu kernel: [    0.511801] PCI: Using configuration type 1 for base access
Apr 21 18:22:01 ubuntu kernel: [    0.520000] mtrr: your CPUs had inconsistent fixed MTRR settings
Apr 21 18:22:01 ubuntu kernel: [    0.521176] mtrr: your CPUs had inconsistent variable MTRR settings
Apr 21 18:22:01 ubuntu kernel: [    0.521531] mtrr: your CPUs had inconsistent MTRRdefType settings
Apr 21 18:22:01 ubuntu kernel: [    0.521886] mtrr: probably your BIOS does not setup all CPUs.
Apr 21 18:22:01 ubuntu kernel: [    0.522084] mtrr: corrected configuration.
Apr 21 18:22:01 ubuntu kernel: [    0.550000] kworker/u9:0 (67) used greatest stack depth: 14248 bytes left
Apr 21 18:22:01 ubuntu kernel: [    0.681691] HugeTLB registered 2.00 MiB page size, pre-allocated 0 pages
Apr 21 18:22:01 ubuntu kernel: [    0.685585] ACPI: Added _OSI(Module Device)
Apr 21 18:22:01 ubuntu kernel: [    0.685945] ACPI: Added _OSI(Processor Device)
Apr 21 18:22:01 ubuntu kernel: [    0.686000] ACPI: Added _OSI(3.0 _SCP Extensions)
Apr 21 18:22:01 ubuntu kernel: [    0.686000] ACPI: Added _OSI(Processor Aggregator Device)
Apr 21 18:22:01 ubuntu kernel: [    0.733129] ACPI: Interpreter enabled
Apr 21 18:22:01 ubuntu kernel: [    0.735530] ACPI: (supports S0 S3 S4 S5)
Apr 21 18:22:01 ubuntu kernel: [    0.735779] ACPI: Using IOAPIC for interrupt routing
Apr 21 18:22:01 ubuntu kernel: [    0.738666] PCI: Using host bridge windows from ACPI; if necessary, use "pci=nocrs" and report a bug
Apr 21 18:22:01 ubuntu kernel: [    0.739000] ACPI: Enabled 2 GPEs in block 00 to 0F
Apr 21 18:22:01 ubuntu kernel: [    0.861000] ACPI: PCI Root Bridge [PCI0] (domain 0000 [bus 00-ff])
Apr 21 18:22:01 ubuntu kernel: [    0.862295] acpi PNP0A03:00: _OSC: OS supports [ASPM ClockPM Segments MSI]
Apr 21 18:22:01 ubuntu kernel: [    0.863669] acpi PNP0A03:00: _OSC failed (AE_NOT_FOUND); disabling ASPM
Apr 21 18:22:01 ubuntu kernel: [    0.865000] acpi PNP0A03:00: fail to add MMCONFIG information, can't access extended PCI configuration space under this bridge.
Apr 21 18:22:01 ubuntu kernel: [    0.874361] PCI host bridge to bus 0000:00
Apr 21 18:22:01 ubuntu kernel: [    0.874944] pci_bus 0000:00: root bus resource [io  0x0000-0x0cf7 window]
Apr 21 18:22:01 ubuntu kernel: [    0.875522] pci_bus 0000:00: root bus resource [io  0x0d00-0xffff window]
Apr 21 18:22:01 ubuntu kernel: [    0.876144] pci_bus 0000:00: root bus resource [mem 0x000a0000-0x000bffff window]
Apr 21 18:22:01 ubuntu kernel: [    0.877068] pci_bus 0000:00: root bus resource [mem 0x20000000-0xfebfffff window]
Apr 21 18:22:01 ubuntu kernel: [    0.877630] pci_bus 0000:00: root bus resource [mem 0x100000000-0x17fffffff window]
Apr 21 18:22:01 ubuntu kernel: [    0.878320] pci_bus 0000:00: root bus resource [bus 00-ff]
Apr 21 18:22:01 ubuntu kernel: [    0.879419] pci 0000:00:00.0: [8086:1237] type 00 class 0x060000
Apr 21 18:22:01 ubuntu kernel: [    0.889158] pci 0000:00:01.0: [8086:7000] type 00 class 0x060100
Apr 21 18:22:01 ubuntu kernel: [    0.891267] pci 0000:00:01.1: [8086:7010] type 00 class 0x010180
Apr 21 18:22:01 ubuntu kernel: [    0.894317] pci 0000:00:01.1: reg 0x20: [io  0xc040-0xc04f]
Apr 21 18:22:01 ubuntu kernel: [    0.895000] pci 0000:00:01.1: legacy IDE quirk: reg 0x10: [io  0x01f0-0x01f7]
Apr 21 18:22:01 ubuntu kernel: [    0.895197] pci 0000:00:01.1: legacy IDE quirk: reg 0x14: [io  0x03f6]
Apr 21 18:22:01 ubuntu kernel: [    0.895625] pci 0000:00:01.1: legacy IDE quirk: reg 0x18: [io  0x0170-0x0177]
Apr 21 18:22:01 ubuntu kernel: [    0.896000] pci 0000:00:01.1: legacy IDE quirk: reg 0x1c: [io  0x0376]
Apr 21 18:22:01 ubuntu kernel: [    0.901269] pci 0000:00:01.3: [8086:7113] type 00 class 0x068000
Apr 21 18:22:01 ubuntu kernel: [    0.902000] pci 0000:00:01.3: quirk: [io  0x0600-0x063f] claimed by PIIX4 ACPI
Apr 21 18:22:01 ubuntu kernel: [    0.902172] pci 0000:00:01.3: quirk: [io  0x0700-0x070f] claimed by PIIX4 SMB
Apr 21 18:22:01 ubuntu kernel: [    0.907231] pci 0000:00:02.0: [1234:1111] type 00 class 0x030000
Apr 21 18:22:01 ubuntu kernel: [    0.908000] pci 0000:00:02.0: reg 0x10: [mem 0xfd000000-0xfdffffff pref]
Apr 21 18:22:01 ubuntu kernel: [    0.910117] pci 0000:00:02.0: reg 0x18: [mem 0xfebb0000-0xfebb0fff]
Apr 21 18:22:01 ubuntu kernel: [    0.911000] pci 0000:00:02.0: reg 0x30: [mem 0xfeba0000-0xfebaffff pref]
Apr 21 18:22:01 ubuntu kernel: [    0.915201] pci 0000:00:03.0: [8086:100e] type 00 class 0x020000
Apr 21 18:22:01 ubuntu kernel: [    0.916000] pci 0000:00:03.0: reg 0x10: [mem 0xfeb80000-0xfeb9ffff]
Apr 21 18:22:01 ubuntu kernel: [    0.917000] pci 0000:00:03.0: reg 0x14: [io  0xc000-0xc03f]
Apr 21 18:22:01 ubuntu kernel: [    0.917000] pci 0000:00:03.0: reg 0x30: [mem 0xfeb00000-0xfeb7ffff pref]
Apr 21 18:22:01 ubuntu kernel: [    0.937320] ACPI: PCI Interrupt Link [LNKA] (IRQs 5 *10 11)
Apr 21 18:22:01 ubuntu kernel: [    0.940936] ACPI: PCI Interrupt Link [LNKB] (IRQs 5 *10 11)
Apr 21 18:22:01 ubuntu kernel: [    0.941730] ACPI: PCI Interrupt Link [LNKC] (IRQs 5 10 *11)
Apr 21 18:22:01 ubuntu kernel: [    0.946337] ACPI: PCI Interrupt Link [LNKD] (IRQs 5 10 *11)
Apr 21 18:22:01 ubuntu kernel: [    0.947000] ACPI: PCI Interrupt Link [LNKS] (IRQs *9)
Apr 21 18:22:01 ubuntu kernel: [    0.968370] pci 0000:00:02.0: vgaarb: setting as boot VGA device
Apr 21 18:22:01 ubuntu kernel: [    0.968938] pci 0000:00:02.0: vgaarb: VGA device added: decodes=io+mem,owns=io+mem,locks=none
Apr 21 18:22:01 ubuntu kernel: [    0.969000] pci 0000:00:02.0: vgaarb: bridge control possible
Apr 21 18:22:01 ubuntu kernel: [    0.969367] vgaarb: loaded
Apr 21 18:22:01 ubuntu kernel: [    0.976766] SCSI subsystem initialized
Apr 21 18:22:01 ubuntu kernel: [    0.979000] libata version 3.00 loaded.
Apr 21 18:22:01 ubuntu kernel: [    0.979897] ACPI: bus type USB registered
Apr 21 18:22:01 ubuntu kernel: [    0.981705] usbcore: registered new interface driver usbfs
Apr 21 18:22:01 ubuntu kernel: [    0.992201] usbcore: registered new interface driver hub
Apr 21 18:22:01 ubuntu kernel: [    0.993000] usbcore: registered new device driver usb
Apr 21 18:22:01 ubuntu kernel: [    0.994116] pps_core: LinuxPPS API ver. 1 registered
Apr 21 18:22:01 ubuntu kernel: [    0.994450] pps_core: Software ver. 5.3.6 - Copyright 2005-2007 Rodolfo Giometti <giometti@linux.it>
Apr 21 18:22:01 ubuntu kernel: [    0.994450] PTP clock support registered
Apr 21 18:22:01 ubuntu kernel: [    0.997930] EDAC MC: Ver: 3.0.0
Apr 21 18:22:01 ubuntu kernel: [    1.005000] Advanced Linux Sound Architecture Driver Initialized.
Apr 21 18:22:01 ubuntu kernel: [    1.005000] PCI: Using ACPI for IRQ routing
Apr 21 18:22:01 ubuntu kernel: [    1.005000] PCI: pci_cache_line_size set to 64 bytes
Apr 21 18:22:01 ubuntu kernel: [    1.005000] e820: reserve RAM buffer [mem 0x0009fc00-0x0009ffff]
Apr 21 18:22:01 ubuntu kernel: [    1.005000] e820: reserve RAM buffer [mem 0x1ffdf000-0x1fffffff]
Apr 21 18:22:01 ubuntu kernel: [    1.020268] NetLabel: Initializing
Apr 21 18:22:01 ubuntu kernel: [    1.020573] NetLabel:  domain hash size = 128
Apr 21 18:22:01 ubuntu kernel: [    1.021110] NetLabel:  protocols = UNLABELED CIPSOv4 CALIPSO
Apr 21 18:22:01 ubuntu kernel: [    1.025689] NetLabel:  unlabeled traffic allowed by default
Apr 21 18:22:01 ubuntu kernel: [    1.030601] HPET: 3 timers in total, 0 timers will be used for per-cpu timer
Apr 21 18:22:01 ubuntu kernel: [    1.031000] hpet0: at MMIO 0xfed00000, IRQs 2, 8, 0
Apr 21 18:22:01 ubuntu kernel: [    1.031079] hpet0: 3 comparators, 64-bit 100.000000 MHz counter
Apr 21 18:22:01 ubuntu kernel: [    1.036000] clocksource: Switched to clocksource hpet
Apr 21 18:22:01 ubuntu kernel: [    1.321800] VFS: Disk quotas dquot_6.6.0
Apr 21 18:22:01 ubuntu kernel: [    1.321800] VFS: Dquot-cache hash table entries: 512 (order 0, 4096 bytes)
Apr 21 18:22:01 ubuntu kernel: [    1.329650] pnp: PnP ACPI init
Apr 21 18:22:01 ubuntu kernel: [    1.329650] pnp 00:00: Plug and Play ACPI device, IDs PNP0b00 (active)
Apr 21 18:22:01 ubuntu kernel: [    1.349401] pnp 00:01: Plug and Play ACPI device, IDs PNP0303 (active)
Apr 21 18:22:01 ubuntu kernel: [    1.349614] pnp 00:02: Plug and Play ACPI device, IDs PNP0f13 (active)
Apr 21 18:22:01 ubuntu kernel: [    1.349614] pnp 00:03: [dma 2]
Apr 21 18:22:01 ubuntu kernel: [    1.349614] pnp 00:03: Plug and Play ACPI device, IDs PNP0700 (active)
Apr 21 18:22:01 ubuntu kernel: [    1.349614] pnp 00:04: Plug and Play ACPI device, IDs PNP0400 (active)
Apr 21 18:22:01 ubuntu kernel: [    1.349614] pnp 00:05: Plug and Play ACPI device, IDs PNP0501 (active)
Apr 21 18:22:01 ubuntu kernel: [    1.363907] pnp: PnP ACPI: found 6 devices
Apr 21 18:22:01 ubuntu kernel: [    1.622084] clocksource: acpi_pm: mask: 0xffffff max_cycles: 0xffffff, max_idle_ns: 2085701024 ns
Apr 21 18:22:01 ubuntu kernel: [    1.627240] pci_bus 0000:00: resource 4 [io  0x0000-0x0cf7 window]
Apr 21 18:22:01 ubuntu kernel: [    1.627281] pci_bus 0000:00: resource 5 [io  0x0d00-0xffff window]
Apr 21 18:22:01 ubuntu kernel: [    1.627301] pci_bus 0000:00: resource 6 [mem 0x000a0000-0x000bffff window]
Apr 21 18:22:01 ubuntu kernel: [    1.628127] pci_bus 0000:00: resource 7 [mem 0x20000000-0xfebfffff window]
Apr 21 18:22:01 ubuntu kernel: [    1.628180] pci_bus 0000:00: resource 8 [mem 0x100000000-0x17fffffff window]
Apr 21 18:22:01 ubuntu kernel: [    1.629041] NET: Registered protocol family 2
Apr 21 18:22:01 ubuntu kernel: [    1.641479] TCP established hash table entries: 4096 (order: 3, 32768 bytes)
Apr 21 18:22:01 ubuntu kernel: [    1.641479] TCP bind hash table entries: 4096 (order: 4, 65536 bytes)
Apr 21 18:22:01 ubuntu kernel: [    1.641479] TCP: Hash tables configured (established 4096 bind 4096)
Apr 21 18:22:01 ubuntu kernel: [    1.651123] UDP hash table entries: 256 (order: 1, 8192 bytes)
Apr 21 18:22:01 ubuntu kernel: [    1.651550] UDP-Lite hash table entries: 256 (order: 1, 8192 bytes)
Apr 21 18:22:01 ubuntu kernel: [    1.659952] NET: Registered protocol family 1
Apr 21 18:22:01 ubuntu kernel: [    1.677388] RPC: Registered named UNIX socket transport module.
Apr 21 18:22:01 ubuntu kernel: [    1.677388] RPC: Registered udp transport module.
Apr 21 18:22:01 ubuntu kernel: [    1.677388] RPC: Registered tcp transport module.
Apr 21 18:22:01 ubuntu kernel: [    1.677388] RPC: Registered tcp NFSv4.1 backchannel transport module.
Apr 21 18:22:01 ubuntu kernel: [    1.691810] pci 0000:00:00.0: Limiting direct PCI/PCI transfers
Apr 21 18:22:01 ubuntu kernel: [    1.716189] pci 0000:00:01.0: PIIX3: Enabling Passive Release
Apr 21 18:22:01 ubuntu kernel: [    1.725204] pci 0000:00:01.0: Activating ISA DMA hang workarounds
Apr 21 18:22:01 ubuntu kernel: [    1.726203] pci 0000:00:02.0: Video device with shadowed ROM at [mem 0x000c0000-0x000dffff]
Apr 21 18:22:01 ubuntu kernel: [    1.726651] PCI: CLS 0 bytes, default 64
Apr 21 18:22:01 ubuntu kernel: [    1.743266] clocksource: tsc: mask: 0xffffffffffffffff max_cycles: 0x26e8cfa7629, max_idle_ns: 440795217920 ns
Apr 21 18:22:01 ubuntu kernel: [    1.840565] Scanning for low memory corruption every 60 seconds
Apr 21 18:22:01 ubuntu kernel: [    1.909614] Initialise system trusted keyrings
Apr 21 18:22:01 ubuntu kernel: [    1.940783] workingset: timestamp_bits=56 max_order=17 bucket_order=0
Apr 21 18:22:01 ubuntu kernel: [    2.109292] NFS: Registering the id_resolver key type
Apr 21 18:22:01 ubuntu kernel: [    2.110057] Key type id_resolver registered
Apr 21 18:22:01 ubuntu kernel: [    2.110057] Key type id_legacy registered
Apr 21 18:22:01 ubuntu kernel: [    2.139792] SELinux:  Registering netfilter hooks
Apr 21 18:22:01 ubuntu kernel: [    2.241912] Key type asymmetric registered
Apr 21 18:22:01 ubuntu kernel: [    2.253025] Asymmetric key parser 'x509' registered
Apr 21 18:22:01 ubuntu kernel: [    2.256374] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 250)
Apr 21 18:22:01 ubuntu kernel: [    2.256582] io scheduler noop registered
Apr 21 18:22:01 ubuntu kernel: [    2.256582] io scheduler deadline registered
Apr 21 18:22:01 ubuntu kernel: [    2.266271] io scheduler cfq registered (default)
Apr 21 18:22:01 ubuntu kernel: [    2.266271] io scheduler mq-deadline registered
Apr 21 18:22:01 ubuntu kernel: [    2.266271] io scheduler kyber registered
Apr 21 18:22:01 ubuntu kernel: [    2.305162] input: Power Button as /devices/LNXSYSTM:00/LNXPWRBN:00/input/input0
Apr 21 18:22:01 ubuntu kernel: [    2.316737] ACPI: Power Button [PWRF]
Apr 21 18:22:01 ubuntu kernel: [    2.360587] Serial: 8250/16550 driver, 4 ports, IRQ sharing enabled
Apr 21 18:22:01 ubuntu kernel: [    2.379833] 00:05: ttyS0 at I/O 0x3f8 (irq = 4, base_baud = 115200) is a 16550A
Apr 21 18:22:01 ubuntu kernel: [    2.428195] Non-volatile memory driver v1.3
Apr 21 18:22:01 ubuntu kernel: [    2.432861] Linux agpgart interface v0.103
Apr 21 18:22:01 ubuntu kernel: [    2.576366] loop: module loaded
Apr 21 18:22:01 ubuntu kernel: [    2.583230] ata_piix 0000:00:01.1: version 2.13
Apr 21 18:22:01 ubuntu kernel: [    2.626087] hrtimer: interrupt took 3440530 ns
Apr 21 18:22:01 ubuntu kernel: [    2.635202] scsi host0: ata_piix
Apr 21 18:22:01 ubuntu kernel: [    2.692755] scsi host1: ata_piix
Apr 21 18:22:01 ubuntu kernel: [    2.701742] ata1: PATA max MWDMA2 cmd 0x1f0 ctl 0x3f6 bmdma 0xc040 irq 14
Apr 21 18:22:01 ubuntu kernel: [    2.702149] ata2: PATA max MWDMA2 cmd 0x170 ctl 0x376 bmdma 0xc048 irq 15
Apr 21 18:22:01 ubuntu kernel: [    2.749229] e100: Intel(R) PRO/100 Network Driver, 3.5.24-k2-NAPI
Apr 21 18:22:01 ubuntu kernel: [    2.778659] e100: Copyright(c) 1999-2006 Intel Corporation
Apr 21 18:22:01 ubuntu kernel: [    2.780933] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
Apr 21 18:22:01 ubuntu kernel: [    2.781414] e1000: Copyright (c) 1999-2006 Intel Corporation.
Apr 21 18:22:01 ubuntu kernel: [    3.019742] ata2.01: NODEV after polling detection
Apr 21 18:22:01 ubuntu kernel: [    3.020498] ata2.00: ATAPI: QEMU DVD-ROM, 2.5+, max UDMA/100
Apr 21 18:22:01 ubuntu kernel: [    3.030176] ata2.00: configured for MWDMA2
Apr 21 18:22:01 ubuntu kernel: [    3.034948] ata1.01: NODEV after polling detection
Apr 21 18:22:01 ubuntu kernel: [    3.053343] ata1.00: ATA-7: QEMU HARDDISK, 2.5+, max UDMA/100
Apr 21 18:22:01 ubuntu kernel: [    3.057788] ata1.00: 16777216 sectors, multi 16: LBA48 
Apr 21 18:22:01 ubuntu kernel: [    3.067586] ata1.00: configured for MWDMA2
Apr 21 18:22:01 ubuntu kernel: [    3.107344] scsi 0:0:0:0: Direct-Access     ATA      QEMU HARDDISK    2.5+ PQ: 0 ANSI: 5
Apr 21 18:22:01 ubuntu kernel: [    3.162068] sd 0:0:0:0: [sda] 16777216 512-byte logical blocks: (8.59 GB/8.00 GiB)
Apr 21 18:22:01 ubuntu kernel: [    3.164979] sd 0:0:0:0: Attached scsi generic sg0 type 0
Apr 21 18:22:01 ubuntu kernel: [    3.166820] sd 0:0:0:0: [sda] Write Protect is off
Apr 21 18:22:01 ubuntu kernel: [    3.167347] sd 0:0:0:0: [sda] Mode Sense: 00 3a 00 00
Apr 21 18:22:01 ubuntu kernel: [    3.192756] sd 0:0:0:0: [sda] Write cache: enabled, read cache: enabled, doesn't support DPO or FUA
Apr 21 18:22:01 ubuntu kernel: [    3.239231] scsi 1:0:0:0: CD-ROM            QEMU     QEMU DVD-ROM     2.5+ PQ: 0 ANSI: 5
Apr 21 18:22:01 ubuntu kernel: [    3.307255] sr 1:0:0:0: [sr0] scsi3-mmc drive: 4x/4x cd/rw xa/form2 tray
Apr 21 18:22:01 ubuntu kernel: [    3.307334] cdrom: Uniform CD-ROM driver Revision: 3.20
Apr 21 18:22:01 ubuntu kernel: [    3.315372] sr 1:0:0:0: Attached scsi CD-ROM sr0
Apr 21 18:22:01 ubuntu kernel: [    3.378028] sr 1:0:0:0: Attached scsi generic sg1 type 5
Apr 21 18:22:01 ubuntu kernel: [    3.494657] sd 0:0:0:0: [sda] Attached SCSI disk
Apr 21 18:22:01 ubuntu kernel: [    3.812575] ACPI: PCI Interrupt Link [LNKC] enabled at IRQ 11
Apr 21 18:22:01 ubuntu kernel: [    3.873187] e1000 0000:00:03.0 eth0: (PCI:33MHz:32-bit) 52:54:00:12:34:56
Apr 21 18:22:01 ubuntu kernel: [    3.873187] e1000 0000:00:03.0 eth0: Intel(R) PRO/1000 Network Connection
Apr 21 18:22:01 ubuntu kernel: [    3.879120] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
Apr 21 18:22:01 ubuntu kernel: [    3.880860] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
Apr 21 18:22:01 ubuntu kernel: [    3.882423] sky2: driver version 1.30
Apr 21 18:22:01 ubuntu kernel: [    3.906703] ehci_hcd: USB 2.0 'Enhanced' Host Controller (EHCI) Driver
Apr 21 18:22:01 ubuntu kernel: [    3.906703] ehci-pci: EHCI PCI platform driver
Apr 21 18:22:01 ubuntu kernel: [    3.910217] ohci_hcd: USB 1.1 'Open' Host Controller (OHCI) Driver
Apr 21 18:22:01 ubuntu kernel: [    3.914465] ohci-pci: OHCI PCI platform driver
Apr 21 18:22:01 ubuntu kernel: [    3.916912] uhci_hcd: USB Universal Host Controller Interface driver
Apr 21 18:22:01 ubuntu kernel: [    3.930937] usbcore: registered new interface driver usblp
Apr 21 18:22:01 ubuntu kernel: [    3.932544] usbcore: registered new interface driver usb-storage
Apr 21 18:22:01 ubuntu kernel: [    3.948420] i8042: PNP: PS/2 Controller [PNP0303:KBD,PNP0f13:MOU] at 0x60,0x64 irq 1,12
Apr 21 18:22:01 ubuntu kernel: [    3.972671] serio: i8042 KBD port at 0x60,0x64 irq 1
Apr 21 18:22:01 ubuntu kernel: [    3.973298] serio: i8042 AUX port at 0x60,0x64 irq 12
Apr 21 18:22:01 ubuntu kernel: [    4.020656] rtc_cmos 00:00: RTC can wake from S4
Apr 21 18:22:01 ubuntu kernel: [    4.133024] rtc_cmos 00:00: rtc core: registered rtc_cmos as rtc0
Apr 21 18:22:01 ubuntu kernel: [    4.136635] rtc_cmos 00:00: alarms up to one day, y3k, 114 bytes nvram, hpet irqs
Apr 21 18:22:01 ubuntu kernel: [    4.182514] hpet1: lost 1 rtc interrupts
Apr 21 18:22:01 ubuntu kernel: [    4.216633] input: AT Translated Set 2 keyboard as /devices/platform/i8042/serio0/input/input1
Apr 21 18:22:02 ubuntu kernel: [    4.219657] device-mapper: ioctl: 4.37.0-ioctl (2017-09-20) initialised: dm-devel@redhat.com
Apr 21 18:22:02 ubuntu kernel: [    4.242461] hidraw: raw HID events driver (C) Jiri Kosina
Apr 21 18:22:02 ubuntu kernel: [    4.280018] usbcore: registered new interface driver usbhid
Apr 21 18:22:02 ubuntu kernel: [    4.280254] usbhid: USB HID core driver
Apr 21 18:22:02 ubuntu kernel: [    4.331113] Netfilter messages via NETLINK v0.30.
Apr 21 18:22:02 ubuntu kernel: [    4.334229] nf_conntrack version 0.5.0 (4096 buckets, 16384 max)
Apr 21 18:22:02 ubuntu kernel: [    4.340116] ctnetlink v0.93: registering with nfnetlink.
Apr 21 18:22:02 ubuntu kernel: [    4.348725] ip_tables: (C) 2000-2006 Netfilter Core Team
Apr 21 18:22:02 ubuntu kernel: [    4.365725] Initializing XFRM netlink socket
Apr 21 18:22:02 ubuntu kernel: [    4.380074] NET: Registered protocol family 10
Apr 21 18:22:02 ubuntu kernel: [    4.432273] Segment Routing with IPv6
Apr 21 18:22:02 ubuntu kernel: [    4.436854] ip6_tables: (C) 2000-2006 Netfilter Core Team
Apr 21 18:22:02 ubuntu kernel: [    4.447605] sit: IPv6, IPv4 and MPLS over IPv4 tunneling driver
Apr 21 18:22:02 ubuntu kernel: [    4.464845] NET: Registered protocol family 17
Apr 21 18:22:02 ubuntu kernel: [    4.468421] Key type dns_resolver registered
Apr 21 18:22:02 ubuntu kernel: [    4.503212] registered taskstats version 1
Apr 21 18:22:02 ubuntu kernel: [    4.509147] Loading compiled-in X.509 certificates
Apr 21 18:22:02 ubuntu kernel: [    4.532290]   Magic number: 0:299:393
Apr 21 18:22:02 ubuntu kernel: [    4.535157] console [netcon0] enabled
Apr 21 18:22:02 ubuntu kernel: [    4.535271] netconsole: network logging started
Apr 21 18:22:02 ubuntu kernel: [    4.557237] cfg80211: Loading compiled-in X.509 certificates for regulatory database
Apr 21 18:22:02 ubuntu kernel: [    4.615879] cfg80211: Loaded X.509 cert 'sforshee: 00b28ddf47aef9cea7'
Apr 21 18:22:02 ubuntu kernel: [    4.616613] platform regulatory.0: Direct firmware load for regulatory.db failed with error -2
Apr 21 18:22:02 ubuntu kernel: [    4.620025] ALSA device list:
Apr 21 18:22:02 ubuntu kernel: [    4.620084]   No soundcards found.
Apr 21 18:22:02 ubuntu kernel: [    4.622892] cfg80211: failed to load regulatory.db
Apr 21 18:22:02 ubuntu kernel: [    5.080106] input: ImExPS/2 Generic Explorer Mouse as /devices/platform/i8042/serio1/input/input3
Apr 21 18:22:02 ubuntu kernel: [    5.089752] md: Waiting for all devices to be available before autodetect
Apr 21 18:22:02 ubuntu kernel: [    5.090113] md: If you don't use raid, use raid=noautodetect
Apr 21 18:22:02 ubuntu kernel: [    5.108790] md: Autodetecting RAID arrays.
Apr 21 18:22:02 ubuntu kernel: [    5.109245] md: autorun ...
Apr 21 18:22:02 ubuntu kernel: [    5.109441] md: ... autorun DONE.
Apr 21 18:22:02 ubuntu kernel: [    5.147496] EXT4-fs (sda): couldn't mount as ext3 due to feature incompatibilities
Apr 21 18:22:02 ubuntu kernel: [    5.175009] EXT4-fs (sda): couldn't mount as ext2 due to feature incompatibilities
Apr 21 18:22:02 ubuntu kernel: [    6.173860] EXT4-fs (sda): 1 orphan inode deleted
Apr 21 18:22:02 ubuntu kernel: [    6.175982] EXT4-fs (sda): recovery complete
Apr 21 18:22:02 ubuntu kernel: [    6.209723] random: crng init done
Apr 21 18:22:02 ubuntu kernel: [    6.216598] EXT4-fs (sda): mounted filesystem with ordered data mode. Opts: (null)
Apr 21 18:22:02 ubuntu kernel: [    6.217783] VFS: Mounted root (ext4 filesystem) on device 8:0.
Apr 21 18:22:02 ubuntu kernel: [    6.225364] devtmpfs: mounted
Apr 21 18:22:02 ubuntu kernel: [    6.300981] Freeing unused kernel memory: 1224K
Apr 21 18:22:02 ubuntu kernel: [    6.302380] Write protecting the kernel read-only data: 18432k
Apr 21 18:22:02 ubuntu kernel: [    6.314538] Freeing unused kernel memory: 2004K
Apr 21 18:22:02 ubuntu kernel: [    6.332046] Freeing unused kernel memory: 380K
Apr 21 18:22:02 ubuntu kernel: [    8.908295] systemd-cryptse (1057) used greatest stack depth: 14064 bytes left
Apr 21 18:22:02 ubuntu kernel: [    9.058435] systemd-fstab-g (1059) used greatest stack depth: 13832 bytes left
Apr 21 18:22:02 ubuntu kernel: [    9.159132] systemd-gpt-aut (1061) used greatest stack depth: 13792 bytes left
Apr 21 18:22:02 ubuntu kernel: [    9.489077] systemd-sysv-ge (1065) used greatest stack depth: 13680 bytes left
Apr 21 18:22:02 ubuntu kernel: [   13.818269] gzip (1082) used greatest stack depth: 13368 bytes left
Apr 21 18:22:05 ubuntu kernel: [   36.730813] e1000 0000:00:03.0 enp0s3: renamed from eth0
Apr 21 18:22:11 ubuntu kernel: [   42.802976] IPv6: ADDRCONF(NETDEV_UP): enp0s3: link is not ready
Apr 21 18:22:11 ubuntu kernel: [   42.819784] e1000: enp0s3 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: RX
Apr 21 18:22:11 ubuntu kernel: [   42.870038] IPv6: ADDRCONF(NETDEV_CHANGE): enp0s3: link becomes ready
Apr 21 18:43:51 ubuntu kernel: [ 1342.718163] python3 (1745) used greatest stack depth: 13192 bytes left
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Linux version 4.15.0 (root@ubuntu) (gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1~18.04)) #3 SMP Tue Apr 21 18:05:00 UTC 2020
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Command line: root=/dev/sda rw console=ttyS0
Apr 21 18:46:57 ubuntu kernel: [    0.000000] x86/fpu: x87 FPU will use FXSAVE
Apr 21 18:46:57 ubuntu kernel: [    0.000000] e820: BIOS-provided physical RAM map:
Apr 21 18:46:57 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x0000000000000000-0x000000000009fbff] usable
Apr 21 18:46:57 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x000000000009fc00-0x000000000009ffff] reserved
Apr 21 18:46:57 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x00000000000f0000-0x00000000000fffff] reserved
Apr 21 18:46:57 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x0000000000100000-0x000000001ffdefff] usable
Apr 21 18:46:57 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x000000001ffdf000-0x000000001fffffff] reserved
Apr 21 18:46:57 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x00000000fffc0000-0x00000000ffffffff] reserved
Apr 21 18:46:57 ubuntu kernel: [    0.000000] NX (Execute Disable) protection: active
Apr 21 18:46:57 ubuntu kernel: [    0.000000] random: fast init done
Apr 21 18:46:57 ubuntu kernel: [    0.000000] SMBIOS 2.8 present.
Apr 21 18:46:57 ubuntu kernel: [    0.000000] DMI: QEMU Standard PC (i440FX + PIIX, 1996), BIOS 1.10.2-1ubuntu1 04/01/2014
Apr 21 18:46:57 ubuntu kernel: [    0.000000] e820: update [mem 0x00000000-0x00000fff] usable ==> reserved
Apr 21 18:46:57 ubuntu kernel: [    0.000000] e820: remove [mem 0x000a0000-0x000fffff] usable
Apr 21 18:46:57 ubuntu kernel: [    0.000000] e820: last_pfn = 0x1ffdf max_arch_pfn = 0x400000000
Apr 21 18:46:57 ubuntu kernel: [    0.000000] MTRR default type: write-back
Apr 21 18:46:57 ubuntu kernel: [    0.000000] MTRR fixed ranges enabled:
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   00000-9FFFF write-back
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   A0000-BFFFF uncachable
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   C0000-FFFFF write-protect
Apr 21 18:46:57 ubuntu kernel: [    0.000000] MTRR variable ranges enabled:
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   0 base 0080000000 mask FF80000000 uncachable
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   1 disabled
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   2 disabled
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   3 disabled
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   4 disabled
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   5 disabled
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   6 disabled
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   7 disabled
Apr 21 18:46:57 ubuntu kernel: [    0.000000] x86/PAT: Configuration [0-7]: WB  WC  UC- UC  WB  WP  UC- WT  
Apr 21 18:46:57 ubuntu kernel: [    0.000000] found SMP MP-table at [mem 0x000f6a60-0x000f6a6f] mapped at [        (ptrval)]
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Scanning 1 areas for low memory corruption
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Base memory trampoline at [        (ptrval)] 99000 size 24576
Apr 21 18:46:57 ubuntu kernel: [    0.000000] BRK [0x0e72c000, 0x0e72cfff] PGTABLE
Apr 21 18:46:57 ubuntu kernel: [    0.000000] BRK [0x0e72d000, 0x0e72dfff] PGTABLE
Apr 21 18:46:57 ubuntu kernel: [    0.000000] BRK [0x0e72e000, 0x0e72efff] PGTABLE
Apr 21 18:46:57 ubuntu kernel: [    0.000000] BRK [0x0e72f000, 0x0e72ffff] PGTABLE
Apr 21 18:46:57 ubuntu kernel: [    0.000000] BRK [0x0e730000, 0x0e730fff] PGTABLE
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: Early table checksum verification disabled
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: RSDP 0x00000000000F6A10 000014 (v00 BOCHS )
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: RSDT 0x000000001FFE15BA 000034 (v01 BOCHS  BXPCRSDT 00000001 BXPC 00000001)
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: FACP 0x000000001FFE12EE 000074 (v01 BOCHS  BXPCFACP 00000001 BXPC 00000001)
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: DSDT 0x000000001FFDFDC0 00152E (v01 BOCHS  BXPCDSDT 00000001 BXPC 00000001)
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: FACS 0x000000001FFDFD80 000040
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: APIC 0x000000001FFE13E2 000090 (v01 BOCHS  BXPCAPIC 00000001 BXPC 00000001)
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: HPET 0x000000001FFE1472 000038 (v01 BOCHS  BXPCHPET 00000001 BXPC 00000001)
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: SRAT 0x000000001FFE14AA 000110 (v01 BOCHS  BXPCSRAT 00000001 BXPC 00000001)
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: Local APIC address 0xfee00000
Apr 21 18:46:57 ubuntu kernel: [    0.000000] SRAT: PXM 0 -> APIC 0x00 -> Node 0
Apr 21 18:46:57 ubuntu kernel: [    0.000000] SRAT: PXM 1 -> APIC 0x01 -> Node 1
Apr 21 18:46:57 ubuntu kernel: [    0.000000] SRAT: PXM 0 -> APIC 0x02 -> Node 0
Apr 21 18:46:57 ubuntu kernel: [    0.000000] SRAT: PXM 1 -> APIC 0x03 -> Node 1
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 0 PXM 0 [mem 0x00000000-0x0009ffff]
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 0 PXM 0 [mem 0x00100000-0x0fffffff]
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: SRAT: Node 1 PXM 1 [mem 0x10000000-0x1fffffff]
Apr 21 18:46:57 ubuntu kernel: [    0.000000] NUMA: Node 0 [mem 0x00000000-0x0009ffff] + [mem 0x00100000-0x0fffffff] -> [mem 0x00000000-0x0fffffff]
Apr 21 18:46:57 ubuntu kernel: [    0.000000] NODE_DATA(0) allocated [mem 0x0fffc000-0x0fffffff]
Apr 21 18:46:57 ubuntu kernel: [    0.000000] NODE_DATA(1) allocated [mem 0x1ffdb000-0x1ffdefff]
Apr 21 18:46:57 ubuntu kernel: [    0.000000] tsc: Fast TSC calibration using PIT
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Zone ranges:
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   DMA      [mem 0x0000000000001000-0x0000000000ffffff]
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   DMA32    [mem 0x0000000001000000-0x000000001ffdefff]
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   Normal   empty
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Movable zone start for each node
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Early memory node ranges
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   node   0: [mem 0x0000000000001000-0x000000000009efff]
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   node   0: [mem 0x0000000000100000-0x000000000fffffff]
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   node   1: [mem 0x0000000010000000-0x000000001ffdefff]
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Initmem setup node 0 [mem 0x0000000000001000-0x000000000fffffff]
Apr 21 18:46:57 ubuntu kernel: [    0.000000] On node 0 totalpages: 65438
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   DMA zone: 64 pages used for memmap
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   DMA zone: 21 pages reserved
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   DMA zone: 3998 pages, LIFO batch:0
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   DMA32 zone: 960 pages used for memmap
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   DMA32 zone: 61440 pages, LIFO batch:15
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Initmem setup node 1 [mem 0x0000000010000000-0x000000001ffdefff]
Apr 21 18:46:57 ubuntu kernel: [    0.000000] On node 1 totalpages: 65503
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   DMA32 zone: 1024 pages used for memmap
Apr 21 18:46:57 ubuntu kernel: [    0.000000]   DMA32 zone: 65503 pages, LIFO batch:15
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Reserved but unavailable: 98 pages
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: PM-Timer IO Port: 0x608
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: Local APIC address 0xfee00000
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: LAPIC_NMI (acpi_id[0xff] dfl dfl lint[0x1])
Apr 21 18:46:57 ubuntu kernel: [    0.000000] IOAPIC[0]: apic_id 0, version 32, address 0xfec00000, GSI 0-23
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 0 global_irq 2 dfl dfl)
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 5 global_irq 5 high level)
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 9 global_irq 9 high level)
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 10 global_irq 10 high level)
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 11 global_irq 11 high level)
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: IRQ0 used by override.
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: IRQ5 used by override.
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: IRQ9 used by override.
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: IRQ10 used by override.
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: IRQ11 used by override.
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Using ACPI (MADT) for SMP configuration information
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: HPET id: 0x8086a201 base: 0xfed00000
Apr 21 18:46:57 ubuntu kernel: [    0.000000] smpboot: Allowing 4 CPUs, 0 hotplug CPUs
Apr 21 18:46:57 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x00000000-0x00000fff]
Apr 21 18:46:57 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x0009f000-0x0009ffff]
Apr 21 18:46:57 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x000a0000-0x000effff]
Apr 21 18:46:57 ubuntu kernel: [    0.000000] PM: Registered nosave memory: [mem 0x000f0000-0x000fffff]
Apr 21 18:46:57 ubuntu kernel: [    0.000000] e820: [mem 0x20000000-0xfffbffff] available for PCI devices
Apr 21 18:46:57 ubuntu kernel: [    0.000000] clocksource: refined-jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 1910969940391419 ns
Apr 21 18:46:57 ubuntu kernel: [    0.000000] setup_percpu: NR_CPUS:64 nr_cpumask_bits:64 nr_cpu_ids:4 nr_node_ids:2
Apr 21 18:46:57 ubuntu kernel: [    0.000000] percpu: Embedded 43 pages/cpu @        (ptrval) s138520 r8192 d29416 u1048576
Apr 21 18:46:57 ubuntu kernel: [    0.000000] pcpu-alloc: s138520 r8192 d29416 u1048576 alloc=1*2097152
Apr 21 18:46:57 ubuntu kernel: [    0.000000] pcpu-alloc: [0] 0 2 [1] 1 3 
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Built 2 zonelists, mobility grouping on.  Total pages: 128872
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Policy zone: DMA32
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Kernel command line: root=/dev/sda rw console=ttyS0
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Calgary: detecting Calgary via BIOS EBDA area
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Calgary: Unable to locate Rio Grande table in EBDA - bailing!
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Memory: 488888K/523764K available (12300K kernel code, 1289K rwdata, 3716K rodata, 1224K init, 660K bss, 34876K reserved, 0K cma-reserved)
Apr 21 18:46:57 ubuntu kernel: [    0.000000] SLUB: HWalign=64, Order=0-3, MinObjects=0, CPUs=4, Nodes=2
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Hierarchical RCU implementation.
Apr 21 18:46:57 ubuntu kernel: [    0.000000] 	RCU event tracing is enabled.
Apr 21 18:46:57 ubuntu kernel: [    0.000000] 	RCU restricting CPUs from NR_CPUS=64 to nr_cpu_ids=4.
Apr 21 18:46:57 ubuntu kernel: [    0.000000] RCU: Adjusting geometry for rcu_fanout_leaf=16, nr_cpu_ids=4
Apr 21 18:46:57 ubuntu kernel: [    0.000000] NR_IRQS: 4352, nr_irqs: 456, preallocated irqs: 16
Apr 21 18:46:57 ubuntu kernel: [    0.000000] Console: colour VGA+ 80x25
Apr 21 18:46:57 ubuntu kernel: [    0.000000] console [ttyS0] enabled
Apr 21 18:46:57 ubuntu kernel: [    0.000000] mempolicy: Enabling automatic NUMA balancing. Configure with numa_balancing= or the kernel.numa_balancing sysctl
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: Core revision 20170831
Apr 21 18:46:57 ubuntu kernel: [    0.000000] ACPI: 1 ACPI AML tables successfully acquired and loaded
Apr 21 18:46:57 ubuntu kernel: [    0.000000] clocksource: hpet: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 19112604467 ns
Apr 21 18:46:57 ubuntu kernel: [    0.000000] hpet clockevent registered
Apr 21 18:46:57 ubuntu kernel: [    0.004000] APIC: Switch to symmetric I/O mode setup
Apr 21 18:46:57 ubuntu kernel: [    0.011000] ..TIMER: vector=0x30 apic1=0 pin1=2 apic2=-1 pin2=-1
Apr 21 18:46:57 ubuntu kernel: [    0.021000] tsc: Unable to calibrate against PIT
Apr 21 18:46:57 ubuntu kernel: [    0.021000] tsc: using HPET reference calibration
Apr 21 18:46:57 ubuntu kernel: [    0.021000] tsc: Detected 2699.345 MHz processor
Apr 21 18:46:57 ubuntu kernel: [    0.025643] tsc: Marking TSC unstable due to TSCs unsynchronized
Apr 21 18:46:57 ubuntu kernel: [    0.026276] Calibrating delay loop (skipped), value calculated using timer frequency.. 5398.69 BogoMIPS (lpj=2699345)
Apr 21 18:46:57 ubuntu kernel: [    0.028181] pid_max: default: 32768 minimum: 301
Apr 21 18:46:57 ubuntu kernel: [    0.030591] Security Framework initialized
Apr 21 18:46:57 ubuntu kernel: [    0.031079] SELinux:  Initializing.
Apr 21 18:46:57 ubuntu kernel: [    0.031666] SELinux:  Starting in permissive mode
Apr 21 18:46:57 ubuntu kernel: [    0.034095] Dentry cache hash table entries: 65536 (order: 7, 524288 bytes)
Apr 21 18:46:57 ubuntu kernel: [    0.035724] Inode-cache hash table entries: 32768 (order: 6, 262144 bytes)
Apr 21 18:46:57 ubuntu kernel: [    0.037495] Mount-cache hash table entries: 1024 (order: 1, 8192 bytes)
Apr 21 18:46:57 ubuntu kernel: [    0.038000] Mountpoint-cache hash table entries: 1024 (order: 1, 8192 bytes)
Apr 21 18:46:57 ubuntu kernel: [    0.064313] mce: CPU supports 10 MCE banks
Apr 21 18:46:57 ubuntu kernel: [    0.066824] Last level iTLB entries: 4KB 0, 2MB 0, 4MB 0
Apr 21 18:46:57 ubuntu kernel: [    0.067000] Last level dTLB entries: 4KB 0, 2MB 0, 4MB 0, 1GB 0
Apr 21 18:46:57 ubuntu kernel: [    0.067229] Spectre V2 mitigation: LFENCE not serializing. Switching to generic retpoline
Apr 21 18:46:57 ubuntu kernel: [    0.067827] Spectre V2 mitigation: Mitigation: Full generic retpoline
Apr 21 18:46:57 ubuntu kernel: [    0.068000] Spectre V2 mitigation: Filling RSB on context switch
Apr 21 18:46:57 ubuntu kernel: [    0.079282] Freeing SMP alternatives memory: 40K
Apr 21 18:46:57 ubuntu kernel: [    0.092000] APIC calibration not consistent with PM-Timer: 136ms instead of 100ms
Apr 21 18:46:57 ubuntu kernel: [    0.092000] APIC delta adjusted to PM-Timer: 6250185 (8548105)
Apr 21 18:46:57 ubuntu kernel: [    0.092814] smpboot: CPU0: AMD QEMU Virtual CPU version 2.5+ (family: 0x6, model: 0x6, stepping: 0x3)
Apr 21 18:46:57 ubuntu kernel: [    0.097000] Performance Events: PMU not available due to virtualization, using software events only.
Apr 21 18:46:57 ubuntu kernel: [    0.107069] Hierarchical SRCU implementation.
Apr 21 18:46:57 ubuntu kernel: [    0.112245] Huh? What family is it: 0x6?!
Apr 21 18:46:57 ubuntu kernel: [    0.115000] smp: Bringing up secondary CPUs ...
Apr 21 18:46:57 ubuntu kernel: [    0.121573] x86: Booting SMP configuration:
Apr 21 18:46:57 ubuntu kernel: [    0.123482] .... node  #1, CPUs:      #1
Apr 21 18:46:57 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping max bogoMips estimate 0 = 6187045
Apr 21 18:46:57 ubuntu kernel: [    0.216585] .... node  #0, CPUs:   #2
Apr 21 18:46:57 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping min bogoMips estimate 0 = 2729039
Apr 21 18:46:57 ubuntu kernel: [    0.292525] .... node  #1, CPUs:   #3
Apr 21 18:46:57 ubuntu kernel: [    0.001000] calibrate_delay_direct() dropping max bogoMips estimate 0 = 3531045
Apr 21 18:46:57 ubuntu kernel: [    0.366384] smp: Brought up 2 nodes, 4 CPUs
Apr 21 18:46:57 ubuntu kernel: [    0.367535] smpboot: Max logical packages: 4
Apr 21 18:46:57 ubuntu kernel: [    0.369219] smpboot: Total of 4 processors activated (30315.21 BogoMIPS)
Apr 21 18:46:57 ubuntu kernel: [    0.426191] devtmpfs: initialized
Apr 21 18:46:57 ubuntu kernel: [    0.446211] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 1911260446275000 ns
Apr 21 18:46:57 ubuntu kernel: [    0.448918] futex hash table entries: 1024 (order: 4, 65536 bytes)
Apr 21 18:46:57 ubuntu kernel: [    0.464209] kworker/u10:0 (32) used greatest stack depth: 14280 bytes left
Apr 21 18:46:57 ubuntu kernel: [    0.466913] RTC time: 18:46:24, date: 04/21/20
Apr 21 18:46:57 ubuntu kernel: [    0.483359] NET: Registered protocol family 16
Apr 21 18:46:57 ubuntu kernel: [    0.489415] audit: initializing netlink subsys (disabled)
Apr 21 18:46:57 ubuntu kernel: [    0.496779] audit: type=2000 audit(1587494783.493:1): state=initialized audit_enabled=0 res=1
Apr 21 18:46:57 ubuntu kernel: [    0.523404] cpuidle: using governor menu
Apr 21 18:46:57 ubuntu kernel: [    0.527160] ACPI: bus type PCI registered
Apr 21 18:46:57 ubuntu kernel: [    0.531000] PCI: Using configuration type 1 for base access
Apr 21 18:46:57 ubuntu kernel: [    0.542752] mtrr: your CPUs had inconsistent fixed MTRR settings
Apr 21 18:46:57 ubuntu kernel: [    0.542960] mtrr: your CPUs had inconsistent variable MTRR settings
Apr 21 18:46:57 ubuntu kernel: [    0.543000] mtrr: your CPUs had inconsistent MTRRdefType settings
Apr 21 18:46:57 ubuntu kernel: [    0.543000] mtrr: probably your BIOS does not setup all CPUs.
Apr 21 18:46:57 ubuntu kernel: [    0.543000] mtrr: corrected configuration.
Apr 21 18:46:57 ubuntu kernel: [    0.919074] HugeTLB registered 2.00 MiB page size, pre-allocated 0 pages
Apr 21 18:46:57 ubuntu kernel: [    0.933321] ACPI: Added _OSI(Module Device)
Apr 21 18:46:57 ubuntu kernel: [    0.933682] ACPI: Added _OSI(Processor Device)
Apr 21 18:46:57 ubuntu kernel: [    0.934000] ACPI: Added _OSI(3.0 _SCP Extensions)
Apr 21 18:46:57 ubuntu kernel: [    0.936138] ACPI: Added _OSI(Processor Aggregator Device)
Apr 21 18:46:57 ubuntu kernel: [    0.975635] ACPI: Interpreter enabled
Apr 21 18:46:57 ubuntu kernel: [    0.978547] ACPI: (supports S0 S3 S4 S5)
Apr 21 18:46:57 ubuntu kernel: [    0.979245] ACPI: Using IOAPIC for interrupt routing
Apr 21 18:46:57 ubuntu kernel: [    0.981208] PCI: Using host bridge windows from ACPI; if necessary, use "pci=nocrs" and report a bug
Apr 21 18:46:57 ubuntu kernel: [    0.984000] ACPI: Enabled 2 GPEs in block 00 to 0F
Apr 21 18:46:57 ubuntu kernel: [    1.186717] ACPI: PCI Root Bridge [PCI0] (domain 0000 [bus 00-ff])
Apr 21 18:46:57 ubuntu kernel: [    1.189554] acpi PNP0A03:00: _OSC: OS supports [ASPM ClockPM Segments MSI]
Apr 21 18:46:57 ubuntu kernel: [    1.191211] acpi PNP0A03:00: _OSC failed (AE_NOT_FOUND); disabling ASPM
Apr 21 18:46:57 ubuntu kernel: [    1.194370] acpi PNP0A03:00: fail to add MMCONFIG information, can't access extended PCI configuration space under this bridge.
Apr 21 18:46:57 ubuntu kernel: [    1.201851] PCI host bridge to bus 0000:00
Apr 21 18:46:57 ubuntu kernel: [    1.203405] pci_bus 0000:00: root bus resource [io  0x0000-0x0cf7 window]
Apr 21 18:46:57 ubuntu kernel: [    1.204000] pci_bus 0000:00: root bus resource [io  0x0d00-0xffff window]
Apr 21 18:46:57 ubuntu kernel: [    1.204000] pci_bus 0000:00: root bus resource [mem 0x000a0000-0x000bffff window]
Apr 21 18:46:57 ubuntu kernel: [    1.206119] pci_bus 0000:00: root bus resource [mem 0x20000000-0xfebfffff window]
Apr 21 18:46:57 ubuntu kernel: [    1.208260] pci_bus 0000:00: root bus resource [mem 0x100000000-0x17fffffff window]
Apr 21 18:46:57 ubuntu kernel: [    1.209299] pci_bus 0000:00: root bus resource [bus 00-ff]
Apr 21 18:46:57 ubuntu kernel: [    1.213515] pci 0000:00:00.0: [8086:1237] type 00 class 0x060000
Apr 21 18:46:57 ubuntu kernel: [    1.224239] pci 0000:00:01.0: [8086:7000] type 00 class 0x060100
Apr 21 18:46:57 ubuntu kernel: [    1.227285] pci 0000:00:01.1: [8086:7010] type 00 class 0x010180
Apr 21 18:46:57 ubuntu kernel: [    1.230900] pci 0000:00:01.1: reg 0x20: [io  0xc040-0xc04f]
Apr 21 18:46:57 ubuntu kernel: [    1.233512] pci 0000:00:01.1: legacy IDE quirk: reg 0x10: [io  0x01f0-0x01f7]
Apr 21 18:46:57 ubuntu kernel: [    1.234570] pci 0000:00:01.1: legacy IDE quirk: reg 0x14: [io  0x03f6]
Apr 21 18:46:57 ubuntu kernel: [    1.236374] pci 0000:00:01.1: legacy IDE quirk: reg 0x18: [io  0x0170-0x0177]
Apr 21 18:46:57 ubuntu kernel: [    1.238093] pci 0000:00:01.1: legacy IDE quirk: reg 0x1c: [io  0x0376]
Apr 21 18:46:57 ubuntu kernel: [    1.243170] pci 0000:00:01.3: [8086:7113] type 00 class 0x068000
Apr 21 18:46:57 ubuntu kernel: [    1.245211] pci 0000:00:01.3: quirk: [io  0x0600-0x063f] claimed by PIIX4 ACPI
Apr 21 18:46:57 ubuntu kernel: [    1.247168] pci 0000:00:01.3: quirk: [io  0x0700-0x070f] claimed by PIIX4 SMB
Apr 21 18:46:57 ubuntu kernel: [    1.249000] pci 0000:00:02.0: [1234:1111] type 00 class 0x030000
Apr 21 18:46:57 ubuntu kernel: [    1.249000] pci 0000:00:02.0: reg 0x10: [mem 0xfd000000-0xfdffffff pref]
Apr 21 18:46:57 ubuntu kernel: [    1.250000] pci 0000:00:02.0: reg 0x18: [mem 0xfebb0000-0xfebb0fff]
Apr 21 18:46:57 ubuntu kernel: [    1.252000] pci 0000:00:02.0: reg 0x30: [mem 0xfeba0000-0xfebaffff pref]
Apr 21 18:46:57 ubuntu kernel: [    1.258749] pci 0000:00:03.0: [8086:100e] type 00 class 0x020000
Apr 21 18:46:57 ubuntu kernel: [    1.259000] pci 0000:00:03.0: reg 0x10: [mem 0xfeb80000-0xfeb9ffff]
Apr 21 18:46:57 ubuntu kernel: [    1.259000] pci 0000:00:03.0: reg 0x14: [io  0xc000-0xc03f]
Apr 21 18:46:57 ubuntu kernel: [    1.259548] pci 0000:00:03.0: reg 0x30: [mem 0xfeb00000-0xfeb7ffff pref]
Apr 21 18:46:57 ubuntu kernel: [    1.288392] ACPI: PCI Interrupt Link [LNKA] (IRQs 5 *10 11)
Apr 21 18:46:57 ubuntu kernel: [    1.295263] ACPI: PCI Interrupt Link [LNKB] (IRQs 5 *10 11)
Apr 21 18:46:57 ubuntu kernel: [    1.304194] ACPI: PCI Interrupt Link [LNKC] (IRQs 5 10 *11)
Apr 21 18:46:57 ubuntu kernel: [    1.312430] ACPI: PCI Interrupt Link [LNKD] (IRQs 5 10 *11)
Apr 21 18:46:57 ubuntu kernel: [    1.314613] ACPI: PCI Interrupt Link [LNKS] (IRQs *9)
Apr 21 18:46:57 ubuntu kernel: [    1.368000] pci 0000:00:02.0: vgaarb: setting as boot VGA device
Apr 21 18:46:57 ubuntu kernel: [    1.368000] pci 0000:00:02.0: vgaarb: VGA device added: decodes=io+mem,owns=io+mem,locks=none
Apr 21 18:46:57 ubuntu kernel: [    1.371116] pci 0000:00:02.0: vgaarb: bridge control possible
Apr 21 18:46:57 ubuntu kernel: [    1.371896] vgaarb: loaded
Apr 21 18:46:57 ubuntu kernel: [    1.377229] SCSI subsystem initialized
Apr 21 18:46:57 ubuntu kernel: [    1.378000] libata version 3.00 loaded.
Apr 21 18:46:57 ubuntu kernel: [    1.378000] ACPI: bus type USB registered
Apr 21 18:46:57 ubuntu kernel: [    1.380774] usbcore: registered new interface driver usbfs
Apr 21 18:46:57 ubuntu kernel: [    1.383109] usbcore: registered new interface driver hub
Apr 21 18:46:57 ubuntu kernel: [    1.388732] usbcore: registered new device driver usb
Apr 21 18:46:57 ubuntu kernel: [    1.397649] pps_core: LinuxPPS API ver. 1 registered
Apr 21 18:46:57 ubuntu kernel: [    1.398910] pps_core: Software ver. 5.3.6 - Copyright 2005-2007 Rodolfo Giometti <giometti@linux.it>
Apr 21 18:46:57 ubuntu kernel: [    1.402192] PTP clock support registered
Apr 21 18:46:57 ubuntu kernel: [    1.409792] EDAC MC: Ver: 3.0.0
Apr 21 18:46:57 ubuntu kernel: [    1.420518] Advanced Linux Sound Architecture Driver Initialized.
Apr 21 18:46:57 ubuntu kernel: [    1.421856] PCI: Using ACPI for IRQ routing
Apr 21 18:46:57 ubuntu kernel: [    1.421930] PCI: pci_cache_line_size set to 64 bytes
Apr 21 18:46:57 ubuntu kernel: [    1.422000] e820: reserve RAM buffer [mem 0x0009fc00-0x0009ffff]
Apr 21 18:46:57 ubuntu kernel: [    1.422000] e820: reserve RAM buffer [mem 0x1ffdf000-0x1fffffff]
Apr 21 18:46:57 ubuntu kernel: [    1.426000] NetLabel: Initializing
Apr 21 18:46:57 ubuntu kernel: [    1.426000] NetLabel:  domain hash size = 128
Apr 21 18:46:57 ubuntu kernel: [    1.426000] NetLabel:  protocols = UNLABELED CIPSOv4 CALIPSO
Apr 21 18:46:57 ubuntu kernel: [    1.426000] NetLabel:  unlabeled traffic allowed by default
Apr 21 18:46:57 ubuntu kernel: [    1.437419] HPET: 3 timers in total, 0 timers will be used for per-cpu timer
Apr 21 18:46:57 ubuntu kernel: [    1.442590] hpet0: at MMIO 0xfed00000, IRQs 2, 8, 0
Apr 21 18:46:57 ubuntu kernel: [    1.444139] hpet0: 3 comparators, 64-bit 100.000000 MHz counter
Apr 21 18:46:57 ubuntu kernel: [    1.460000] clocksource: Switched to clocksource hpet
Apr 21 18:46:57 ubuntu kernel: [    1.760749] VFS: Disk quotas dquot_6.6.0
Apr 21 18:46:57 ubuntu kernel: [    1.761696] VFS: Dquot-cache hash table entries: 512 (order 0, 4096 bytes)
Apr 21 18:46:57 ubuntu kernel: [    1.769053] pnp: PnP ACPI init
Apr 21 18:46:57 ubuntu kernel: [    1.773907] pnp 00:00: Plug and Play ACPI device, IDs PNP0b00 (active)
Apr 21 18:46:57 ubuntu kernel: [    1.784479] pnp 00:01: Plug and Play ACPI device, IDs PNP0303 (active)
Apr 21 18:46:57 ubuntu kernel: [    1.786163] pnp 00:02: Plug and Play ACPI device, IDs PNP0f13 (active)
Apr 21 18:46:57 ubuntu kernel: [    1.787065] pnp 00:03: [dma 2]
Apr 21 18:46:57 ubuntu kernel: [    1.790575] pnp 00:03: Plug and Play ACPI device, IDs PNP0700 (active)
Apr 21 18:46:57 ubuntu kernel: [    1.792864] pnp 00:04: Plug and Play ACPI device, IDs PNP0400 (active)
Apr 21 18:46:57 ubuntu kernel: [    1.793256] pnp 00:05: Plug and Play ACPI device, IDs PNP0501 (active)
Apr 21 18:46:57 ubuntu kernel: [    1.801081] pnp: PnP ACPI: found 6 devices
Apr 21 18:46:57 ubuntu kernel: [    1.861483] hrtimer: interrupt took 3481740 ns
Apr 21 18:46:57 ubuntu kernel: [    2.032810] clocksource: acpi_pm: mask: 0xffffff max_cycles: 0xffffff, max_idle_ns: 2085701024 ns
Apr 21 18:46:57 ubuntu kernel: [    2.037909] pci_bus 0000:00: resource 4 [io  0x0000-0x0cf7 window]
Apr 21 18:46:57 ubuntu kernel: [    2.037937] pci_bus 0000:00: resource 5 [io  0x0d00-0xffff window]
Apr 21 18:46:57 ubuntu kernel: [    2.037949] pci_bus 0000:00: resource 6 [mem 0x000a0000-0x000bffff window]
Apr 21 18:46:57 ubuntu kernel: [    2.037958] pci_bus 0000:00: resource 7 [mem 0x20000000-0xfebfffff window]
Apr 21 18:46:57 ubuntu kernel: [    2.037966] pci_bus 0000:00: resource 8 [mem 0x100000000-0x17fffffff window]
Apr 21 18:46:57 ubuntu kernel: [    2.042043] NET: Registered protocol family 2
Apr 21 18:46:57 ubuntu kernel: [    2.061393] TCP established hash table entries: 4096 (order: 3, 32768 bytes)
Apr 21 18:46:57 ubuntu kernel: [    2.061412] TCP bind hash table entries: 4096 (order: 4, 65536 bytes)
Apr 21 18:46:57 ubuntu kernel: [    2.065922] TCP: Hash tables configured (established 4096 bind 4096)
Apr 21 18:46:57 ubuntu kernel: [    2.076195] UDP hash table entries: 256 (order: 1, 8192 bytes)
Apr 21 18:46:57 ubuntu kernel: [    2.077392] UDP-Lite hash table entries: 256 (order: 1, 8192 bytes)
Apr 21 18:46:57 ubuntu kernel: [    2.086425] NET: Registered protocol family 1
Apr 21 18:46:57 ubuntu kernel: [    2.103354] RPC: Registered named UNIX socket transport module.
Apr 21 18:46:57 ubuntu kernel: [    2.103564] RPC: Registered udp transport module.
Apr 21 18:46:57 ubuntu kernel: [    2.103564] RPC: Registered tcp transport module.
Apr 21 18:46:57 ubuntu kernel: [    2.103564] RPC: Registered tcp NFSv4.1 backchannel transport module.
Apr 21 18:46:57 ubuntu kernel: [    2.126613] pci 0000:00:00.0: Limiting direct PCI/PCI transfers
Apr 21 18:46:57 ubuntu kernel: [    2.127239] pci 0000:00:01.0: PIIX3: Enabling Passive Release
Apr 21 18:46:57 ubuntu kernel: [    2.134815] pci 0000:00:01.0: Activating ISA DMA hang workarounds
Apr 21 18:46:57 ubuntu kernel: [    2.135199] pci 0000:00:02.0: Video device with shadowed ROM at [mem 0x000c0000-0x000dffff]
Apr 21 18:46:57 ubuntu kernel: [    2.137575] PCI: CLS 0 bytes, default 64
Apr 21 18:46:57 ubuntu kernel: [    2.156088] clocksource: tsc: mask: 0xffffffffffffffff max_cycles: 0x26e8d3b838f, max_idle_ns: 440795203562 ns
Apr 21 18:46:57 ubuntu kernel: [    2.207219] Scanning for low memory corruption every 60 seconds
Apr 21 18:46:57 ubuntu kernel: [    2.272493] Initialise system trusted keyrings
Apr 21 18:46:57 ubuntu kernel: [    2.283671] workingset: timestamp_bits=56 max_order=17 bucket_order=0
Apr 21 18:46:57 ubuntu kernel: [    2.375022] NFS: Registering the id_resolver key type
Apr 21 18:46:57 ubuntu kernel: [    2.375022] Key type id_resolver registered
Apr 21 18:46:57 ubuntu kernel: [    2.375022] Key type id_legacy registered
Apr 21 18:46:57 ubuntu kernel: [    2.375022] SELinux:  Registering netfilter hooks
Apr 21 18:46:57 ubuntu kernel: [    2.473291] Key type asymmetric registered
Apr 21 18:46:57 ubuntu kernel: [    2.473549] Asymmetric key parser 'x509' registered
Apr 21 18:46:57 ubuntu kernel: [    2.476042] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 250)
Apr 21 18:46:57 ubuntu kernel: [    2.479794] io scheduler noop registered
Apr 21 18:46:57 ubuntu kernel: [    2.480614] io scheduler deadline registered
Apr 21 18:46:57 ubuntu kernel: [    2.493850] io scheduler cfq registered (default)
Apr 21 18:46:57 ubuntu kernel: [    2.495699] io scheduler mq-deadline registered
Apr 21 18:46:57 ubuntu kernel: [    2.496201] io scheduler kyber registered
Apr 21 18:46:57 ubuntu kernel: [    2.540180] input: Power Button as /devices/LNXSYSTM:00/LNXPWRBN:00/input/input0
Apr 21 18:46:57 ubuntu kernel: [    2.546592] ACPI: Power Button [PWRF]
Apr 21 18:46:57 ubuntu kernel: [    2.621894] Serial: 8250/16550 driver, 4 ports, IRQ sharing enabled
Apr 21 18:46:57 ubuntu kernel: [    2.669596] 00:05: ttyS0 at I/O 0x3f8 (irq = 4, base_baud = 115200) is a 16550A
Apr 21 18:46:57 ubuntu kernel: [    2.704734] Non-volatile memory driver v1.3
Apr 21 18:46:57 ubuntu kernel: [    2.713219] Linux agpgart interface v0.103
Apr 21 18:46:57 ubuntu kernel: [    2.827718] loop: module loaded
Apr 21 18:46:57 ubuntu kernel: [    2.845887] ata_piix 0000:00:01.1: version 2.13
Apr 21 18:46:57 ubuntu kernel: [    2.884682] scsi host0: ata_piix
Apr 21 18:46:57 ubuntu kernel: [    2.890775] scsi host1: ata_piix
Apr 21 18:46:57 ubuntu kernel: [    2.891499] ata1: PATA max MWDMA2 cmd 0x1f0 ctl 0x3f6 bmdma 0xc040 irq 14
Apr 21 18:46:57 ubuntu kernel: [    2.891695] ata2: PATA max MWDMA2 cmd 0x170 ctl 0x376 bmdma 0xc048 irq 15
Apr 21 18:46:57 ubuntu kernel: [    2.891695] e100: Intel(R) PRO/100 Network Driver, 3.5.24-k2-NAPI
Apr 21 18:46:57 ubuntu kernel: [    2.891695] e100: Copyright(c) 1999-2006 Intel Corporation
Apr 21 18:46:57 ubuntu kernel: [    2.891695] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
Apr 21 18:46:57 ubuntu kernel: [    2.891695] e1000: Copyright (c) 1999-2006 Intel Corporation.
Apr 21 18:46:57 ubuntu kernel: [    3.156108] ata1.01: NODEV after polling detection
Apr 21 18:46:57 ubuntu kernel: [    3.172783] ata2.01: NODEV after polling detection
Apr 21 18:46:57 ubuntu kernel: [    3.185651] ata1.00: ATA-7: QEMU HARDDISK, 2.5+, max UDMA/100
Apr 21 18:46:57 ubuntu kernel: [    3.186222] ata1.00: 16777216 sectors, multi 16: LBA48 
Apr 21 18:46:57 ubuntu kernel: [    3.203773] ata2.00: ATAPI: QEMU DVD-ROM, 2.5+, max UDMA/100
Apr 21 18:46:57 ubuntu kernel: [    3.265590] ata1.00: configured for MWDMA2
Apr 21 18:46:57 ubuntu kernel: [    3.270373] ata2.00: configured for MWDMA2
Apr 21 18:46:57 ubuntu kernel: [    3.309688] scsi 0:0:0:0: Direct-Access     ATA      QEMU HARDDISK    2.5+ PQ: 0 ANSI: 5
Apr 21 18:46:57 ubuntu kernel: [    3.346913] sd 0:0:0:0: Attached scsi generic sg0 type 0
Apr 21 18:46:57 ubuntu kernel: [    3.381025] sd 0:0:0:0: [sda] 16777216 512-byte logical blocks: (8.59 GB/8.00 GiB)
Apr 21 18:46:57 ubuntu kernel: [    3.389080] scsi 1:0:0:0: CD-ROM            QEMU     QEMU DVD-ROM     2.5+ PQ: 0 ANSI: 5
Apr 21 18:46:57 ubuntu kernel: [    3.390186] sd 0:0:0:0: [sda] Write Protect is off
Apr 21 18:46:57 ubuntu kernel: [    3.392559] sd 0:0:0:0: [sda] Mode Sense: 00 3a 00 00
Apr 21 18:46:57 ubuntu kernel: [    3.417790] sd 0:0:0:0: [sda] Write cache: enabled, read cache: enabled, doesn't support DPO or FUA
Apr 21 18:46:57 ubuntu kernel: [    3.560704] sr 1:0:0:0: [sr0] scsi3-mmc drive: 4x/4x cd/rw xa/form2 tray
Apr 21 18:46:57 ubuntu kernel: [    3.562295] cdrom: Uniform CD-ROM driver Revision: 3.20
Apr 21 18:46:57 ubuntu kernel: [    3.565021] sd 0:0:0:0: [sda] Attached SCSI disk
Apr 21 18:46:57 ubuntu kernel: [    3.573161] sr 1:0:0:0: Attached scsi CD-ROM sr0
Apr 21 18:46:57 ubuntu kernel: [    3.586856] sr 1:0:0:0: Attached scsi generic sg1 type 5
Apr 21 18:46:57 ubuntu kernel: [    3.596687] ACPI: PCI Interrupt Link [LNKC] enabled at IRQ 11
Apr 21 18:46:57 ubuntu kernel: [    3.959310] e1000 0000:00:03.0 eth0: (PCI:33MHz:32-bit) 52:54:00:12:34:56
Apr 21 18:46:57 ubuntu kernel: [    3.960663] e1000 0000:00:03.0 eth0: Intel(R) PRO/1000 Network Connection
Apr 21 18:46:57 ubuntu kernel: [    3.964794] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
Apr 21 18:46:57 ubuntu kernel: [    3.965061] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
Apr 21 18:46:57 ubuntu kernel: [    3.966437] sky2: driver version 1.30
Apr 21 18:46:57 ubuntu kernel: [    3.985967] ehci_hcd: USB 2.0 'Enhanced' Host Controller (EHCI) Driver
Apr 21 18:46:57 ubuntu kernel: [    3.992377] ehci-pci: EHCI PCI platform driver
Apr 21 18:46:57 ubuntu kernel: [    3.992875] ohci_hcd: USB 1.1 'Open' Host Controller (OHCI) Driver
Apr 21 18:46:57 ubuntu kernel: [    3.993131] ohci-pci: OHCI PCI platform driver
Apr 21 18:46:57 ubuntu kernel: [    3.994714] uhci_hcd: USB Universal Host Controller Interface driver
Apr 21 18:46:57 ubuntu kernel: [    4.011716] usbcore: registered new interface driver usblp
Apr 21 18:46:57 ubuntu kernel: [    4.017255] usbcore: registered new interface driver usb-storage
Apr 21 18:46:57 ubuntu kernel: [    4.034077] i8042: PNP: PS/2 Controller [PNP0303:KBD,PNP0f13:MOU] at 0x60,0x64 irq 1,12
Apr 21 18:46:57 ubuntu kernel: [    4.070948] serio: i8042 KBD port at 0x60,0x64 irq 1
Apr 21 18:46:57 ubuntu kernel: [    4.073100] serio: i8042 AUX port at 0x60,0x64 irq 12
Apr 21 18:46:57 ubuntu kernel: [    4.078587] rtc_cmos 00:00: RTC can wake from S4
Apr 21 18:46:57 ubuntu kernel: [    4.104124] rtc_cmos 00:00: rtc core: registered rtc_cmos as rtc0
Apr 21 18:46:57 ubuntu kernel: [    4.109970] rtc_cmos 00:00: alarms up to one day, y3k, 114 bytes nvram, hpet irqs
Apr 21 18:46:57 ubuntu kernel: [    4.115055] input: AT Translated Set 2 keyboard as /devices/platform/i8042/serio0/input/input1
Apr 21 18:46:57 ubuntu kernel: [    4.159075] device-mapper: ioctl: 4.37.0-ioctl (2017-09-20) initialised: dm-devel@redhat.com
Apr 21 18:46:57 ubuntu kernel: [    4.162070] hidraw: raw HID events driver (C) Jiri Kosina
Apr 21 18:46:57 ubuntu kernel: [    4.215500] usbcore: registered new interface driver usbhid
Apr 21 18:46:57 ubuntu kernel: [    4.215697] usbhid: USB HID core driver
Apr 21 18:46:57 ubuntu kernel: [    4.238426] Netfilter messages via NETLINK v0.30.
Apr 21 18:46:57 ubuntu kernel: [    4.249444] nf_conntrack version 0.5.0 (4096 buckets, 16384 max)
Apr 21 18:46:57 ubuntu kernel: [    4.250053] ctnetlink v0.93: registering with nfnetlink.
Apr 21 18:46:57 ubuntu kernel: [    4.268449] ip_tables: (C) 2000-2006 Netfilter Core Team
Apr 21 18:46:57 ubuntu kernel: [    4.310064] Initializing XFRM netlink socket
Apr 21 18:46:57 ubuntu kernel: [    4.322786] NET: Registered protocol family 10
Apr 21 18:46:57 ubuntu kernel: [    4.364474] Segment Routing with IPv6
Apr 21 18:46:57 ubuntu kernel: [    4.365095] ip6_tables: (C) 2000-2006 Netfilter Core Team
Apr 21 18:46:57 ubuntu kernel: [    4.365095] sit: IPv6, IPv4 and MPLS over IPv4 tunneling driver
Apr 21 18:46:57 ubuntu kernel: [    4.378054] NET: Registered protocol family 17
Apr 21 18:46:57 ubuntu kernel: [    4.380016] Key type dns_resolver registered
Apr 21 18:46:57 ubuntu kernel: [    4.421711] registered taskstats version 1
Apr 21 18:46:57 ubuntu kernel: [    4.422468] Loading compiled-in X.509 certificates
Apr 21 18:46:57 ubuntu kernel: [    4.433695]   Magic number: 0:711:797
Apr 21 18:46:57 ubuntu kernel: [    4.435744] console [netcon0] enabled
Apr 21 18:46:57 ubuntu kernel: [    4.436017] netconsole: network logging started
Apr 21 18:46:57 ubuntu kernel: [    4.449682] cfg80211: Loading compiled-in X.509 certificates for regulatory database
Apr 21 18:46:57 ubuntu kernel: [    4.473546] cfg80211: Loaded X.509 cert 'sforshee: 00b28ddf47aef9cea7'
Apr 21 18:46:57 ubuntu kernel: [    4.480582] ALSA device list:
Apr 21 18:46:57 ubuntu kernel: [    4.484366]   No soundcards found.
Apr 21 18:46:57 ubuntu kernel: [    4.487509] platform regulatory.0: Direct firmware load for regulatory.db failed with error -2
Apr 21 18:46:57 ubuntu kernel: [    4.490734] cfg80211: failed to load regulatory.db
Apr 21 18:46:57 ubuntu kernel: [    4.944647] input: ImExPS/2 Generic Explorer Mouse as /devices/platform/i8042/serio1/input/input3
Apr 21 18:46:57 ubuntu kernel: [    4.949540] md: Waiting for all devices to be available before autodetect
Apr 21 18:46:57 ubuntu kernel: [    4.949751] md: If you don't use raid, use raid=noautodetect
Apr 21 18:46:57 ubuntu kernel: [    4.957494] md: Autodetecting RAID arrays.
Apr 21 18:46:57 ubuntu kernel: [    4.957494] md: autorun ...
Apr 21 18:46:57 ubuntu kernel: [    4.957494] md: ... autorun DONE.
Apr 21 18:46:57 ubuntu kernel: [    4.989957] EXT4-fs (sda): couldn't mount as ext3 due to feature incompatibilities
Apr 21 18:46:57 ubuntu kernel: [    4.998350] EXT4-fs (sda): couldn't mount as ext2 due to feature incompatibilities
Apr 21 18:46:57 ubuntu kernel: [    5.093634] EXT4-fs (sda): recovery complete
Apr 21 18:46:57 ubuntu kernel: [    5.098815] EXT4-fs (sda): mounted filesystem with ordered data mode. Opts: (null)
Apr 21 18:46:57 ubuntu kernel: [    5.101333] VFS: Mounted root (ext4 filesystem) on device 8:0.
Apr 21 18:46:57 ubuntu kernel: [    5.125052] devtmpfs: mounted
Apr 21 18:46:57 ubuntu kernel: [    5.211695] Freeing unused kernel memory: 1224K
Apr 21 18:46:57 ubuntu kernel: [    5.212139] Write protecting the kernel read-only data: 18432k
Apr 21 18:46:57 ubuntu kernel: [    5.215111] Freeing unused kernel memory: 2004K
Apr 21 18:46:57 ubuntu kernel: [    5.223780] Freeing unused kernel memory: 380K
Apr 21 18:46:57 ubuntu kernel: [    5.994037] random: crng init done
Apr 21 18:46:57 ubuntu kernel: [    7.584075] systemd-hiberna (1062) used greatest stack depth: 14208 bytes left
Apr 21 18:46:57 ubuntu kernel: [    8.056846] systemd-cryptse (1057) used greatest stack depth: 13808 bytes left
Apr 21 18:46:57 ubuntu kernel: [   20.688676] cached_setup_ke (1078) used greatest stack depth: 13768 bytes left
Apr 21 18:46:57 ubuntu kernel: [   22.079114] uname (1613) used greatest stack depth: 13760 bytes left
Apr 21 18:46:58 ubuntu kernel: [   35.513482] e1000 0000:00:03.0 enp0s3: renamed from eth0
Apr 21 18:47:04 ubuntu kernel: [   41.187078] IPv6: ADDRCONF(NETDEV_UP): enp0s3: link is not ready
Apr 21 18:47:04 ubuntu kernel: [   41.198683] e1000: enp0s3 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: RX
Apr 21 18:47:04 ubuntu kernel: [   41.214888] IPv6: ADDRCONF(NETDEV_CHANGE): enp0s3: link becomes ready
Apr 21 18:47:08 ubuntu kernel: [   45.245873] ls (1674) used greatest stack depth: 13672 bytes left
Apr 21 18:47:08 ubuntu kernel: [   45.412129] systemd-udevd (1313) used greatest stack depth: 13544 bytes left
Apr 21 18:49:07 ubuntu kernel: [  164.979471] python3 (1718) used greatest stack depth: 13192 bytes left
