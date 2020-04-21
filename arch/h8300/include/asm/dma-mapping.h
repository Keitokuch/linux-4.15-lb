/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _H8300_DMA_MAPPING_H
#define _H8300_DMA_MAPPING_H

extern const struct dma_map_ops h8300_dma_map_ops;

static inline const struct dma_map_ops *get_arch_dma_ops(struct bus_type *bus)
{
	return &h8300_dma_map_ops;
}

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
Apr 20 18:22:44 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x00000000fffc0000-0x00000000ffffffff] reserved
Apr 20 18:22:44 ubuntu kernel: [    0.000000] NX (Execute Disable) protection: active
Apr 20 18:22:44 ubuntu kernel: [    0.000000] SMBIOS 2.8 present.
Apr 20 18:22:44 ubuntu kernel: [    0.000000] DMI: QEMU Standard PC (i440FX + PIIX, 1996), BIOS 1.10.2-1ubuntu1 04/01/2014
Apr 20 18:22:44 ubuntu kernel: [    0.000000] e820: update [mem 0x00000000-0x00000fff] usable ==> reserved
Apr 20 18:22:44 ubuntu kernel: [    0.000000] e820: remove [mem 0x000a0000-0x000fffff] usable
Apr 20 18:22:44 ubuntu kernel: [    0.000000] e820: last_pfn = 0x1ffdf max_arch_pfn = 0x400000000
Apr 20 18:22:44 ubuntu kernel: [    0.000000] MTRR default type: write-back
Apr 20 18:22:44 ubuntu kernel: [    0.000000] MTRR fixed ranges enabled:
Apr 20 18:22:44 ubuntu kernel: [    0.000000]   00000-9FFFF write-back
Apr 20 18:22:44 ubuntu kernel: [    0.000000]   A0000-BFFFF uncachable
Apr 20 18:22:44 ubuntu kernel: [    0.000000]   C0000-FFFFF write-protect
Apr 20 18:22:44 ubuntu kernel: [    0.000000] MTRR variable ranges enabled:
Apr 20 18:22:44 ubuntu kernel: [    0.000000]   0 base 0080000000 mask FF80000000 uncachable
Apr 20 18:22:44 ubuntu kernel: [    0.000000]   1 disabled
Apr 20 18:22:44 ubuntu kernel: [    0.000000]   2 disabled
Apr 20 18:22:44 ubuntu kernel: [    0.000000]   3 disabled
Apr 20 18:22:44 ubuntu kernel: [    0.000000]   4 disabled
Apr 20 18:22:44 ubuntu kernel: [    0.000000]   5 disabled
Apr 20 18:22:44 ubuntu kernel: [    0.000000]   6 disabled
Apr 20 18:22:44 ubuntu kernel: [    0.000000]   7 disabled
Apr 20 18:22:44 ubuntu kernel: [    0.000000] x86/PAT: Configuration [0-7]: WB  WC  UC- UC  WB  WP  UC- WT  
Apr 20 18:22:44 ubuntu kernel: [    0.000000] found SMP MP-table at [mem 0x000f6a60-0x000f6a6f] mapped at [        (ptrval)]
Apr 20 18:22:44 ubuntu kernel: [    0.000000] Scanning 1 areas for low memory corruption
Apr 20 18:22:44 ubuntu kernel: [    0.000000] Base memory trampoline at [        (ptrval)] 99000 size 24576
Apr 20 18:22:44 ubuntu kernel: [    0.000000] BRK [0x15b3f000, 0x15b3ffff] PGTABLE
Apr 20 18:22:44 ubuntu kernel: [    0.000000] BRK [0x15b40000, 0x15b40fff] PGTABLE
Apr 20 18:22:44 ubuntu kernel: [    0.000000] BRK [0x15b41000, 0x15b41fff] PGTABLE
Apr 20 18:22:44 ubuntu kernel: [    0.000000] BRK [0x15b42000, 0x15b42fff] PGTABLE
Apr 20 18:22:44 ubuntu kernel: [    0.000000] BRK [0x15b43000, 0x15b43fff] PGTABLE
Apr 20 18:22:44 ubuntu kernel: [    0.000000t is the
 messaging backend for Evolution.
 .
 Evolution is the integrated mail, calendar, task and address book
 distributed suite from Novell, Inc.
 .
 This package contains introspection data for the libcamel
 library. It can be used by packages using the GIRepository format to
 generate dynamic bindings.

Package: gir1.2-ebook-1.2
Description-md5: eee3f328364fb5b2eb00182c350108b8
Description-en: GObject introspection for the EBook library
 The data server, called "Evolution Data Server" is responsible for managing
 calendar and addressbook information.
 .
 This package contains introspection data for the libeebook
 library. It can be used by packages using the GIRepository format to
 generate dynamic bindings.

Package: gir1.2-ebookcontacts-1.2
Description-md5: 5c91e1ab067d8ddd63b0ef031e231a4f
Description-en: GObject introspection for the EBook Contacts library
 The data server, called "Evolution Data Server" is responsible for managing
 calendar and addressbook information.
 .
 This package contains introspection data for the libeebook
 library. It can be used by packages using the GIRepository format to
 generate dynamic bindings.

Package: gir1.2-edataserver-1.2
Description-md5: 2ec1ed52300f0467a0d5460ca0faa785
Description-en: GObject introspection for the EDataServer library
 The data server, called "Evolution Data Server" is responsible for managing
 calendar and addressbook information.
 .
 This package contains introspection data for the libedataserver
 library. It can be used by packages using the GIRepository format to
 generate dynamic bindings.

Package: gir1.2-edataserverui-1.2
Description-md5: 3a390941ecfd433760515102f954f58d
Description-en: GObject introspection for the EDataServerUI library
 The data server, called "Evolution Data Server" is responsible for managing
 calendar and addressbook information.
 .
 This package contains introspection data for the libedataserverui
 library. It can be used by packages using the GIRepository format to
 generate dynamic bindings.

Package: gir1.2-evince-3.0
Description-md5: 387a105dab5207d02ff3bb9de882c382
Description-en: GObject introspection data for the evince libraries
 This package contains introspection data for the libevview and
 libevdocument libraries.
 .
 Evince is a simple multi-page document viewer.  It can display and print
 PostScript (PS), Encapsulated PostScript (EPS), DjVu, DVI, Portable
 Document Format (PDF) and XML Paper Specification (XPS) files.
 When supported by the document, it also allows searching for text,
 copying text to the clipboard, hypertext navigation, and
 table-of-contents bookmarks.
 .
 It can be used by packages using the GIRepository format to generate
 dynamic bindings.

Package: gir1.2-gdm-1.0
Description-md5: e2cbd477c1c5edc4af858440e536fdb0
Description-en: GObject introspection data for the GNOME Display Manager
 GDM provides the equivalent of a "login:" prompt for X displays: it
 asks for a login and starts graphical sessions.
 .
 It supports multiple seats and switching between multiple users.
 .
 The greeter is based on the GNOME libraries and applications, and its
 look and design are the same as those of a GNOME session.
 .
 This package contains introspection data for the GNOME Display Manager.

Package: gir1.2-gnomebluetooth-1.0
Description-md5: eaf5b6e0a4c10828824d324c8ac01ee5
Description-en: Introspection data for GnomeBluetooth
 This package contains tools for managing and manipulating Bluetooth
 devices using the GNOME desktop.
 .
 The libraries included provide support to gnome-bluetooth.
 .
 This package contains the introspection data for GnomeBluetooth

Package: gir1.2-gnomedesktop-3.0
Description-md5: 20549ec984ca80b043c2764659dd5041
Description-en: Introspection data for GnomeDesktop
 This package provides the include files and static library for the GNOME
 desktop library functions.
 .
 This package contains the introspection data for GnomeDesktop

Package: gir1.2-gst-plugins-base-1.0
Description-md5: 3d52c64e6869be4dd2250690fc8d724f
Description-en: GObject introspection data for the GStreamer Plugins Base library
 This package contains introspection data for the GStreamer Plugins Base library.
 .
 GStreamer is a streaming media framework, based on graphs of filters
 which operate on media data.  Applications using this library can do
 anything from real-time sound processing to playing videos, and just
 about anything else media-related.  Its plugin-based architecture means
 that new data types or processing capabilities can be added simply by
 installing new plug-ins.
 .
 It can be used by packages using the GIRepository format to generate
 dynamic bindings.

Package: gir1.2-gstreamer-1.0
Description-md5: 690d41f7ae6f89096e0ae65e4d4ffe68
Description-en: GObject introspection data for the GStreamer library
 This package contains introspection data for the GStreamer streaming media
 framework.
 .
 GStreamer is a streaming media framework, based on graphs of filters
 which operate on media data.  Applications using this library can do
 anything from real-time sound processing to playing videos, and just
 about anything else media-related.  Its plugin-based architecture means
 that new data types or processing capabilities can be added simply by
 installing new plug-ins.
 .
 It can be used by packages using the GIRepository format to generate
 dynamic bindings.

Package: gir1.2-ibus-1.0
Description-md5: c39b02e52edca9051d32a1b84aa1381f
Description-en: Intelligent Input Bus - introspection data
 IBus is an Intelligent Input Bus. It is a new input framework for the Linux
 OS. It provides full featured and user friendly input method user interface.
 It also may help developers to develop input method easily.
 .
 This package contains the GObject introspection data which are needed
 for developing the IBus applications in various programming languages
 with GObject introspection support.

Package: gir1.2-javascriptcoregtk-4.0
Description-md5: 68b0b0dd622aa930cbd3061a0f9d452d
Description-en: JavaScript engine library from WebKitGTK+ - GObject introspection data
 JavaScriptCore is the JavaScript engine used in WebKit. It consists
 of the following building blocks: lexer, parser, start-up interpreter
 (LLInt), baseline JIT, a low-latency optimizing JIT (DFG), and a
 high-throughput optimizing JIT (FTL).
 .
 This build comes from the GTK+ port of WebKit (API version 4.0).
 .
 This package contains the introspection data, which can be used by
 packages using the GIRepository format to generate dynamic bindings.

Package: gir1.2-lokdocview-0.1
Description-md5: 7dc30c9eaf0ca4f765d8e934afd2126b
Description-en: GTK3 widget wrapping LibreOffice functionality - introspection
 LOKDocView is the GTK3 widget that wraps the libreoffice functionality and
 exposes a simple API for applications to use this widget.
 .
 This package contains the Introspection data.

Package: gir1.2-networkmanager-1.0
Description-md5: 716ef1cb57a113962ff7a2202878df2d
Description-en: GObject introspection data for the libnm-glib/libnm-util library
 NetworkManager is a system network service that manages your network devices
 and connections, attempting to keep active network connectivity when
 available. It manages ethernet, WiFi, mobile broadband (WWAN), and PPPoE
 devices, and provides VPN integration with a variety of different VPN
 services.
 .
 This package contains introspection data for NetworkManager using
 libnm-glib/libnm-util.
 .
 It can be used by packages using the GIRepository format to generate
 dynamic bindings.

Package: gir1.2-nm-1.0
Description-md5: 1629663671898cf9211cbf8898082bda
Description-en: GObject introspection data for the libnm library
 NetworkManager is a system network service that manages your network devices
 and connections, attempting to keep active network connectivity when
 available. It manages ethernet, WiFi, mobile broadband (WWAN), and PPPoE
 devices, and provides VPN integration with a variety of different VPN
 services.
 .
 This package contains introspection data for NetworkManager using libnm.
 .
 It can be used by packages using the GIRepository format to generate
 dynamic bindings.

Package: gir1.2-pango-1.0
Description-md5: f177c55f2e19760894bc8f51c468361c
Description-en: Layout and rendering of internationalized text - gir bindings
 Pango is a library for layout and rendering of text, with an emphasis
 on internationalization. Pango can be used anywhere that text layout is
 needed. however, most of the work on Pango-1.0 was done using the GTK+
 widget toolkit as a test platform. Pango forms the core of text and
 font handling for GTK+-2.0.
 .
 Pango is designed to be modular; the core Pango layout can be used with
 four different font backends:
  - Core X windowing system fonts
  - Client-side fonts on X using the Xft library
  - Direct rendering of scalable fonts using the FreeType library
  - Native fonts on Microsoft backends
 .
 This package can be used by other packages using the GIRepository format to
 generate dynamic bindings.

Package: gir1.2-polkit-1.0
Description-md5: 4f1754998d1990ea4af7a70d3a9b9278
Description-en: GObject introspection data for PolicyKit
 PolicyKit is a toolkit for defining and handling the policy that
 allows unprivileged processes to speak to privileged processes.
 .
 This package contains introspection data for PolicyKit.
 .
 It can be used by packages using the GIRepository format to generate
 dynamic bindings.

Package: gir1.2-poppler-0.18
Description-md5: 6b6381807b3c5b1b31f06935b5817c74
Description-en: GObject introspection data for poppler-glib
 Poppler is a PDF rendering library based on Xpdf PDF viewer.
 .
 This package contains introspection data for poppler-glib.
 .
 It can be used by packages using the GIRepository format to generate
 dynamic bindings.

Package: gir1.2-soup-2.4
Description-md5: 538da50445bc19b8ea14ae946fa95a44
Description-en: GObject introspection data for the libsoup HTTP library
 This package contains introspection data for the libsoup HTTP library.
 .
 libsoup uses the Glib main loop and is designed to work well with GTK+
 applications.  This enables GNOME applications to access HTTP servers
 on the network in a completely asynchronous fashion, very similar to
 the GTK+ programming model (a synchronous operation mode is also
 supported for those who want it).
 .
 It can be used by packages using the GIRepository format to generate
 dynamic bindings.

Package: gir1.2-udisks-2.0
Description-md5: f5f1b5062052b10eabb6cc3d51d6bd13
Description-en: GObject based library to access udisks2 - introspection data
 The udisks daemon serves as an interface to system block devices,
 implemented via D-Bus. It handles operations such as querying, mounting,
 unmounting, formatting, or detaching storage devices such as hard disks
 or USB thumb drives.
 .
 This package provides introspection data for libudisks. It can be used
 by packages using the GIRepository format to generate dynamic bindings.

Package: gir1.2-webkit2-4.0
Description-md5: b100ca8792f22068ef8de8307d68f074
Description-en: Web content engine library for GTK+ - GObject introspection data
 WebKit is a web content engine, derived from KHTML and KJS from KDE, and
 used primarily in Apple's Safari browser.  It is made to be embedded in
 other applications, such as mail readers, or web browsers.
 .
 It is able to display content such as HTML, SVG, XML, and others. It also
 supports DOM, XMLHttpRequest, XSLT, CSS, JavaScript/ECMAScript and more.
 .
 WebKit2 is an API layer for WebKit designed from the ground up to
 support a split process model, where the web content lives in a
 separate process from the application UI.
 .
 This build comes from the GTK+ port of WebKit (API version 4.0).
 .
 This package contains introspection data, which can be used by
 packages using the GIRepository format to generate dynamic bindings.

Package: git
Description-md5: c1f968556452a190fe359bffd151c012
Description-en: fast, scalable, distributed revision control system
 Git is popular version control system designed to handle very large
 projects with speed and efficiency; it is used for many high profile
 open source projects, most notably the Linux kernel.
 .
 Git falls in the category of distributed source code management tools.
 Every Git working directory is a full-fledged repository with full
 revision tracking capabilities, not dependent on network access or a
 central server.
 .
 This package provides the git main components with minimal dependencies.
 Additional functionality, e.g. a graphical user interface and revision
 tree visualizer, tools for interoperating with other VCS's, or a web
 interface, is provided as separate git* packages.

Package: git-doc
Description-md5: 067fe3355198c178fc97b3730c54a120
Description-en: fast, scalable, distributed revision control system (documentation)
 Git is popular version control system designed to handle very large
 projects with speed and efficiency; it is used for many high profile
 open source projects, most notably the Linux kernel.
 .
 Git falls in the category of distributed source code management tools.
 Every Git working directory is a full-fledged repository with full
 revision tracking capabilities, not dependent on network access or a
 central server.
 .
 This package provides the documentation.

Package: git-man
Description-md5: 0c79f507738c0cb72351c8ae551ee47d
Description-en: fast, scalable, distributed revision control system (manual pages)
 Git is popular version control system designed to handle very large
 projects with speed and efficiency; it is used for many high profile
 open source projects, most notably the Linux kernel.
 .
 Git falls in the category of distributed source code management tools.
 Every Git working directory is a full-fledged repository with full
 revision tracking capabilities, not dependent on network access or a
 central server.
 .
 This package provides reference documentation for use by the 'man'
 utility and the 'git help' command.

Package: gnome-bluetooth
Description-md5: 415232e02184f13dffe1ac4e51f07fa7
Description-en: GNOME Bluetooth tools
 This package contains tools for managing and manipulating Bluetooth
 devices using the GNOME desktop.

Package: gnome-desktop3-data
Description-md5: 5ce5840cc354bd74e7e4932be3851519
Description-en: Common files for GNOME desktop apps
 This package includes some files that are shared between several GNOME
 apps (internationalization files).

Package: gnome-shell
Description-md5: 51a5a94e6b632e350489b7b8d27ab9fc
Description-en: graphical shell for the GNOME desktop
 The GNOME Shell provides core interface functions like switching
 windows, launching applications or see your notifications. It takes
 advantage of the capabilities of modern graphics hardware and
 introduces innovative user interface concepts to provide a
 delightful and easy to use experience. GNOME Shell is the defining
 technology of the GNOME 3 user experience.

Package: gnome-shell-common
Description-md5: 2b326fbe771cf911adfb09b06fd267b5
Description-en: common files for the GNOME graphical shell
 This package contains translations and data files for the GNOME shell.

Package: gnupg
Description-md5: 2421c574774486effdededa540cfb1c7
Description-en: GNU privacy guard - a free PGP replacement
 GnuPG is GNU's tool for secure communication and data storage.
 It can be used to encrypt data and to create digital signatures.
 It includes an advanced key management facility and is compliant
 with the proposed OpenPGP Internet standard as described in RFC4880.
 .
 This package contains the full suite of GnuPG tools for cryptographic
 communications and data storage.

Package: gnupg-l10n
Description-md5: 7fad035451f503be001479931e85b925
Description-en: GNU privacy guard - localization files
 GnuPG is GNU's tool for secure communication and data storage.
 It can be used to encrypt data and to create digital signatures.
 It includes an advanced key management facility and is compliant
 with the proposed OpenPGP Internet standard as described in RFC 4880.
 .
 This package contains the translation files for the use of GnuPG in
 non-English locales.

Package: gnupg-utils
Description-md5: 36a136066bf186a28d9b3e8b13bdf170
Description-en: GNU privacy guard - utility programs
 GnuPG is GNU's tool for secure communication and data storage.
 .
 This package contains several useful utilities for manipulating
 OpenPGP data and other related cryptographic elements.  It includes:
 .
  * addgnupghome -- create .gnupg home directories
  * applygnupgdefaults -- run gpgconf --apply-defaults for all users
  * gpgcompose -- an experimental tool for constructing arbitrary
                  sequences of OpenPGP packets (e.g. for testing)
  * gpgparsemail -- parse an e-mail message into annotated format
  * gpgsplit -- split a sequence of OpenPGP packets into files
  * gpg-zip -- encrypt or sign files in an archive
  * kbxutil -- list, export, import Keybox data
  * lspgpot -- convert PGP ownertrust values to GnuPG
  * migrate-pubring-from-classic-gpg -- use only "modern" formats
  * symcryptrun -- use simple symmetric encryption tool in GnuPG framework
  * watchgnupg -- watch socket-based logs

Package: gnutls-doc
Description-md5: 3d0c920b8ba039f888a1558ef32409d6
Description-en: GNU TLS library - documentation and examples
 GnuTLS is a portable library which implements the Transport Layer
 Security (TLS 1.0, 1.1, 1.2) and Secure Sockets Layer (SSL) 3.0 and Datagram
 Transport Layer Security (DTLS 1.0, 1.2) protocols.
 .
 GnuTLS features support for:
  - TLS extensions: server name indication, max record size, opaque PRF
    input, etc.
  - authentication using the SRP protocol.
  - authentication using both X.509 certificates and OpenPGP keys.
  - TLS Pre-Shared-Keys (PSK) extension.
  - Inner Application (TLS/IA) extension.
  - X.509 and OpenPGP certificate handling.
  - X.509 Proxy Certificates (RFC 3820).
  - all the strong encryption algorithms (including SHA-256/384/512 and
    Camellia (RFC 4132)).
 .
 This package contains all the GnuTLS documentation.

Package: golang-github-snapcore-snapd-dev
Description-md5: a2d3a19f6630f9476511151dac13666a
Description-en: snappy development go packages.
 Use these to use the snappy API.

Package: golang-github-ubuntu-core-snappy-dev
Description-md5: 1f317b04f78374dba7d1e14def0b7f80
Description-en: transitional dummy package
 This is a transitional dummy package. It can safely be removed.

Package: gpg
Description-md5: 072a12509de7421dfcbf41d8921ce986
Description-en: GNU Privacy Guard -- minimalist public key operations
 GnuPG is GNU's tool for secure communication and data storage.
 It can be used to encrypt data and to create digital signatures.
 It includes an advanced key management facility and is compliant
 with the proposed OpenPGP Internet standard as described in RFC4880.
 .
 This package contains /usr/bin/gpg itself, and is useful on its own
 only for public key operations (encryption, signature verification,
 listing OpenPGP certificates, etc).  If you want full capabilities
 (including secret key operations, network access, etc), please
 install the "gnupg" package, which pulls in the full suite of tools.

Package: gpg-agent
Description-md5: 6c5c3942a5ec2e08c337466bd44b6cde
Description-en: GNU privacy guard - cryptographic agent
 GnuPG is GNU's tool for secure communication and data storage.
 It can be used to encrypt data and to create digital signatures.
 It includes an advanced key management facility and is compliant
 with the proposed OpenPGP Internet standard as described in RFC4880.
 .
 This package contains the agent program gpg-agent which handles all
 secret key material for OpenPGP and S/MIME use.  The agent also
 provides a passphrase cache, which is used by pre-2.1 versions of
 GnuPG for OpenPGP operations.  Without this package, trying to do
 secret-key operations with any part of the modern GnuPG suite will
 fail.

Package: gpg-wks-client
Description-md5: 8033bb8d854542bf7c9451428191be6d
Description-en: GNU privacy guard - Web Key Service client
 GnuPG is GNU's tool for secure communication and data storage.
 It can be used to encrypt data and to create digital signatures.
 It includes an advanced key management facility and is compliant
 with the proposed OpenPGP Internet standard as described in RFC4880.
 .
 This package provides the GnuPG client for the Web Key Service
 protocol.
 .
 A Web Key Service is a service that allows users to upload keys per
 mail to be verified over https as described in
 https://tools.ietf.org/html/draft-koch-openpgp-webkey-service
 .
 For more information see: https://wiki.gnupg.org/WKS

Package: gpg-wks-server
Description-md5: e2eb43281beac2769941e9e1f37dd8a2
Description-en: GNU privacy guard - Web Key Service server
 GnuPG is GNU's tool for secure communication and data storage.
 It can be used to encrypt data and to create digital signatures.
 It includes an advanced key management facility and is compliant
 with the proposed OpenPGP Internet standard as described in RFC4880.
 .
 This package provides the GnuPG server for the Web Key Service
 protocol.
 .
 A Web Key Service is a service that allows users to upload keys per
 mail to be verified over https as described in
 https://tools.ietf.org/html/draft-koch-openpgp-webkey-service
 .
 For more information see: https://wiki.gnupg.org/WKS

Package: gpgconf
Description-md5: a54470fd043c15b13d18d29306678637
Description-en: GNU privacy guard - core configuration utilities
 GnuPG is GNU's tool for secure communication and data storage.
 .
 This package contains core utilities used by different tools in the
 suite offered by GnuPG.  It can be used to programmatically edit
 config files for tools in the GnuPG suite, to launch or terminate
 per-user daemons (if installed), etc.

Package: gpgsm
Description-md5: d09741caa0bbe13153a4e4c54325393d
Description-en: GNU privacy guard - S/MIME version
 GnuPG is GNU's tool for secure communication and data storage.
 It can be used to encrypt data and to create digital signatures.
 It includes an advanced key management facility and is compliant
 with the proposed OpenPGP Internet standard as described in RFC4880.
 .
 This package contains the gpgsm program. gpgsm is a tool to provide
 digital encryption and signing services on X.509 certificates and the
 CMS protocol. gpgsm includes complete certificate management.

Package: gpgv
Description-md5: 4ea8f4f4d6a0a387a4a3aeba3e6cc888
Description-en: GNU privacy guard - signature verification tool
 GnuPG is GNU's tool for secure communication and data storage.
 .
 gpgv is actually a stripped-down version of gpg which is only able
 to check signatures. It is somewhat smaller than the fully-blown gpg
 and uses a different (and simpler) way to check that the public keys
 used to make the signature are valid. There are no configuration
 files and only a few options are implemented.

Package: gstreamer1.0-alsa
Description-md5: 339f038172c486f3cef220df0c0e5ac4
Description-en: GStreamer plugin for ALSA
 GStreamer is a streaming media framework, based on graphs of filters
 which operate on media data.  Applications using this library can do
 anything from real-time sound processing to playing videos, and just
 about anything else media-related.  Its plugin-based architecture means
 that new data types or processing capabilities can be added simply by
 installing new plug-ins.
 .
 This package contains the GStreamer plugin for the ALSA library.  ALSA
 is the Advanced Linux Sound Architecture.

Package: gstreamer1.0-doc
Description-md5: 2274936f9039765c43e33252ae21527d
Description-en: GStreamer core documentation and manuals
 GStreamer is a streaming media framework, based on graphs of filters
 which operate on media data.  Applications using this library can do
 anything from real-time sound processing to playing videos, and just
 about anything else media-related.  Its plugin-based architecture means
 that new data types or processing capabilities can be added simply by
 installing new plug-ins.
 .
 This package contains documentation for core libraries and elements as
 well as:
  * the GStreamer Manual
  * the GStreamer Plugin Writers Guide
  * Various API docs

Package: gstreamer1.0-gl
Description-md5: bf297887fc963973c7834f126d83e02d
Description-en: GStreamer plugins for GL
 GStreamer is a streaming media framework, based on graphs of filters
 which operate on media data.  Applications using this library can do
 anything from real-time sound processing to playing videos, and just
 about anything else media-related.  Its plugin-based architecture means
 that new data types or processing capabilities can be added simply by
 installing new plug-ins.
 .
 This package contains the GStreamer plugins for GL.

Package: gstreamer1.0-gtk3
Description-md5: c79f4ede217ec8cc138bb67e7e775fde
Description-en: GStreamer plugin for GTK+3
 GStreamer is a streaming media framework, based on graphs of filters
 which operate on media data.  Applications using this library can do
 anything from real-time sound processing to playing videos, and just
 about anything else media-related.  Its plugin-based architecture means
 that new data types or processing capabilities can be added simply by
 installing new plug-ins.
 .
 This package contains the GStreamer plugin for GTK+3.

Package: gstreamer1.0-plugins-base
Description-md5: 73eb82d2de7fe71e4455e1742423e3e3
Description-en: GStreamer plugins from the "base" set
 GStreamer is a streaming media framework, based on graphs of filters
 which operate on media data.  Applications using this library can do
 anything from real-time sound processing to playing videos, and just
 about anything else media-related.  Its plugin-based architecture means
 that new data types or processing capabilities can be added simply by
 installing new plug-ins.
 .
 This package contains the GStreamer plugins from the "base" set, an
 essential exemplary set of elements.

Package: gstreamer1.0-plugins-base-apps
Description-md5: 72cc51baa52c95f36129fb0f74a62970
Description-en: GStreamer helper programs from the "base" set
 GStreamer is a streaming media framework, based on graphs of filters
 which operate on media data.  Applications using this library can do
 anything from real-time sound processing to playing videos, and just
 about anything else media-related.  Its plugin-based architecture means
 that new data types or processing capabilities can be added simply by
 installing new plug-ins.
 .
 This package contains helper programs from the "base" set, an essential
 exemplary set of elements.

Package: gstreamer1.0-plugins-base-dbg
Description-md5: b7d3c79dd3992a2b1b542fa636eec13a
Description-en: GStreamer plugins from the "base" set
 GStreamer is a streaming media framework, based on graphs of filters
 which operate on media data.  Applications using this library can do
 anything from real-time sound processing to playing videos, and just
 about anything else media-related.  Its plugin-based architecture means
 that new data types or processing capabilities can be added simply by
 installing new plug-ins.
 .
 This package contains unstripped shared libraries. It is provided primarily
 to provide a backtrace with names in a debugger, this makes it somewhat
 easier to interpret core dumps. The libraries are installed in
 /usr/lib/debug and are automatically used by gdb.

Package: gstreamer1.0-plugins-base-doc
Description-md5: aaf86bd34d894dca484623ae59419aad
Description-en: GStreamer documentation for plugins from the "base" set
 GStreamer is a streaming media framework, based on graphs of filters
 which operate on media data.  Applications using this library can do
 anything from real-time sound processing to playing videos, and just
 about anything else media-related.  Its plugin-based architecture means
 that new data types or processing capabilities can be added simply by
 installing new plug-ins.
 .
 This package contains documentation for plugins from the "base" set,
 an essential exemplary set of elements.

Package: gstreamer1.0-plugins-good
Description-md5: 5af11b405c70a6a41fff183475cb6042
Description-en: GStreamer plugins from the "good" set
 GStreamer is a streaming media framework, based on graphs of filters
 which operate on media data.  Applications using this library can do
 anything from real-time sound processing to playing videos, and just
 about anything else media-related.  Its plugin-based architecture means
 that new data types or processing capabilities can be added simply by
 installing new plug-ins.
 .
 This package contains the GStreamer plugins from the "good" set, a set
 of good-quality plug-ins under the LGPL license.

Package: gstreamer1.0-plugins-good-doc
Description-md5: 39674248e63796a3ad344a5d7425ad8f
Description-en: GStreamer documentation for plugins from the "good" set
 GStreamer is a streaming media framework, based on graphs of filters
 which operate on media data.  Applications using this library can do
 anything from real-time sound processing to playing videos, and just
 about anything else media-related.  Its plugin-based architecture means
 that new data types or processing capabilities can be added simply by
 installing new plug-ins.
 .
 This package contains documentation for plugins from the "good" set,
 a set of good-quality plug-ins under the LGPL license.

Package: gstreamer1.0-pulseaudio
Description-md5: b4aa98329fafbb54ea588de42c256d78
Description-en: GStreamer plugin for PulseAudio
 GStreamer is a streaming media framework, based on graphs of filters
 which operate on media data.  Applications using this library can do
 anything from real-time sound processing to playing videos, and just
 about anything else media-related.  Its plugin-based architecture means
 that new data types or processing capabilities can be added simply by
 installing new plug-ins.
 .
 This package contains the GStreamer plugin for PulseAudio, a sound server
 for POSIX and WIN32 systems.

Package: gstreamer1.0-tools
Description-md5: 909df9df4ba32a53040e4e54751c1cfa
Description-en: Tools for use with GStreamer
 GStreamer is a streaming media framework, based on graphs of filters
 which operate on media data.  Applications using this library can do
 anything from real-time sound processing to playing videos, and just
 about anything else media-related.  Its plugin-based architecture means
 that new data types or processing capabilities can be added simply by
 installing new plug-ins.
 .
 This package contains versioned command-line tools for GStreamer.

Package: gstreamer1.0-x
Description-md5: f30e1dbce14d6ece228c6b4e6dfdfdbd
Description-en: GStreamer plugins for X11 and Pango
 GStreamer is a streaming media framework, based on graphs of filters
 which operate on media data.  Applications using this library can do
 anything from real-time sound processing to playing videos, and just
 about anything else media-related.  Its plugin-based architecture means
 that new data types or processing capabilities can be added simply by
 installing new plug-ins.
 .
 This package contains the GStreamer plugins for X11 video output, both
 for standard Xlib support and for the Xv extension, as well as the
 plugin for Pango-based text rendering and overlay.

Package: gvfs
Description-md5: 61f453207c2ab18880315d27f13ee0fb
Description-en: userspace virtual filesystem - GIO module
 gvfs is a userspace virtual filesystem where mounts run as separate
 processes which you talk to via D-Bus. It also contains a gio module
 that seamlessly adds gvfs support to all applications using the gio
 API. It also supports exposing the gvfs mounts to non-gio applications
 using fuse.
 .
 This package contains the GIO module that lets applications use gvfs
 mounts.

Package: gvfs-backends
Description-md5: a52c33f1997ced7de25b843669700b48
Description-en: userspace virtual filesystem - backends
 gvfs is a userspace virtual filesystem where mounts run as separate
 processes which you talk to via D-Bus. It also contains a gio module
 that seamlessly adds gvfs support to all applications using the gio
 API. It also supports exposing the gvfs mounts to non-gio applications
 using fuse.
 .
 This package contains the afc, afp, archive, cdda, dav, dnssd, ftp,
 gphoto2, http, mtp, network, sftp, smb and smb-browse backends.

Package: gvfs-bin
Description-md5: 02be92bf6407403290f8dec1428dea18
Description-en: userspace virtual filesystem - binaries
 gvfs is a userspace virtual filesystem where mounts run as separate
 processes which you talk to via D-Bus. It also contains a gio module
 that seamlessly adds gvfs support to all applications using the gio
 API. It also supports exposing the gvfs mounts to non-gio applications
 using fuse.
 .
 This package contains the support binaries.

Package: gvfs-common
Description-md5: 9572165fd324aff77138e36127f7d629
Description-en: userspace virtual filesystem - common data files
 gvfs is a userspace virtual filesystem where mounts run as separate
 processes which you talk to via D-Bus. It also contains a gio module
 that seamlessly adds gvfs support to all applications using the gio
 API. It also supports exposing the gvfs mounts to non-gio applications
 using fuse.
 .
 This package contains the data files and translations used by all gvfs
 components.

Package: gvfs-daemons
Description-md5: 3ce59381bd6888364e59f20a23789369
Description-en: userspace virtual filesystem - servers
 gvfs is a userspace virtual filesystem where mounts run as separate
 processes which you talk to via D-Bus. It also contains a gio module
 that seamlessly adds gvfs support to all applications using the gio
 API. It also supports exposing the gvfs mounts to non-gio applications
 using fuse.
 .
 This package contains the gvfs server and the minimal set of backends.

Package: gvfs-fuse
Description-md5: e8ae435dfe556826602d3a021208211e
Description-en: userspace virtual filesystem - fuse server
 gvfs is a userspace virtual filesystem where mounts run as separate
 processes which you talk to via D-Bus. It also contains a gio module
 that seamlessly adds gvfs support to all applications using the gio
 API. It also supports exposing the gvfs mounts to non-gio applications
 using fuse.
 .
 This package contains the gvfs-fuse server that exports gvfs mounts to
 all applications using FUSE.

Package: gvfs-libs
Description-md5: 6558598d97ea2bbb18ca95c90e7c0683
Description-en: userspace virtual filesystem - private libraries
 gvfs is a userspace virtual filesystem where mounts run as separate
 processes which you talk to via D-Bus. It also contains a gio module
 that seamlessly adds gvfs support to all applications using the gio
 API. It also supports exposing the gvfs mounts to non-gio applications
 using fuse.
 .
 This package contains private libraries with common functions between
 the daemons and the GIO module.

Package: haproxy
Description-md5: 29390feb7563fd9f1e74f245bf31a64c
Description-en: fast and reliable load balancing reverse proxy
 HAProxy is a TCP/HTTP reverse proxy which is particularly suited for high
 availability environments. It features connection persistence through HTTP
 cookies, load balancing, header addition, modification, deletion both ways. It
 has request blocking capabilities and provides interface to display server
 status.

Package: hello
Description-md5: c4a4aec43084cfb4a44c959b27e3a6d6
Description-en: example package based on GNU hello
 The GNU hello program produces a familiar, friendly greeting.  It
 allows non-programmers to use a classic computer science tool which
 would otherwise be unavailable to them.
 .
 Seriously, though: this is an example of how to do a Debian package.
 It is the Debian version of the GNU Project's `hello world' program
 (which is itself an example for the GNU Project).

Package: ibus
Description-md5: 489faf3b419b10c90a2fd62eb552cc93
Description-en: Intelligent Input Bus - core
 IBus is an Intelligent Input Bus. It is a new input framework for the Linux
 OS. It provides full featured and user friendly input method user interface.
 It also may help developers to develop input method easily.

Package: ibus-doc
Description-md5: 09048d4e789485a527aee6fb9a9dd253
Description-en: Intelligent Input Bus - development documentation
 IBus is an Intelligent Input Bus. It is a new input framework for the Linux
 OS. It provides full featured and user friendly input method user interface.
 It also may help developers to develop input method easily.
 .
 This package contains the reference manual.

Package: ibus-gtk
Description-md5: 1f9ea675e099fe199fcaa23aae7ef941
Description-en: Intelligent Input Bus - GTK+2 support
 IBus is an Intelligent Input Bus. It is a new input framework for the Linux
 OS. It provides full featured and user friendly input method user interface.
 It also may help developers to develop input method easily.
 .
 This package contains the GTK+2 IM module.

Package: ibus-gtk3
Description-md5: bffc1306e64ce23ae551c3e11837360a
Description-en: Intelligent Input Bus - GTK+3 support
 IBus is an Intelligent Input Bus. It is a new input framework for the Linux
 OS. It provides full featured and user friendly input method user interface.
 It also may help developers to develop input method easily.
 .
 This package contains the GTK+3 IM module.

Package: icu-devtools
Description-md5: 4f58797462ac478415b579bf552abff4
Description-en: Development utilities for International Components for Unicode
 ICU is a C++ and C library that provides robust and full-featured
 Unicode and locale support. This package contains programs used to
 manipulate data files found in the ICU sources and is a dependency of
 libicu-dev.  End users would generally not need to install this package.

Package: icu-doc
Description-md5: 85b63ef20f81e6ed56386e76f65f4297
Description-en: API documentation for ICU classes and functions
 ICU is a C++ and C library that provides robust and full-featured
 Unicode and locale support.  This package contains HTML files
 documenting the ICU APIs.

Package: imagemagick
Description-md5: 454d44b3e8d4177be027105c6c73b6f9
Description-en: image manipulation programs -- binaries
 ImageMagick is a software suite to create, edit, and compose bitmap images.
 It can read, convert and write images in a variety of formats (over 100)
 including DPX, EXR, GIF, JPEG, JPEG-2000, PDF, PhotoCD, PNG, Postscript,
 SVG, and TIFF. Use ImageMagick to translate, flip, mirror, rotate, scale,
 shear and transform images, adjust image colors, apply various special
 effects, or draw text, lines, polygons, ellipses and BÃ©zier curves.
 All manipulations can be achieved through shell commands as well as through
 an X11 graphical interface (display).
 .
 This package include links to channel depth specific binaries and manual
 pages.
 .
 This is a dummy package.  You can safely purge or remove it.

Package: imagemagick-6-common
Description-md5: 242e9070bb8cf8876ae8723472cc8f76
Description-en: image manipulation programs -- infrastructure
 imagemagick-common contains the filesystem infrastructure required for
 further installation of imagemagick in any configuration; it does not provide
 a full installation of binaries, libraries, and utilities
 required to run imagemagick.
 .
 This package is independent of channel depth.

Package: imagemagick-6.q16
Description-md5: e40daf0bbbffd2b9ac49e04c8c3480fe
Description-en: image manipulation programs -- quantum depth Q16
 ImageMagick is a software suite to create, edit, and compose bitmap images.
 It can read, convert and write images in a variety of formats (over 100)
 including DPX, EXR, GIF, JPEG, JPEG-2000, PDF, PhotoCD, PNG, Postscript,
 SVG, and TIFF. Use ImageMagick to translate, flip, mirror, rotate, scale,
 shear and transform images, adjust image colors, apply various special
 effects, or draw text, lines, polygons, ellipses and BÃ©zier curves.
 All manipulations can be achieved through shell commands as well as through
 an X11 graphical interface (display).
 .
 For working with the SVG, WMF, OpenEXR, DjVu and Graphviz formats,
 you need to install the libmagickcore-6.q16-3-extra package.
 .
 This version of imagemagick is compiled for a channel
 depth of 16 bits (Q16).

Package: initramfs-tools
Description-md5: f406a6ad4452bdc36e9957a711143c2e
Description-en: generic modular initramfs generator (automation)
 This package builds a bootable initramfs for Linux kernel packages.  The
 initramfs is loaded along with the kernel and is responsible for
 mounting the root filesystem and starting the main init system.

Package: initramfs-tools-bin
Description-md5: 14e601bd8c0a0905d238d89be3036fa8
Description-en: binaries used by initramfs-tools
 This package contains binaries used inside the initramfs images generated
 by initramfs-tools.

Package: initramfs-tools-core
Description-md5: 8d2ce4976ab4fb33b898ed3006a086fa
Description-en: generic modular initramfs generator (core tools)
 This package contains the mkinitramfs program that can be used to
 create a bootable initramfs for a Linux kernel.  The initramfs should
 be loaded along with the kernel and is then responsible for mounting
 the root filesystem and starting the main init system.

Package: intel-microcode
Description-md5: 3edb9824276886579313f0e847f6bb14
Description-en: Processor microcode firmware for Intel CPUs
 This package contains updated system processor microcode for
 Intel i686 and Intel X86-64 processors.  Intel releases microcode
 updates to correct processor behavior as documented in the
 respective processor specification updates.
 .
 For AMD processors, please refer to the amd64-microcode package.

Package: irssi
Description-md5: f222734d8d370d75bf620389270c0ade
Description-en: terminal based IRC client
 Irssi is a terminal based IRC client for UNIX systems. It also supports
 SILC and ICB protocols via plugins.
 .
 Features include:
  * Autologging
  * Formats and themes
  * Configurable keybindings
  * Paste detection
  * Perl scripting
  * Irssi-proxy
  * Transparent upgrading
  * Recode support

Package: irssi-dev
Description-md5: 48f02dc7e9ee186db7d00968bfcaaf49
Description-en: terminal based IRC client - development files
 Irssi is a terminal based IRC client for UNIX systems. It also supports
 SILC and ICB protocols via plugins.
 .
 Features include:
  * Autologging
  * Formats and themes
  * Configurable keybindings
  * Paste detection
  * Perl scripting
  * Irssi-proxy
  * Transparent upgrading
  * Recode support
 .
 This package includes the development files for the irssi client.

Package: isc-dhcp-client
Description-md5: 849016b34f878b96cbdf66cb6a0cc650
Description-en: DHCP client for automatically obtaining an IP address
 This is the Internet Software Consortium's DHCP client.
 .
 Dynamic Host Configuration Protocol (DHCP) is a protocol like BOOTP
 (actually dhcpd includes much of the functionality of bootpd). It
 gives client machines "leases" for IP addresses and can
 automatically set their network configuration. If your machine
 depends on DHCP (especially likely if it's a workstation on a large
 network, or a laptop, or attached to a cable modem), keep this or
 another DHCP client installed.
 .
 Extra documentation can be found in the package isc-dhcp-common.

Package: isc-dhcp-common
Description-md5: 2790388f06e46625f3fdfcb787daeb31
Description-en: common manpages relevant to all of the isc-dhcp packages
 This package includes manpages that are relevant to the various ISC DHCP
 packages.
 .
 The dhcp-options manpage describes available options for dhcpd and dhclient.
 The dhcp-eval manpage describes evaluation of conditional expressions.

Package: isc-dhcp-dev
Description-md5: a5da96904bc2ff124317fb1545407142
Description-en: API for accessing and modifying the DHCP server and client state
 This package provides support for OMAPI (Object Management Application
 Programming Interface), which is an API for accessing and modifying the DHCP
 server and client state.

Package: isc-dhcp-server
Description-md5: 38647f497f13c9a0a99f9d9cf772d70d
Description-en: ISC DHCP server for automatic IP address assignment
 This is the Internet Software Consortium's DHCP server.
 .
 Dynamic Host Configuration Protocol (DHCP) is a protocol like BOOTP
 (actually dhcpd includes much of the functionality of bootpd). It
 gives client machines "leases" for IP addresses and can
 automatically set their network configuration.
 .
 This server can handle multiple ethernet interfaces.

Package: java-common
Description-md5: 331c38b4382151ea9451e0a4ee764de7
Description-en: Base package for Java runtimes
 This package provides common tools for the Java runtimes, such as
 the update-java-alternatives mechanism used to switch between
 different versions of Java.

Package: keepalived
Description-md5: e2d2506352721e77c2c351de4714ddd6
Description-en: Failover and monitoring daemon for LVS clusters
 keepalived is used for monitoring real servers within a Linux
 Virtual Server (LVS) cluster.  keepalived can be configured to
 remove real servers from the cluster pool if it stops responding,
 as well as send a notification email to make the admin aware of
 the service failure.
 .
 In addition, keepalived implements an independent Virtual Router
 Redundancy Protocol (VRRPv2; see rfc2338 for additional info)
 framework for director failover.
 .
 You need a kernel >= 2.4.28 or >= 2.6.11 for keepalived.
 See README.Debian for more information.

Package: krb5-doc
Description-md5: 019f063fa3a2221f5019a253e0acb9bc
Description-en: documentation for MIT Kerberos
 Kerberos is a system for authenticating users and services on a network.
 Kerberos is a trusted third-party service.  That means that there is a
 third party (the Kerberos server) that is trusted by all the entities on
 the network (users and services, usually called "principals").
 .
 This is the MIT reference implementation of Kerberos V5.
 .
 This package contains the installation, administrator, and user reference
 manuals for MIT Kerberos and the man pages for the MIT Kerberos
 configuration files.

Package: krb5-locales
Description-md5: 21d19741f2f6e9424950c8f1a6d5cab0
Description-en: internationalization support for MIT Kerberos
 Kerberos is a system for authenticating users and services on a network.
 Kerberos is a trusted third-party service.  That means that there is a
 third party (the Kerberos server) that is trusted by all the entities on
 the network (users and services, usually called "principals").
 .
 This is the MIT reference implementation of Kerberos V5.
 .
 This package contains internationalized messages for MIT Kerberos.

Package: krb5-multidev
Description-md5: f39b0ef69fd49cdc81c78fd16595779e
Description-en: development files for MIT Kerberos without Heimdal conflict
 Kerberos is a system for authenticating users and services on a network.
 Kerberos is a trusted third-party service.  That means that there is a
 third party (the Kerberos server) that is trusted by all the entities on
 the network (users and services, usually called "principals").
 .
 This is the MIT reference implementation of Kerberos V5.
 .
 Most users wishing to build applications against MIT Kerberos should
 install libkrb5-dev.  However, that package conflicts with heimdal-dev.
 This package installs libraries and headers in /usr/include/mit-krb5 and
 /usr/lib/mit-krb5 and can be installed along side heimdal-multidev, which
 provides the same facilities for Heimdal.

Package: ldap-utils
Description-md5: f5d300156245ae8fa5972cf30bf60206
Description-en: OpenLDAP utilities
 This package provides utilities from the OpenLDAP (Lightweight
 Directory Access Protocol) package. These utilities can access a
 local or remote LDAP server and contain all the client programs
 required to access LDAP servers.

Package: lftp
Description-md5: a4340506ec33e727d20a43b185d30cc6
Description-en: Sophisticated command-line FTP/HTTP/BitTorrent client programs
 Lftp is a file retrieving tool that supports FTP, HTTP, FISH, SFTP, HTTPS,
 FTPS and BitTorrent protocols under both IPv4 and IPv6. Lftp has an amazing
 set of features, while preserving its interface as simple and easy as possible.
 .
 The main two advantages over other ftp clients are reliability and ability
 to perform tasks in background. It will reconnect and reget the file being
 transferred if the connection broke. You can start a transfer in background
 and continue browsing on the ftp site. It does this all in one process. When
 you have started background jobs and feel you are done, you can just exit
 lftp and it automatically moves to nohup mode and completes the transfers.
 It has also such nice features as reput and mirror. It can also download a
 file as soon as possible by using several connections at the same time.
 .
 Lftp can also be scriptable, it can be used to mirror sites, it lets you
 copy files among remote servers (even between FTP and HTTP). It has an
 extensive online help. It supports bookmarks, and connecting to several
 ftp/http sites at the same time.
 .
 This package also includes lftpget - A simple non-interactive
 tool for downloading files.

Package: lib32asan4
Description-md5: 21a3c42c398c2fff43ee9449787256e4
Description-en: AddressSanitizer -- a fast memory error detector (32bit)
 AddressSanitizer (ASan) is a fast memory error detector.  It finds
 use-after-free and {heap,stack,global}-buffer overflow bugs in C/C++ programs.

Package: lib32asan4-dbg
Description-md5: bde72eaadd150a362fa2a39d6da988d7
Description-en: AddressSanitizer -- a fast memory error detector (32 bit debug symbols)
 AddressSanitizer (ASan) is a fast memory error detector.  It finds
 use-after-free and {heap,stack,global}-buffer overflow bugs in C/C++ programs.

Package: lib32asan5
Description-md5: 21a3c42c398c2fff43ee9449787256e4
Description-en: AddressSanitizer -- a fast memory error detector (32bit)
 AddressSanitizer (ASan) is a fast memory error detector.  It finds
 use-after-free and {heap,stack,global}-buffer overflow bugs in C/C++ programs.

Package: lib32asan5-dbg
Description-md5: bde72eaadd150a362fa2a39d6da988d7
Description-en: AddressSanitizer -- a fast memory error detector (32 bit debug symbols)
 AddressSanitizer (ASan) is a fast memory error detector.  It finds
 use-after-free and {heap,stack,global}-buffer overflow bugs in C/C++ programs.

Package: lib32atomic1
Description-md5: 4b9cd7e59833a54167ec848b4c3d9e48
Description-en: support library providing __atomic built-in functions (32bit)
 library providing __atomic built-in functions. When an atomic call cannot
 be turned into lock-free instructions, GCC will make calls into this library.

Package: lib32atomic1-dbg
Description-md5: 865d3c01985d4c1517371f8f439ecadf
Description-en: support library providing __atomic built-in functions (32 bit debug symbols)
 library providing __atomic built-in functions. When an atomic call cannot
 be turned into lock-free instructions, GCC will make calls into this library.

Package: lib32cilkrts5
Description-md5: cfc0a1e0e2c2fe8e45700724c806a987
Description-en: Intel Cilk Plus language extensions (32bit)
 Intel Cilk Plus is an extension to the C and C++ languages to support
 data and task parallelism.

Package: lib32cilkrts5-dbg
Description-md5: 302371f2bf006ba155500edad2c90bb0
Description-en: Intel Cilk Plus language extensions (32 bit debug symbols)
 Intel Cilk Plus is an extension to the C and C++ languages to support
 data and task parallelism.

Package: lib32gcc-7-dev
Description-md5: 50201ee0230693f6a9313820d5854393
Description-en: GCC support library (32 bit development files)
 This package contains the headers and static library files necessary for
 building C programs which use libgcc, libgomp, libquadmath, libssp or libitm.

Package: lib32gcc-8-dev
Description-md5: 50201ee0230693f6a9313820d5854393
Description-en: GCC support library (32 bit development files)
 This package contains the headers and static library files necessary for
 building C programs which use libgcc, libgomp, libquadmath, libssp or libitm.

Package: lib32gcc1
Description-md5: a31c67d540f86442c895f2663cb4d5c9
Description-en: GCC support library (32 bit Version)
 Shared version of the support library, a library of internal subroutines
 that GCC uses to overcome shortcomings of particular machines, or
 special needs for some languages.

Package: lib32gcc1-dbg
Description-md5: d2281f8d5a2b7dae7c362df43affcb03
Description-en: GCC support library (debug symbols)
 Debug symbols for the GCC support library.

Package: lib32gfortran-7-dev
Description-md5: 6b37f3090548ca719a28233db2276849
Description-en: Runtime library for GNU Fortran applications (32bit development files)
 This package contains the headers and static library files needed to build
 GNU Fortran applications.

Package: lib32gfortran4
Description-md5: 6b1141cbf03c78b07b329d00c2e7823f
Description-en: Runtime library for GNU Fortran applications (32bit)
 Library needed for GNU Fortran applications linked against the
 shared library.

Package: lib32gfortran4-dbg
Description-md5: f1c6c70ede14acca0d8908ffcb0e809d
Description-en: Runtime library for GNU Fortran applications (32 bit debug symbols)
 Library needed for GNU Fortran applications linked against the
 shared library.

Package: lib32gomp1
Description-md5: e631a6bc5701a04082ff06d4907faecf
Description-en: GCC OpenMP (GOMP) support library (32bit)
 GOMP is an implementation of OpenMP for the C, C++, and Fortran compilers
 in the GNU Compiler Collection.

Package: lib32gomp1-dbg
Description-md5: 91ff2112f352a83cd9b7528de9b7a7c4
Description-en: GCC OpenMP (GOMP) support library (32 bit debug symbols)
 GOMP is an implementation of OpenMP for the C, C++, and Fortran compilers
 in the GNU Compiler Collection.

Package: lib32gphobos-7-dev
Description-md5: b341eedcd8081d86dac015bda85ac8cc
Description-en: Phobos D standard library (32bit development files)
 This is the Phobos standard library that comes with the D2 compiler.
 .
 For more information check http://www.dlang.org/phobos/

Package: lib32gphobos-8-dev
Description-md5: b341eedcd8081d86dac015bda85ac8cc
Description-en: Phobos D standard library (32bit development files)
 This is the Phobos standard library that comes with the D2 compiler.
 .
 For more information check http://www.dlang.org/phobos/

Package: lib32gphobos71
Description-md5: 2086a0c7f5831c82fec492e812bdd6c1
Description-en: Phobos D standard library (runtime library)
 This is the Phobos standard library that comes with the D2 compiler.
 .
 For more information check http://www.dlang.org/phobos/

Package: lib32gphobos76
Description-md5: 2086a0c7f5831c82fec492e812bdd6c1
Description-en: Phobos D standard library (runtime library)
 This is the Phobos standard library that comes with the D2 compiler.
 .
 For more information check http://www.dlang.org/phobos/

Package: lib32itm1
Description-md5: dab7174f3ba5f3317b7d12b57522f05a
Description-en: GNU Transactional Memory Library (32bit)
 GNU Transactional Memory Library (libitm) provides transaction support for
 accesses to the memory of a process, enabling easy-to-use synchronization of
 accesses to shared memory by several threads.

Package: lib32itm1-dbg
Description-md5: 7e27c82a201c45d900c2bb92b43713b5
Description-en: GNU Transactional Memory Library (32 bit debug symbols)
 GNU Transactional Memory Library (libitm) provides transaction support for
 accesses to the memory of a process, enabling easy-to-use synchronization of
 accesses to shared memory by several threads.

Package: lib32lsan0
Description-md5: e9b900fdd2d820580fa5248285865c55
Description-en: LeakSanitizer -- a memory leak detector (32bit)
 LeakSanitizer (Lsan) is a memory leak detector which is integrated
 into AddressSanitizer (empty package).

Package: lib32lsan0-dbg
Description-md5: 3324d53f5a8070bc617f2c2b066d6f74
Description-en: LeakSanitizer -- a memory leak detector (32 bit debug symbols)
 LeakSanitizer (Lsan) is a memory leak detector which is integrated
 into AddressSanitizer (empty package).

Package: lib32mpx2
Description-md5: 5afc922c54fcccb02d0244c2257bc6c3
Description-en: Intel memory protection extensions (32bit)
 Intel MPX is a set of processor features which, with compiler,
 runtime library and OS support, brings increased robustness to
 software by checking pointer references whose compile time normal
 intentions are usurped at runtime due to buffer overflow.

Package: lib32mpx2-dbg
Description-md5: 6ba9160e11fb55e508faaa74118c8d01
Description-en: Intel memory protection extensions (32 bit debug symbols)
 Intel MPX is a set of processor features which, with compiler,
 runtime library and OS support, brings increased robustness to
 software by checking pointer references whose compile time normal
 intentions are usurped at runtime due to buffer overflow.

Package: lib32objc-7-dev
Description-md5: 4563909f76273e1eff5ff297d7d93981
Description-en: Runtime library for GNU Objective-C applications (32bit development files)
 This package contains the headers and static library files needed to build
 GNU ObjC applications.

Package: lib32objc4
Description-md5: cdc9d0be22d98fa7275d3376afaddcc0
Description-en: Runtime library for GNU Objective-C applications (32bit)
 Library needed for GNU ObjC applications linked against the shared library.

Package: lib32quadmath0
Description-md5: d7a03dac94565e412ed600a16f543d54
Description-en: GCC Quad-PreM4   .   L4   ..  N4  Ühcd.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     Þ1àÁfO4   .   r  ..  Y4   	oldpiix.h   l4   amd.h   ª4  ¸sch.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 Þ¢VªZ4   .   ¥  ..  [4  Ürandomize.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               Þ×qRq\4   .   r  ..  ]4  Üautodetect.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ÞâJ#^4   .   ±  ..  _4  Üoops                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      ÞYæ^z4   .   r  ..  {4  Üns.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      Þø#û,|4   .   r  ..  }4  Üfilesystems.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             Þž#~~4   .     ..  4  Üvector.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  ÞÕšL€4   .   w  ..  4  Üstackprotector.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ÞmÈWÎ‚4   .   á  ..  ƒ4  Üirq.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     Þ–aM„4   .   ¦o  ..  …4  Ülib.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     Þø(¬†4   .   r  ..  ‡4  Ücache.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   ÞÚQèˆ4   .   r  ..  ‰4  Üorc.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     Þ)ñÐ]Š4   .   r  ..  ‹4  Üdev                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       Þï0‹4   .   Š4   ..  Œ4  Üsg.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      Þ3‰Vœ4   .   r  ..  Ž4  Ümismatch                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            Apr 21 00:10:08 ubuntu systemd-random-seed[1080]: Failed to read seed from /var/lib/systemd/random-seed: Is a directory
Apr 21 00:10:08 ubuntu systemd-sysctl[1081]: Couldn't write '1' to 'kernel/yama/ptrace_scope', ignoring: No such file or directory
Apr 21 00:10:08 ubuntu systemd-sysctl[1081]: Couldn't write 'fq_codel' to 'net/core/default_qdisc', ignoring: No such file or directory
Apr 21 00:10:08 ubuntu systemd[1]: Starting Flush Journal to Persistent Storage...
Apr 21 00:10:08 ubuntu systemd[1]: Started Set the console keyboard layout.
Apr 21 00:10:08 ubuntu systemd[1]: Reached target Local File Systems (Pre).
Apr 21 00:10:08 ubuntu systemd[1]: Reached target Local File Systems.
Apr 21 00:10:08 ubuntu systemd[1]: Starting Set console font and keymap...
Apr 21 00:10:08 ubuntu systemd[1]: Starting Enable support for additional executable binary formats...
Apr 21 00:10:08 ubuntu systemd[1]: Started udev Coldplug all Devices.
Apr 21 00:10:08 ubuntu systemd[1]: Started Flush Journal to Persistent Storage.
Apr 21 00:10:08 ubuntu systemd[1]: Starting Create Volatile Files and Directories...
Apr 21 00:10:08 ubuntu systemd[1]: proc-sys-fs-binfmt_misc.automount: Got automount request for /proc/sys/fs/binfmt_misc, triggered by 1591 (update-binfmts)
Apr 21 00:10:08 ubuntu systemd[1]: Mounting Arbitrary Executable File Formats File System...
Apr 21 00:10:08 ubuntu systemd[1]: Started Set console font and keymap.
Apr 21 00:10:08 ubuntu systemd[1]: Started udev Kernel Device Manager.
Apr 21 00:10:08 ubuntu systemd[1]: Mounted Arbitrary Executable File Formats File System.
Apr 21 00:10:08 ubuntu systemd[1]: Starting Network Service...
Apr 21 00:10:08 ubuntu systemd-tmpfiles[1592]: "/var/lib/systemd/coredump" already exists and is not a directory.
Apr 21 00:10:08 ubuntu systemd-tmpfiles[1592]: ACL operation on "/var/log/journal/c6f04ae9b6ea4a3ab3b02d6805ef9da7" failed: Permission denied
Apr 21 00:10:08 ubuntu systemd[1]: Started Enable support for additional executable binary formats.
Apr 21 00:10:08 ubuntu systemd[1]: systemd-tmpfiles-setup.service: Main process exited, code=exited, status=1/FAILURE
Apr 21 00:10:08 ubuntu systemd[1]: systemd-tmpfiles-setup.service: Failed with result 'exit-code'.
Apr 21 00:10:08 ubuntu systemd[1]: Failed to start Create Volatile Files and Directories.
Apr 21 00:10:08 ubuntu systemd[1]: Starting Update UTMP about System Boot/Shutdown...
Apr 21 00:10:08 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 00:10:08 ubuntu systemd[1611]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 00:10:08 ubuntu systemd[1611]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 00:10:08 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 1.
Apr 21 00:10:08 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 00:10:08 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 00:10:08 ubuntu systemd[1615]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 00:10:08 ubuntu systemd[1615]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 00:10:08 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 00:10:08 ubuntu systemd[1]: Started Update UTMP about System Boot/Shutdown.
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 2.
Apr 21 00:10:08 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 00:10:08 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 00:10:08 ubuntu systemd[1621]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 00:10:08 ubuntu systemd[1621]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 00:10:08 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 3.
Apr 21 00:10:08 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 00:10:08 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Linux version 4.15.0 (root@ubuntu) (gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1~18.04)) #1 SMP Mon Apr 20 19:03:11 UTC 2020
Apr 21 00:10:08 ubuntu kernel: [    0.000000] Command line: root=/dev/sda rw console=ttyS0
Apr 21 00:10:08 ubuntu kernel: [    0.000000] x86/fpu: x87 FPU will use FXSAVE
Apr 21 00:10:08 ubuntu kernel: [    0.000000] e820: BIOS-provided physical RAM map:
Apr 21 00:10:08 ubuntu systemd-networkd[1596]: Enumeration completed
Apr 21 00:10:08 ubuntu systemd[1]: Started Network Service.
Apr 21 00:10:08 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x0000000000000000-0x000000000009fbff] usable
Apr 21 00:10:08 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x000000000009fc00-0x000000000009ffff] reserved
Apr 21 00:10:08 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x00000000000f0000-0x00000000000fffff] reserved
Apr 21 00:10:08 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x0000000000100000-0x000000001ffdefff] usable
Apr 21 00:10:08 ubuntu kernel: [    0.000000] BIOS-e820: [mem 0x000000001ffdf000-0x000000001fffffff] reserved
Apr 21 00:10:08 ubuntu systemd[1]: Starting Network Name Resolution...
Apr 21 00:10:08 ubuntu systemd[1624]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 00:10:08 ubuntu systemd[1624]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
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
Apr 21 00:10:08 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
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
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 4.
Apr 21 00:10:08 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 00:10:08 ubuntu systemd[1]: Starting Network Time Synchronization...
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
Apr 21 00:10:08 ubuntu systemd[1629]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
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
Apr 21 00:10:08 ubuntu systemd[1629]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
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
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 00:10:08 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 5.
Apr 21 00:10:08 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Start request repeated too quickly.
Apr 21 00:10:08 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 00:10:08 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 00:10:08 ubuntu systemd[1]: Reached target System Time Synchronized.
Apr 21 00:10:08 ubuntu systemd[1]: Reached target System Initialization.
Apr 21 00:10:08 ubuntu kernel: [    0.912114] pci 0000:00:01.1: [8086:7010] type 00 class 0x010180
Apr 21 00:10:08 ubuntu kernel: [    0.915000] pci 0000:00:01.1: reg 0x20: [io  0xc040-0xc04f]
Apr 21 00:10:08 ubuntu kernel: [    0.916249] pci 0000:00:01.1: legacy IDE quirk: reg 0x10: [io  0x01f0-0x01f7]
Apr 21 00:10:08 ubuntu kernel: [    0.917100] pci 0000:00:01.1: legacy IDE quirk: reg 0x14: [io  0x03f6]
Apr 21 00:10:08 ubuntu kernel: [    0.917959] pci 0000:00:01.1: legacy IDE quirk: reg 0x18: [io  0x0170-0x0177]
Apr 21 00:10:08 ubuntu kernel: [    0.918416] pci 0000:00:01.1: legacy IDE quirk: reg 0x1c: [io  0x0376]
Apr 21 00:10:08 ubuntu systemd[1]: Started Message of the Day.
Apr 21 00:10:08 ubuntu systemd[1]: Listening on D-Bus System Message Bus Socket.
Apr 21 00:10:08 ubuntu systemd[1]: Reached target Sockets.
Apr 21 00:10:08 ubuntu kernel: [    0.922134] pci 0000:00:01.3: [8086:7113] type 00 class 0x068000
Apr 21 00:10:08 ubuntu kernel: [    0.923116] pci 0000:00:01.3: quirk: [io  0x0600-0x063f] claimed by PIIX4 ACPI
Apr 21 00:10:08 ubuntu systemd[1]: Reached target Basic System.
Apr 21 00:10:08 ubuntu kernel: [    0.924052] pci 0000:00:01.3: quirk: [io  0x0700-0x070f] claimed by PIIX4 SMB
Apr 21 00:10:08 ubuntu kernel: [    0.932153] pci 0000:00:02.0: [1234:1111] type 00 class 0x030000
Apr 21 00:10:08 ubuntu kernel: [    0.932153] pci 0000:00:02.0: reg 0x10: [mem 0xfd000000-0xfdffffff pref]
Apr 21 00:10:08 ubuntu kernel: [    0.936000] pci 0000:00:02.0: reg 0x18: [mem 0xfebb0000-0xfebb0fff]
Apr 21 00:10:08 ubuntu kernel: [    0.939000] pci 0000:00:02.0: reg 0x30: [mem 0xfeba0000-0xfebaffff pref]
Apr 21 00:10:08 ubuntu kernel: [    0.943078] pci 0000:00:03.0: [8086:100e] type 00 class 0x020000
Apr 21 00:10:08 ubuntu kernel: [    0.944000] pci 0000:00:03.0: reg 0x10: [mem 0xfeb80000-0xfeb9ffff]
Apr 21 00:10:08 ubuntu systemd[1]: Started Regular background program processing daemon.
Apr 21 00:10:08 ubuntu systemd[1]: Starting Login Service...
Apr 21 00:10:08 ubuntu systemd[1]: Started Daily Cleanup of Temporary Directories.
Apr 21 00:10:08 ubuntu systemd[1]: Started D-Bus System Message Bus.
Apr 21 00:10:08 ubuntu cron[1632]: (CRON) INFO (pidfile fd = 3)
Apr 21 00:10:08 ubuntu cron[1632]: (CRON) INFO (Running @reboot jobs)
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
Apr 21 00:10:08 ubuntu systemd-resolved[1626]: Positive Trust Anchors:
Apr 21 00:10:08 ubuntu kernel: [    1.614367] Scanning for low memory corruption every 60 seconds
Apr 21 00:10:08 ubuntu kernel: [    1.655016] Initialise system trusted keyrings
Apr 21 00:10:08 ubuntu kernel: [    1.665785] workingset: timestamp_bits=56 max_order=17 bucket_order=0
Apr 21 00:10:08 ubuntu kernel: [    1.763931] NFS: Registering the id_resolver key type
Apr 21 00:10:08 ubuntu kernel: [    1.763931] Key type id_resolver registered
Apr 21 00:10:08 ubuntu kernel: [    1.763931] Key type id_legacy registered
Apr 21 00:10:08 ubuntu kernel: [    1.770998] SELinux:  Registering netfilter hooks
Apr 21 00:10:08 ubuntu kernel: [    1.805957] Key type asymmetric registered
Apr 21 00:10:08 ubuntu systemd-resolved[1626]: . IN DS 19036 8 2 49aac11d7b6f6446702e54a1607371607a1a41855200fd2ce1cdde32f24e8fb5
Apr 21 00:10:08 ubuntu systemd-resolved[1626]: . IN DS 20326 8 2 e06d44b80b8f1d39a95c0b0d7c65d08458e880409bbc683457104237c7f8ec8d
Apr 21 00:10:08 ubuntu systemd-resolved[1626]: Negative trust anchors: 10.in-addr.arpa 16.172.in-addr.arpa 17.172.in-addr.arpa 18.172.in-addr.arpa 19.172.in-addr.arpa 20.172.in-addr.arpa 21.172.in-addr.arpa 22.172.in-addr.arpa 23.172.in-addr.arpa 24.172.in-addr.arpa 25.172.in-addr.arpa 26.172.in-addr.arpa 27.172.in-addr.arpa 28.172.in-addr.arpa 29.172.in-addr.arpa 30.172.in-addr.arpa 31.172.in-addr.arpa 168.192.in-addr.arpa d.f.ip6.arpa corp home internal intranet lan local private test
Apr 21 00:10:08 ubuntu systemd-resolved[1626]: Using system hostname 'ubuntu'.
Apr 21 00:10:08 ubuntu systemd[1]: Started Discard unused blocks once a week.
Apr 21 00:10:08 ubuntu systemd[1]: Starting System Logging Service...
Apr 21 00:10:08 ubuntu kernel: [    1.807555] Asymmetric key parser 'x509' registered
Apr 21 00:10:08 ubuntu kernel: [    1.808467] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 250)
Apr 21 00:10:08 ubuntu kernel: [    1.808467] io scheduler noop registered
Apr 21 00:10:08 ubuntu kernel: [    1.812595] io scheduler deadline registered
Apr 21 00:10:08 ubuntu kernel: [    1.816341] io scheduler cfq registered (default)
Apr 21 00:10:08 ubuntu kernel: [    1.818065] io scheduler mq-deadline registered
Apr 21 00:10:08 ubuntu kernel: [    1.821479] io scheduler kyber registered
Apr 21 00:10:08 ubuntu kernel: [    1.836811] input: Power Button as /devices/LNXSYSTM:00/LNXPWRBN:00/input/input0
Apr 21 00:10:08 ubuntu kernel: [    1.843761] ACPI: Power Button [PWRF]
Apr 21 00:10:08 ubuntu systemd[1]: Starting Dispatcher daemon for systemd-networkd...
Apr 21 00:10:08 ubuntu systemd[1]: Started Daily apt download activities.
Apr 21 00:10:08 ubuntu systemd[1]: Started Daily apt upgrade and clean activities.
Apr 21 00:10:08 ubuntu systemd[1]: Reached target Timers.
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
Apr 21 00:10:08 ubuntu systemd[1]: Started Network Name Resolution.
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
Apr 21 00:10:08 ubuntu systemd[1]: Started Login Service.
Apr 21 00:10:08 ubuntu systemd[1]: Reached target Network.
Apr 21 00:10:08 ubuntu systemd[1]: Starting Permit User Sessions...
Apr 21 00:10:08 ubuntu systemd[1]: Reached target Host and Network Name Lookups.
Apr 21 00:10:08 ubuntu systemd[1]: Started Permit User Sessions.
Apr 21 00:10:08 ubuntu systemd[1]: Starting Set console scheme...
Apr 21 00:10:08 ubuntu systemd[1]: Started Set console scheme.
Apr 21 00:10:08 ubuntu systemd[1]: Created slice system-getty.slice.
Apr 21 00:10:08 ubuntu systemd[1]: Started Getty on tty1.
Apr 21 00:10:08 ubuntu systemd[1]: Started System Logging Service.
Apr 21 00:10:08 ubuntu rsyslogd: imuxsock: Acquired UNIX socket '/run/systemd/journal/syslog' (fd 3) from systemd.  [v8.32.0]
Apr 21 00:10:08 ubuntu rsyslogd: rsyslogd's groupid changed to 106
Apr 21 00:10:08 ubuntu rsyslogd: rsyslogd's userid changed to 102
Apr 21 00:10:08 ubuntu rsyslogd:  [origin software="rsyslogd" swVersion="8.32.0" x-pid="1647" x-info="http://www.rsyslog.com"] start
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
Apr 21 00:10:08 ubuntu kernel: [    5.483975] systemd[1]: systemd 237 running in system mode. (+PAM +AUDIT +SELINUX +IMA +APPARMOR +SMACK +SYSVINIT +UTMP +LIBCRYPTSETUP +GCRYPT +GNUTLS +ACL +XZ +LZ4 +SECCOMP +BLKID +ELFUTILS +KMOD -IDN2 +IDN -PCRE2 default-hierarchy=hybrid)
Apr 21 00:10:08 ubuntu kernel: [    5.489766] systemd[1]: Detected virtualization qemu.
Apr 21 00:10:08 ubuntu kernel: [    5.491478] systemd[1]: Detected architecture x86-64.
Apr 21 00:10:08 ubuntu kernel: [    5.546967] systemd[1]: Set hostname to <ubuntu>.
Apr 21 00:10:08 ubuntu kernel: [    7.253231] systemd-hiberna (1058) used greatest stack depth: 14208 bytes left
Apr 21 00:10:08 ubuntu kernel: [    7.260891] systemd-cryptse (1053) used greatest stack depth: 13760 bytes left
Apr 21 00:10:08 ubuntu kernel: [    9.503385] systemd[1]: Created slice System Slice.
Apr 21 00:10:08 ubuntu kernel: [    9.517746] systemd[1]: Listening on Syslog Socket.
Apr 21 00:10:08 ubuntu kernel: [    9.534096] systemd[1]: Listening on /dev/initctl Compatibility Named Pipe.
Apr 21 00:10:08 ubuntu kernel: [    9.549041] systemd[1]: Listening on Journal Socket.
Apr 21 00:10:08 ubuntu kernel: [    9.612877] systemd[1]: Starting Create list of required static device nodes for the current kernel...
Apr 21 00:10:08 ubuntu kernel: [    9.690832] systemd[1]: Starting Load Kernel Modules...
Apr 21 00:10:08 ubuntu kernel: [   10.630051] systemd[1]: Mounting Kernel Debug File System...
Apr 21 00:10:08 ubuntu kernel: [   10.664879] systemd[1]: Listening on Journal Socket (/dev/log).
Apr 21 00:10:08 ubuntu kernel: [   11.113143] systemd[1]: Starting Journal Service...
Apr 21 00:10:08 ubuntu kernel: [   11.214865] systemd[1]: Starting udev Coldplug all Devices...
Apr 21 00:10:08 ubuntu kernel: [   11.257362] systemd[1]: Started Forward Password Requests to Wall Directory Watch.
Apr 21 00:10:08 ubuntu kernel: [   11.292562] systemd[1]: Reached target Paths.
Apr 21 00:10:08 ubuntu kernel: [   11.297797] systemd[1]: Reached target Local Encrypted Volumes.
Apr 21 00:10:08 ubuntu kernel: [   11.460566] systemd[1]: Started Create list of required static device nodes for the current kernel.
Apr 21 00:10:08 ubuntu kernel: [   11.496873] systemd[1]: Started Load Kernel Modules.
Apr 21 00:10:08 ubuntu kernel: [   11.532686] systemd[1]: Started Remount Root and Kernel File Systems.
Apr 21 00:10:08 ubuntu kernel: [   15.864912] systemd[1]: Started Journal Service.
Apr 21 00:10:08 ubuntu kernel: [   17.060329] systemd-journald[1076]: Received request to flush runtime journal from PID 1
Apr 21 00:10:08 ubuntu kernel: [   17.474478] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   17.474478] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   17.474478] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   17.538251] keyboard-setup. (1068) used greatest stack depth: 13712 bytes left
Apr 21 00:10:08 ubuntu kernel: [   17.556293] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   17.556293] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   17.636906] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   17.641142] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   17.641292] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   17.641292] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   22.060897] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   22.080986] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   22.120998] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   22.124649] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   22.160839] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   22.161088] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   22.254090] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   22.257658] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   22.295810] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   22.296167] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   27.066825] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   27.070817] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   27.114949] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   27.114949] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   27.414747] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   27.415047] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   27.459194] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   27.459194] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   27.459194] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:08 ubuntu kernel: [   27.459194] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:10 ubuntu systemd[1]: Found device /dev/ttyS0.
Apr 21 00:10:10 ubuntu kernel: [   32.951369] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:10 ubuntu kernel: [   32.951369] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:10 ubuntu systemd[1]: Started Serial Getty on ttyS0.
Apr 21 00:10:10 ubuntu systemd[1]: Reached target Login Prompts.
Apr 21 00:10:11 ubuntu kernel: [   32.990496] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:11 ubuntu kernel: [   32.990496] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:11 ubuntu kernel: [   32.990496] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:11 ubuntu kernel: [   32.990496] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:11 ubuntu systemd-udevd[1604]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 00:10:11 ubuntu kernel: [   33.074916] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:11 ubuntu kernel: [   33.083049] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:11 ubuntu kernel: [   33.094707] e1000 0000:00:03.0 enp0s3: renamed from eth0
Apr 21 00:10:11 ubuntu kernel: [   33.114527] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:11 ubuntu kernel: [   33.114527] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:11 ubuntu systemd-networkd[1596]: eth0: Interface name change detected, eth0 has been renamed to enp0s3.
Apr 21 00:10:14 ubuntu systemd-udevd[1602]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 00:10:14 ubuntu systemd-udevd[1598]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 00:10:15 ubuntu systemd[1]: Listening on Load/Save RF Kill Switch Status /dev/rfkill Watch.
Apr 21 00:10:19 ubuntu networkd-dispatcher[1648]: No valid path found for iwconfig
Apr 21 00:10:19 ubuntu networkd-dispatcher[1648]: No valid path found for iw
Apr 21 00:10:19 ubuntu kernel: [   41.591729] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:19 ubuntu kernel: [   41.597838] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:19 ubuntu kernel: [   41.598128] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:19 ubuntu kernel: [   41.598128] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:19 ubuntu systemd[1]: Started Dispatcher daemon for systemd-networkd.
Apr 21 00:10:20 ubuntu kernel: [   42.002060] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:20 ubuntu kernel: [   42.005850] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:20 ubuntu systemd[1]: Reached target Multi-User System.
Apr 21 00:10:20 ubuntu systemd[1]: Reached target Graphical Interface.
Apr 21 00:10:20 ubuntu kernel: [   42.031293] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:20 ubuntu kernel: [   42.031293] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:20 ubuntu kernel: [   42.031293] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:20 ubuntu kernel: [   42.031293] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:20 ubuntu systemd[1]: Starting Update UTMP about System Runlevel Changes...
Apr 21 00:10:20 ubuntu systemd[1]: Started Update UTMP about System Runlevel Changes.
Apr 21 00:10:20 ubuntu systemd[1]: Startup finished in 5.184s (kernel) + 37.166s (userspace) = 42.351s.
Apr 21 00:10:41 ubuntu kernel: [   63.622260] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:41 ubuntu kernel: [   63.625721] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:42 ubuntu systemd[1]: Created slice User Slice of root.
Apr 21 00:10:42 ubuntu kernel: [   64.085821] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:42 ubuntu kernel: [   64.086029] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:42 ubuntu systemd[1]: Starting User Manager for UID 0...
Apr 21 00:10:42 ubuntu kernel: [   64.187974] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:42 ubuntu kernel: [   64.188179] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:42 ubuntu kernel: [   64.361484] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:42 ubuntu kernel: [   64.361484] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:42 ubuntu kernel: [   64.367086] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:42 ubuntu kernel: [   64.367086] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:10:42 ubuntu systemd[1]: Started Session 1 of user root.
Apr 21 00:10:43 ubuntu systemd[1694]: Listening on GnuPG cryptographic agent and passphrase cache (access for web browsers).
Apr 21 00:10:43 ubuntu systemd[1694]: Listening on GnuPG cryptographic agent and passphrase cache (restricted).
Apr 21 00:10:43 ubuntu systemd[1694]: Reached target Paths.
Apr 21 00:10:43 ubuntu systemd[1694]: Listening on GnuPG cryptographic agent (ssh-agent emulation).
Apr 21 00:10:43 ubuntu systemd[1694]: Listening on GnuPG network certificate management daemon.
Apr 21 00:10:43 ubuntu systemd[1694]: Reached target Timers.
Apr 21 00:10:43 ubuntu systemd[1694]: Listening on GnuPG cryptographic agent and passphrase cache.
Apr 21 00:10:43 ubuntu systemd[1694]: Reached target Sockets.
Apr 21 00:10:43 ubuntu systemd[1694]: Reached target Basic System.
Apr 21 00:10:43 ubuntu systemd[1694]: Reached target Default.
Apr 21 00:10:43 ubuntu systemd[1694]: Startup finished in 1.086s.
Apr 21 00:10:43 ubuntu systemd[1]: Started User Manager for UID 0.
Apr 21 00:13:20 ubuntu kernel: [  222.470749] python3 (1725) used greatest stack depth: 13480 bytes left
Apr 21 00:13:20 ubuntu kernel: [  222.523815] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:13:20 ubuntu kernel: [  222.528606] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:17:01 ubuntu kernel: [  443.536886] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:17:01 ubuntu kernel: [  443.541865] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:17:01 ubuntu CRON[1731]: (root) CMD (   cd / && run-parts --report /etc/cron.hourly)
Apr 21 00:17:01 ubuntu kernel: [  443.588701] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:17:01 ubuntu kernel: [  443.593883] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:17:01 ubuntu kernel: [  443.729550] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:17:01 ubuntu kernel: [  443.729931] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:20:05 ubuntu systemd[1]: Starting Message of the Day...
Apr 21 00:20:06 ubuntu kernel: [  628.020527] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:20:06 ubuntu kernel: [  628.020905] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:20:08 ubuntu 50-motd-news[1733]: dpkg-query: no packages found matching curl
Apr 21 00:20:08 ubuntu kernel: [  630.234977] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:20:08 ubuntu kernel: [  630.243414] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:20:09 ubuntu kernel: [  631.083943] systemd-journald[1076]: Failed to open system journal: Not a directory
Apr 21 00:20:09 ubuntu systemd[1]: Started Message of the Day.
Apr 21 00:20:09 ubuntu kernel: [  631.100106] systemd-journald[1076]: Failed to open system journal: Not a directory
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
Apr 21 06:56:03 ubuntu systemd-random-seed[1297]: Failed to read seed from /var/lib/systemd/random-seed: Is a directory
Apr 21 06:56:03 ubuntu systemd-sysctl[1298]: Couldn't write '1' to 'kernel/yama/ptrace_scope', ignoring: No such file or directory
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
Apr 21 06:56:03 ubuntu systemd-sysctl[1298]: Couldn't write 'fq_codel' to 'net/core/default_qdisc', ignoring: No such file or directory
Apr 21 06:56:03 ubuntu systemd[1]: Started Apply Kernel Variables.
Apr 21 06:56:03 ubuntu systemd[1]: Starting Flush Journal to Persistent Storage...
Apr 21 06:56:03 ubuntu systemd[1]: Started Create Static Device Nodes in /dev.
Apr 21 06:56:03 ubuntu systemd[1]: Starting udev Kernel Device Manager...
Apr 21 06:56:03 ubuntu systemd[1]: Started udev Coldplug all Devices.
Apr 21 06:56:03 ubuntu systemd[1]: Started Set the console keyboard layout.
Apr 21 06:56:03 ubuntu systemd[1]: Started Flush Journal to Persistent Storage.
Apr 21 06:56:03 ubuntu systemd[1]: Reached target Local File Systems (Pre).
Apr 21 06:56:03 ubuntu systemd[1]: Reached target Local File Systems.
Apr 21 06:56:03 ubuntu systemd[1]: Starting Create Volatile Files and Directories...
Apr 21 06:56:03 ubuntu systemd[1]: Starting Set console font and keymap...
Apr 21 06:56:03 ubuntu systemd[1]: Starting Enable support for additional executable binary formats...
Apr 21 06:56:03 ubuntu systemd[1]: proc-sys-fs-binfmt_misc.automount: Got automount request for /proc/sys/fs/binfmt_misc, triggered by 1589 (update-binfmts)
Apr 21 06:56:03 ubuntu systemd[1]: Mounting Arbitrary Executable File Formats File System...
Apr 21 06:56:03 ubuntu systemd[1]: Started Set console font and keymap.
Apr 21 06:56:03 ubuntu systemd[1]: Mounted Arbitrary Executable File Formats File System.
Apr 21 06:56:03 ubuntu systemd[1]: Started Enable support for additional executable binary formats.
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
Apr 21 06:56:03 ubuntu systemd-tmpfiles[1587]: "/var/lib/systemd/coredump" already exists and is not a directory.
Apr 21 06:56:03 ubuntu systemd-tmpfiles[1587]: ACL operation on "/var/log/journal/c6f04ae9b6ea4a3ab3b02d6805ef9da7" failed: Permission denied
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
Apr 21 06:56:03 ubuntu systemd[1]: systemd-tmpfiles-setup.service: Main process exited, code=exited, status=1/FAILURE
Apr 21 06:56:03 ubuntu systemd[1]: systemd-tmpfiles-setup.service: Failed with result 'exit-code'.
Apr 21 06:56:03 ubuntu systemd[1]: Failed to start Create Volatile Files and Directories.
Apr 21 06:56:03 ubuntu systemd[1]: Starting Update UTMP about System Boot/Shutdown...
Apr 21 06:56:03 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 06:56:03 ubuntu systemd[1595]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 06:56:03 ubuntu systemd[1595]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 06:56:03 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 1.
Apr 21 06:56:03 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 06:56:03 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 06:56:03 ubuntu systemd[1]: Started Update UTMP about System Boot/Shutdown.
Apr 21 06:56:03 ubuntu systemd[1599]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 06:56:03 ubuntu systemd[1599]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 06:56:03 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 2.
Apr 21 06:56:03 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 06:56:03 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 06:56:03 ubuntu systemd[1]: Started udev Kernel Device Manager.
Apr 21 06:56:03 ubuntu systemd[1]: Starting Network Service...
Apr 21 06:56:03 ubuntu systemd[1602]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 06:56:03 ubuntu systemd[1602]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 06:56:03 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 3.
Apr 21 06:56:03 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 06:56:03 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 06:56:03 ubuntu systemd[1611]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 06:56:03 ubuntu systemd[1611]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 06:56:03 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 4.
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
Apr 21 06:56:03 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 06:56:03 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 06:56:03 ubuntu systemd[1620]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 06:56:03 ubuntu systemd[1620]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 06:56:03 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 5.
Apr 21 06:56:03 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Start request repeated too quickly.
Apr 21 06:56:03 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 06:56:03 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 06:56:03 ubuntu systemd[1]: Reached target System Initialization.
Apr 21 06:56:03 ubuntu systemd[1]: Started Daily Cleanup of Temporary Directories.
Apr 21 06:56:03 ubuntu systemd[1]: Listening on D-Bus System Message Bus Socket.
Apr 21 06:56:03 ubuntu systemd[1]: Reached target Sockets.
Apr 21 06:56:03 ubuntu systemd[1]: Reached target Basic System.
Apr 21 06:56:03 ubuntu systemd[1]: Starting System Logging Service...
Apr 21 06:56:03 ubuntu systemd[1]: Started Regular background program processing daemon.
Apr 21 06:56:03 ubuntu systemd[1]: Started D-Bus System Message Bus.
Apr 21 06:56:03 ubuntu cron[1625]: (CRON) INFO (pidfile fd = 3)
Apr 21 06:56:03 ubuntu cron[1625]: (CRON) INFO (Running @reboot jobs)
Apr 21 06:56:03 ubuntu systemd-networkd[1604]: Enumeration completed
Apr 21 06:56:03 ubuntu rsyslogd: imuxsock: Acquired UNIX socket '/run/systemd/journal/syslog' (fd 3) from systemd.  [v8.32.0]
Apr 21 06:56:03 ubuntu rsyslogd: rsyslogd's groupid changed to 106
Apr 21 06:56:03 ubuntu rsyslogd: rsyslogd's userid changed to 102
Apr 21 06:56:03 ubuntu rsyslogd:  [origin software="rsyslogd" swVersion="8.32.0" x-pid="1624" x-info="http://www.rsyslog.com"] start
Apr 21 06:56:03 ubuntu kernel: [    4.723456] Freeing unused kernel memory: 1224K
Apr 21 06:56:03 ubuntu kernel: [    4.723859] Write protecting the kernel read-only data: 18432k
Apr 21 06:56:03 ubuntu kernel: [    4.730018] Freeing unused kernel memory: 2004K
Apr 21 06:56:03 ubuntu kernel: [    4.735596] Freeing unused kernel memory: 380K
Apr 21 06:56:03 ubuntu kernel: [    5.542655] random: crng init done
Apr 21 06:56:03 ubuntu kernel: [    5.584106] systemd[1]: systemd 237 running in system mode. (+PAM +AUDIT +SELINUX +IMA +APPARMOR +SMACK +SYSVINIT +UTMP +LIBCRYPTSETUP +GCRYPT +GNUTLS +ACL +XZ +LZ4 +SECCOMP +BLKID +ELFUTILS +KMOD -IDN2 +IDN -PCRE2 default-hierarchy=hybrid)
Apr 21 06:56:03 ubuntu kernel: [    5.586081] systemd[1]: Detected virtualization qemu.
Apr 21 06:56:03 ubuntu kernel: [    5.586081] systemd[1]: Detected architecture x86-64.
Apr 21 06:56:03 ubuntu kernel: [    5.628844] systemd[1]: Set hostname to <ubuntu>.
Apr 21 06:56:03 ubuntu kernel: [    6.414124] systemd-debug-g (1053) used greatest stack depth: 14208 bytes left
Apr 21 06:56:03 ubuntu kernel: [    6.508766] systemd-cryptse (1052) used greatest stack depth: 13808 bytes left
Apr 21 06:56:03 ubuntu kernel: [    7.315678] systemd-sysv-ge (1060) used greatest stack depth: 13680 bytes left
Apr 21 06:56:03 ubuntu kernel: [    8.368847] systemd[1]: Reached target Swap.
Apr 21 06:56:03 ubuntu kernel: [    8.385668] systemd[1]: Created slice System Slice.
Apr 21 06:56:03 ubuntu kernel: [    8.394871] systemd[1]: Listening on udev Control Socket.
Apr 21 06:56:03 ubuntu kernel: [    8.412612] systemd[1]: Listening on Journal Audit Socket.
Apr 21 06:56:03 ubuntu kernel: [    8.419475] systemd[1]: Created slice system-serial\x2dgetty.slice.
Apr 21 06:56:03 ubuntu kernel: [    8.428464] systemd[1]: Listening on /dev/initctl Compatibility Named Pipe.
Apr 21 06:56:03 ubuntu kernel: [   10.752949] systemd[1]: Starting Load/Save Random Seed...
Apr 21 06:56:03 ubuntu kernel: [   10.868841] systemd[1]: Starting Apply Kernel Variables...
Apr 21 06:56:03 ubuntu kernel: [   11.061607] systemd[1]: Starting Create Static Device Nodes in /dev...
Apr 21 06:56:03 ubuntu kernel: [   11.525679] systemd[1]: systemd-random-seed.service: Main process exited, code=exited, status=1/FAILURE
Apr 21 06:56:03 ubuntu kernel: [   11.594774] systemd[1]: systemd-random-seed.service: Failed with result 'exit-code'.
Apr 21 06:56:03 ubuntu kernel: [   11.666291] systemd[1]: Failed to start Load/Save Random Seed.
Apr 21 06:56:03 ubuntu kernel: [   13.342235] systemd[1]: Started Journal Service.
Apr 21 06:56:03 ubuntu kernel: [   15.140112] systemd-journald[1073]: Received request to flush runtime journal from PID 1
Apr 21 06:56:03 ubuntu kernel: [   15.189365] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   15.201650] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   15.201905] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   15.218880] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   15.222925] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   15.285573] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   15.285814] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   15.297496] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   15.297894] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   20.463969] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   20.466961] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   21.226027] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   21.226380] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   21.232053] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   21.232053] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   21.232053] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   21.232053] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   21.232053] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu kernel: [   21.232053] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:03 ubuntu systemd[1]: Starting Login Service...
Apr 21 06:56:03 ubuntu systemd[1]: Started Message of the Day.
Apr 21 06:56:03 ubuntu systemd[1]: Starting Dispatcher daemon for systemd-networkd...
Apr 21 06:56:03 ubuntu systemd[1]: Reached target System Time Synchronized.
Apr 21 06:56:03 ubuntu systemd[1]: Started Discard unused blocks once a week.
Apr 21 06:56:03 ubuntu systemd[1]: Started Daily apt download activities.
Apr 21 06:56:04 ubuntu systemd[1]: Started Daily apt upgrade and clean activities.
Apr 21 06:56:04 ubuntu systemd[1]: Reached target Timers.
Apr 21 06:56:04 ubuntu systemd[1]: Started Network Service.
Apr 21 06:56:04 ubuntu systemd[1]: Started System Logging Service.
Apr 21 06:56:04 ubuntu systemd[1]: Starting Network Name Resolution...
Apr 21 06:56:05 ubuntu systemd[1]: Started Login Service.
Apr 21 06:56:06 ubuntu systemd-resolved[1638]: Positive Trust Anchors:
Apr 21 06:56:06 ubuntu systemd-resolved[1638]: . IN DS 19036 8 2 49aac11d7b6f6446702e54a1607371607a1a41855200fd2ce1cdde32f24e8fb5
Apr 21 06:56:06 ubuntu systemd-resolved[1638]: . IN DS 20326 8 2 e06d44b80b8f1d39a95c0b0d7c65d08458e880409bbc683457104237c7f8ec8d
Apr 21 06:56:06 ubuntu systemd-resolved[1638]: Negative trust anchors: 10.in-addr.arpa 16.172.in-addr.arpa 17.172.in-addr.arpa 18.172.in-addr.arpa 19.172.in-addr.arpa 20.172.in-addr.arpa 21.172.in-addr.arpa 22.172.in-addr.arpa 23.172.in-addr.arpa 24.172.in-addr.arpa 25.172.in-addr.arpa 26.172.in-addr.arpa 27.172.in-addr.arpa 28.172.in-addr.arpa 29.172.in-addr.arpa 30.172.in-addr.arpa 31.172.in-addr.arpa 168.192.in-addr.arpa d.f.ip6.arpa corp home internal intranet lan local private test
Apr 21 06:56:06 ubuntu systemd-resolved[1638]: Using system hostname 'ubuntu'.
Apr 21 06:56:07 ubuntu systemd[1]: Started Network Name Resolution.
Apr 21 06:56:07 ubuntu systemd[1]: Reached target Network.
Apr 21 06:56:07 ubuntu systemd[1]: Starting Permit User Sessions...
Apr 21 06:56:07 ubuntu systemd[1]: Reached target Host and Network Name Lookups.
Apr 21 06:56:07 ubuntu kernel: [   25.662690] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:07 ubuntu kernel: [   25.662690] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:07 ubuntu systemd[1]: Started Permit User Sessions.
Apr 21 06:56:07 ubuntu kernel: [   25.768217] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:07 ubuntu kernel: [   25.768217] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:07 ubuntu systemd[1]: Starting Set console scheme...
Apr 21 06:56:08 ubuntu kernel: [   26.036852] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:08 ubuntu kernel: [   26.036852] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:08 ubuntu systemd-udevd[1613]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 06:56:08 ubuntu kernel: [   26.095050] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:08 ubuntu kernel: [   26.097629] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:08 ubuntu kernel: [   26.144896] e1000 0000:00:03.0 enp0s3: renamed from eth0
Apr 21 06:56:08 ubuntu kernel: [   26.229374] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:08 ubuntu kernel: [   26.229374] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:08 ubuntu systemd[1]: Started Set console scheme.
Apr 21 06:56:08 ubuntu systemd[1]: Created slice system-getty.slice.
Apr 21 06:56:08 ubuntu systemd-networkd[1604]: eth0: Interface name change detected, eth0 has been renamed to enp0s3.
Apr 21 06:56:08 ubuntu systemd[1]: Started Getty on tty1.
Apr 21 06:56:09 ubuntu systemd[1]: Found device /dev/ttyS0.
Apr 21 06:56:09 ubuntu systemd[1]: Started Serial Getty on ttyS0.
Apr 21 06:56:09 ubuntu systemd[1]: Reached target Login Prompts.
Apr 21 06:56:11 ubuntu systemd-udevd[1623]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 06:56:12 ubuntu systemd-udevd[1616]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 06:56:12 ubuntu systemd[1]: Listening on Load/Save RF Kill Switch Status /dev/rfkill Watch.
Apr 21 06:56:17 ubuntu networkd-dispatcher[1637]: No valid path found for iwconfig
Apr 21 06:56:17 ubuntu kernel: [   35.810186] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:17 ubuntu kernel: [   35.810186] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:17 ubuntu networkd-dispatcher[1637]: No valid path found for iw
Apr 21 06:56:17 ubuntu kernel: [   35.849863] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:17 ubuntu kernel: [   35.851969] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:18 ubuntu systemd[1]: Started Dispatcher daemon for systemd-networkd.
Apr 21 06:56:18 ubuntu kernel: [   36.244393] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:18 ubuntu kernel: [   36.244393] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:18 ubuntu systemd[1]: Reached target Multi-User System.
Apr 21 06:56:18 ubuntu kernel: [   36.293688] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:18 ubuntu kernel: [   36.304792] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:18 ubuntu kernel: [   36.312328] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:18 ubuntu kernel: [   36.312328] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:18 ubuntu systemd[1]: Reached target Graphical Interface.
Apr 21 06:56:18 ubuntu systemd[1]: Starting Update UTMP about System Runlevel Changes...
Apr 21 06:56:18 ubuntu systemd[1]: Started Update UTMP about System Runlevel Changes.
Apr 21 06:56:18 ubuntu systemd[1]: Startup finished in 5.347s (kernel) + 31.282s (userspace) = 36.630s.
Apr 21 06:56:24 ubuntu kernel: [   42.527142] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:24 ubuntu kernel: [   42.536772] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:24 ubuntu systemd[1]: Created slice User Slice of root.
Apr 21 06:56:24 ubuntu kernel: [   42.977269] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:24 ubuntu kernel: [   42.977269] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:25 ubuntu systemd[1]: Starting User Manager for UID 0...
Apr 21 06:56:25 ubuntu kernel: [   43.104363] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:25 ubuntu kernel: [   43.104363] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:25 ubuntu kernel: [   43.276868] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:25 ubuntu kernel: [   43.279863] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:25 ubuntu systemd[1]: Started Session 1 of user root.
Apr 21 06:56:25 ubuntu kernel: [   43.357443] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:25 ubuntu kernel: [   43.357443] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:26 ubuntu systemd[1693]: Reached target Timers.
Apr 21 06:56:26 ubuntu systemd[1693]: Listening on GnuPG cryptographic agent and passphrase cache (restricted).
Apr 21 06:56:26 ubuntu systemd[1693]: Listening on GnuPG cryptographic agent and passphrase cache (access for web browsers).
Apr 21 06:56:26 ubuntu systemd[1693]: Listening on GnuPG network certificate management daemon.
Apr 21 06:56:26 ubuntu systemd[1693]: Listening on GnuPG cryptographic agent and passphrase cache.
Apr 21 06:56:26 ubuntu systemd[1693]: Listening on GnuPG cryptographic agent (ssh-agent emulation).
Apr 21 06:56:26 ubuntu systemd[1693]: Reached target Sockets.
Apr 21 06:56:26 ubuntu systemd[1693]: Reached target Paths.
Apr 21 06:56:26 ubuntu systemd[1693]: Reached target Basic System.
Apr 21 06:56:26 ubuntu systemd[1693]: Reached target Default.
Apr 21 06:56:26 ubuntu systemd[1]: Started User Manager for UID 0.
Apr 21 06:56:26 ubuntu systemd[1693]: Startup finished in 1.130s.
Apr 21 06:56:50 ubuntu kernel: [   68.801282] make (1753) used greatest stack depth: 13440 bytes left
Apr 21 06:56:50 ubuntu kernel: [   68.868025] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:56:50 ubuntu kernel: [   68.875043] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:57:03 ubuntu kernel: [   81.611658] EXT4-fs warning (device sda): ext4_dirent_csum_verify:353: inode #13453: comm make: No space for directory leaf checksum. Please run e2fsck -D.
Apr 21 06:57:03 ubuntu kernel: [   81.615052] EXT4-fs error (device sda): ext4_find_entry:1447: inode #13453: comm make: checksumming directory block 0
Apr 21 06:57:03 ubuntu kernel: [   81.699149] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:57:03 ubuntu kernel: [   81.708578] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:57:03 ubuntu kernel: [   81.719269] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 06:57:03 ubuntu kernel: [   81.719269] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:01:14 ubuntu kernel: [  332.776371] EXT4-fs (sda): error count since last fsck: 10
Apr 21 07:01:14 ubuntu kernel: [  332.780913] EXT4-fs (sda): initial error at time 1587451481: ext4_iget:4782: inode 304474
Apr 21 07:01:14 ubuntu kernel: [  332.782652] EXT4-fs (sda): last error at time 1587452223: ext4_find_entry:1447: inode 13453
Apr 21 07:01:14 ubuntu kernel: [  332.825338] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:01:14 ubuntu kernel: [  332.825338] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:01:14 ubuntu kernel: [  332.875756] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:01:14 ubuntu kernel: [  332.876138] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:01:14 ubuntu kernel: [  332.886865] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:01:14 ubuntu kernel: [  332.887088] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:11:04 ubuntu systemd[1]: Starting Cleanup of Temporary Directories...
Apr 21 07:11:04 ubuntu kernel: [  922.182044] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:11:04 ubuntu kernel: [  922.190011] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:11:04 ubuntu systemd[1]: Started Cleanup of Temporary Directories.
Apr 21 07:11:04 ubuntu kernel: [  922.707454] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:11:04 ubuntu kernel: [  922.707935] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:13:05 ubuntu kernel: [ 1043.968943] EXT4-fs error (device sda): ext4_validate_block_bitmap:385: comm kworker/u9:3: bg 19: bad block bitmap checksum
Apr 21 07:13:05 ubuntu kernel: [ 1043.991147] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:13:05 ubuntu kernel: [ 1043.991147] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:16:50 ubuntu kernel: [ 1268.025152] kworker/dying (1269) used greatest stack depth: 13008 bytes left
Apr 21 07:16:50 ubuntu kernel: [ 1268.045303] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:16:50 ubuntu kernel: [ 1268.045890] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:17:01 ubuntu kernel: [ 1279.475294] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:17:01 ubuntu kernel: [ 1279.475555] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:17:01 ubuntu CRON[4463]: (root) CMD (   cd / && run-parts --report /etc/cron.hourly)
Apr 21 07:17:01 ubuntu kernel: [ 1279.512787] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:17:01 ubuntu kernel: [ 1279.512988] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:17:01 ubuntu kernel: [ 1279.668852] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:17:01 ubuntu kernel: [ 1279.669762] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:43:03 ubuntu systemd[1]: Starting Message of the Day...
Apr 21 07:43:03 ubuntu kernel: [ 2841.727765] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:43:03 ubuntu kernel: [ 2841.729278] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:43:04 ubuntu 50-motd-news[4470]: dpkg-query: no packages found matching curl
Apr 21 07:43:04 ubuntu kernel: [ 2842.254454] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:43:04 ubuntu kernel: [ 2842.254700] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:43:04 ubuntu systemd[1]: Started Message of the Day.
Apr 21 07:43:04 ubuntu kernel: [ 2842.835022] systemd-journald[1073]: Failed to open system journal: Not a directory
Apr 21 07:43:04 ubuntu kernel: [ 2842.837254] systemd-journald[1073]: Failed to open system journal: Not a directory
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
Apr 21 17:03:21 ubuntu systemd-random-seed[1076]: Failed to read seed from /var/lib/systemd/random-seed: Is a directory
Apr 21 17:03:21 ubuntu systemd-sysctl[1237]: Couldn't write '1' to 'kernel/yama/ptrace_scope', ignoring: No such file or directory
Apr 21 17:03:21 ubuntu systemd-sysctl[1237]: Couldn't write 'fq_codel' to 'net/core/default_qdisc', ignoring: No such file or directory
Apr 21 17:03:21 ubuntu systemd[1]: Starting Flush Journal to Persistent Storage...
Apr 21 17:03:21 ubuntu systemd[1]: Started Flush Journal to Persistent Storage.
Apr 21 17:03:21 ubuntu systemd[1]: Started udev Kernel Device Manager.
Apr 21 17:03:21 ubuntu systemd[1]: Starting Network Service...
Apr 21 17:03:21 ubuntu systemd[1]: Started Set the console keyboard layout.
Apr 21 17:03:21 ubuntu systemd[1]: Reached target Local File Systems (Pre).
Apr 21 17:03:21 ubuntu systemd[1]: Reached target Local File Systems.
Apr 21 17:03:21 ubuntu systemd[1]: Starting Create Volatile Files and Directories...
Apr 21 17:03:21 ubuntu systemd[1]: Starting Enable support for additional executable binary formats...
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
Apr 21 17:03:21 ubuntu systemd[1]: Starting Set console font and keymap...
Apr 21 17:03:21 ubuntu systemd[1]: Started udev Coldplug all Devices.
Apr 21 17:03:21 ubuntu systemd[1]: proc-sys-fs-binfmt_misc.automount: Got automount request for /proc/sys/fs/binfmt_misc, triggered by 1602 (update-binfmts)
Apr 21 17:03:21 ubuntu systemd[1]: Mounting Arbitrary Executable File Formats File System...
Apr 21 17:03:21 ubuntu systemd[1]: Started Set console font and keymap.
Apr 21 17:03:21 ubuntu systemd[1]: Mounted Arbitrary Executable File Formats File System.
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
Apr 21 17:03:21 ubuntu systemd-tmpfiles[1584]: "/var/lib/systemd/coredump" already exists and is not a directory.
Apr 21 17:03:21 ubuntu systemd-tmpfiles[1584]: ACL operation on "/var/log/journal/c6f04ae9b6ea4a3ab3b02d6805ef9da7" failed: Permission denied
Apr 21 17:03:21 ubuntu systemd[1]: Started Enable support for additional executable binary formats.
Apr 21 17:03:21 ubuntu systemd[1]: systemd-tmpfiles-setup.service: Main process exited, code=exited, status=1/FAILURE
Apr 21 17:03:21 ubuntu systemd[1]: systemd-tmpfiles-setup.service: Failed with result 'exit-code'.
Apr 21 17:03:21 ubuntu systemd[1]: Failed to start Create Volatile Files and Directories.
Apr 21 17:03:21 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 17:03:21 ubuntu systemd[1]: Starting Update UTMP about System Boot/Shutdown...
Apr 21 17:03:21 ubuntu systemd[1610]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 17:03:21 ubuntu systemd[1610]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
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
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 17:03:21 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 1.
Apr 21 17:03:21 ubuntu systemd[1]: Stopped Network Time Synchronization.
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
Apr 21 17:03:21 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 17:03:21 ubuntu systemd-networkd[1305]: Enumeration completed
Apr 21 17:03:21 ubuntu systemd[1]: Started Network Service.
Apr 21 17:03:21 ubuntu systemd[1]: Starting Network Name Resolution...
Apr 21 17:03:21 ubuntu systemd[1615]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 17:03:21 ubuntu systemd[1615]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 17:03:21 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 2.
Apr 21 17:03:21 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 17:03:21 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 17:03:21 ubuntu systemd[1619]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 17:03:21 ubuntu systemd[1619]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 17:03:21 ubuntu systemd[1]: Started Update UTMP about System Boot/Shutdown.
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 17:03:21 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 3.
Apr 21 17:03:21 ubuntu kernel: [    3.157396] rtc_cmos 00:00: RTC can wake from S4
Apr 21 17:03:21 ubuntu kernel: [    3.165367] input: AT Translated Set 2 keyboard as /devices/platform/i8042/serio0/input/input1
Apr 21 17:03:21 ubuntu kernel: [    3.171838] rtc_cmos 00:00: rtc core: registered rtc_cmos as rtc0
Apr 21 17:03:21 ubuntu kernel: [    3.178598] rtc_cmos 00:00: alarms up to one day, y3k, 114 bytes nvram, hpet irqs
Apr 21 17:03:21 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 17:03:21 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 17:03:21 ubuntu systemd[1622]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 17:03:21 ubuntu systemd[1622]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 17:03:21 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 4.
Apr 21 17:03:21 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 17:03:21 ubuntu kernel: [    3.214167] device-mapper: ioctl: 4.37.0-ioctl (2017-09-20) initialised: dm-devel@redhat.com
Apr 21 17:03:21 ubuntu kernel: [    3.220904] hidraw: raw HID events driver (C) Jiri Kosina
Apr 21 17:03:21 ubuntu systemd[1]: Starting Network Time Synchronization...
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
Apr 21 17:03:21 ubuntu kernel: [    6.551626] systemd[1]: systemd 237 running in system mode. (+PAM +AUDIT +SELINUX +IMA +APPARMOR +SMACK +SYSVINIT +UTMP +LIBCRYPTSETUP +GCRYPT +GNUTLS +ACL +XZ +LZ4 +SECCOMP +BLKID +ELFUTILS +KMOD -IDN2 +IDN -PCRE2 default-hierarchy=hybrid)
Apr 21 17:03:21 ubuntu kernel: [    6.558169] systemd[1]: Detected virtualization qemu.
Apr 21 17:03:21 ubuntu kernel: [    6.560350] systemd[1]: Detected architecture x86-64.
Apr 21 17:03:21 ubuntu kernel: [    6.592118] systemd[1]: Set hostname to <ubuntu>.
Apr 21 17:03:21 ubuntu kernel: [    7.600664] systemd-debug-g (1054) used greatest stack depth: 13832 bytes left
Apr 21 17:03:21 ubuntu kernel: [    8.360438] systemd-fstab-g (1055) used greatest stack depth: 13760 bytes left
Apr 21 17:03:21 ubuntu kernel: [    8.676429] systemd-sysv-ge (1061) used greatest stack depth: 13288 bytes left
Apr 21 17:03:21 ubuntu kernel: [    9.894696] systemd[1]: Reached target Swap.
Apr 21 17:03:21 ubuntu kernel: [    9.910948] systemd[1]: Created slice User and Session Slice.
Apr 21 17:03:21 ubuntu kernel: [    9.921568] systemd[1]: Started Forward Password Requests to Wall Directory Watch.
Apr 21 17:03:21 ubuntu kernel: [    9.927978] systemd[1]: Reached target Remote File Systems.
Apr 21 17:03:21 ubuntu kernel: [    9.938063] systemd[1]: Started Dispatch Password Requests to Console Directory Watch.
Apr 21 17:03:21 ubuntu kernel: [    9.941756] systemd[1]: Reached target Paths.
Apr 21 17:03:21 ubuntu kernel: [   11.637157] systemd[1]: Mounted Kernel Debug File System.
Apr 21 17:03:21 ubuntu kernel: [   11.738156] systemd[1]: Mounted Huge Pages File System.
Apr 21 17:03:21 ubuntu kernel: [   11.792107] systemd[1]: Started Remount Root and Kernel File Systems.
Apr 21 17:03:21 ubuntu kernel: [   11.895744] systemd[1]: Mounted POSIX Message Queue File System.
Apr 21 17:03:21 ubuntu kernel: [   12.249846] systemd[1]: Starting Load/Save Random Seed...
Apr 21 17:03:21 ubuntu kernel: [   13.048739] systemd[1]: Started Load Kernel Modules.
Apr 21 17:03:21 ubuntu kernel: [   13.174971] systemd[1]: Starting Apply Kernel Variables...
Apr 21 17:03:21 ubuntu kernel: [   13.321236] systemd[1]: systemd-random-seed.service: Main process exited, code=exited, status=1/FAILURE
Apr 21 17:03:21 ubuntu kernel: [   13.342528] systemd[1]: systemd-random-seed.service: Failed with result 'exit-code'.
Apr 21 17:03:21 ubuntu kernel: [   13.443790] systemd[1]: Failed to start Load/Save Random Seed.
Apr 21 17:03:21 ubuntu kernel: [   16.812242] systemd-journald[1066]: Received request to flush runtime journal from PID 1
Apr 21 17:03:21 ubuntu kernel: [   16.892535] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   16.921586] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   16.922158] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   17.143346] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   17.143346] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   17.611056] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   17.614924] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   17.727936] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   17.731649] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   21.879878] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   21.892966] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   22.048173] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   22.052061] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   22.111585] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   22.111878] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   22.449342] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   22.449342] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   22.481763] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   22.486076] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   26.932123] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   26.932123] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   26.944026] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   26.946535] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   26.959042] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   26.961755] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   26.971763] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   26.971988] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   27.028536] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu kernel: [   27.028890] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:21 ubuntu systemd[1625]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 17:03:21 ubuntu systemd[1625]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 17:03:21 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 5.
Apr 21 17:03:21 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Start request repeated too quickly.
Apr 21 17:03:21 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 17:03:21 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 17:03:21 ubuntu systemd[1]: Reached target System Time Synchronized.
Apr 21 17:03:21 ubuntu systemd[1]: Reached target System Initialization.
Apr 21 17:03:21 ubuntu systemd[1]: Listening on D-Bus System Message Bus Socket.
Apr 21 17:03:21 ubuntu systemd[1]: Reached target Sockets.
Apr 21 17:03:21 ubuntu systemd[1]: Reached target Basic System.
Apr 21 17:03:21 ubuntu systemd[1]: Started Daily Cleanup of Temporary Directories.
Apr 21 17:03:21 ubuntu systemd[1]: Starting System Logging Service...
Apr 21 17:03:21 ubuntu systemd[1]: Started Daily apt download activities.
Apr 21 17:03:21 ubuntu systemd[1]: Started Message of the Day.
Apr 21 17:03:21 ubuntu systemd[1]: Started Regular background program processing daemon.
Apr 21 17:03:21 ubuntu systemd[1]: Started Daily apt upgrade and clean activities.
Apr 21 17:03:21 ubuntu systemd[1]: Started Discard unused blocks once a week.
Apr 21 17:03:21 ubuntu systemd[1]: Reached target Timers.
Apr 21 17:03:21 ubuntu systemd[1]: Started D-Bus System Message Bus.
Apr 21 17:03:21 ubuntu cron[1629]: (CRON) INFO (pidfile fd = 3)
Apr 21 17:03:21 ubuntu systemd-resolved[1616]: Positive Trust Anchors:
Apr 21 17:03:21 ubuntu systemd-resolved[1616]: . IN DS 19036 8 2 49aac11d7b6f6446702e54a1607371607a1a41855200fd2ce1cdde32f24e8fb5
Apr 21 17:03:21 ubuntu cron[1629]: (CRON) INFO (Running @reboot jobs)
Apr 21 17:03:21 ubuntu systemd-resolved[1616]: . IN DS 20326 8 2 e06d44b80b8f1d39a95c0b0d7c65d08458e880409bbc683457104237c7f8ec8d
Apr 21 17:03:21 ubuntu systemd-resolved[1616]: Negative trust anchors: 10.in-addr.arpa 16.172.in-addr.arpa 17.172.in-addr.arpa 18.172.in-addr.arpa 19.172.in-addr.arpa 20.172.in-addr.arpa 21.172.in-addr.arpa 22.172.in-addr.arpa 23.172.in-addr.arpa 24.172.in-addr.arpa 25.172.in-addr.arpa 26.172.in-addr.arpa 27.172.in-addr.arpa 28.172.in-addr.arpa 29.172.in-addr.arpa 30.172.in-addr.arpa 31.172.in-addr.arpa 168.192.in-addr.arpa d.f.ip6.arpa corp home internal intranet lan local private test
Apr 21 17:03:21 ubuntu systemd-resolved[1616]: Using system hostname 'ubuntu'.
Apr 21 17:03:21 ubuntu rsyslogd: imuxsock: Acquired UNIX socket '/run/systemd/journal/syslog' (fd 3) from systemd.  [v8.32.0]
Apr 21 17:03:21 ubuntu systemd[1]: Starting Dispatcher daemon for systemd-networkd...
Apr 21 17:03:21 ubuntu rsyslogd: rsyslogd's groupid changed to 106
Apr 21 17:03:21 ubuntu rsyslogd: rsyslogd's userid changed to 102
Apr 21 17:03:21 ubuntu rsyslogd:  [origin software="rsyslogd" swVersion="8.32.0" x-pid="1628" x-info="http://www.rsyslog.com"] start
Apr 21 17:03:21 ubuntu systemd[1]: Starting Login Service...
Apr 21 17:03:22 ubuntu systemd[1]: Started Network Name Resolution.
Apr 21 17:03:22 ubuntu systemd[1]: Started System Logging Service.
Apr 21 17:03:22 ubuntu systemd[1]: Reached target Host and Network Name Lookups.
Apr 21 17:03:22 ubuntu systemd[1]: Reached target Network.
Apr 21 17:03:22 ubuntu systemd[1]: Starting Permit User Sessions...
Apr 21 17:03:22 ubuntu systemd-udevd[1327]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 17:03:23 ubuntu kernel: [   31.045707] e1000 0000:00:03.0 enp0s3: renamed from eth0
Apr 21 17:03:23 ubuntu systemd[1]: Started Permit User Sessions.
Apr 21 17:03:23 ubuntu systemd-networkd[1305]: eth0: Interface name change detected, eth0 has been renamed to enp0s3.
Apr 21 17:03:23 ubuntu systemd[1]: Starting Set console scheme...
Apr 21 17:03:23 ubuntu systemd[1]: Found device /dev/ttyS0.
Apr 21 17:03:23 ubuntu systemd[1]: Started Serial Getty on ttyS0.
Apr 21 17:03:23 ubuntu systemd[1]: Started Set console scheme.
Apr 21 17:03:23 ubuntu systemd[1]: Started Login Service.
Apr 21 17:03:23 ubuntu systemd[1]: Created slice system-getty.slice.
Apr 21 17:03:23 ubuntu kernel: [   31.972767] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:23 ubuntu kernel: [   31.972767] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:24 ubuntu systemd[1]: Started Getty on tty1.
Apr 21 17:03:24 ubuntu kernel: [   32.083733] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:24 ubuntu kernel: [   32.084084] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:24 ubuntu systemd[1]: Reached target Login Prompts.
Apr 21 17:03:24 ubuntu kernel: [   32.156161] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:24 ubuntu kernel: [   32.156510] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:25 ubuntu systemd-udevd[1406]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 17:03:25 ubuntu kernel: [   33.781898] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:25 ubuntu kernel: [   33.789545] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:25 ubuntu systemd-udevd[1375]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 17:03:25 ubuntu kernel: [   33.865869] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:25 ubuntu kernel: [   33.865869] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:26 ubuntu systemd[1]: Listening on Load/Save RF Kill Switch Status /dev/rfkill Watch.
Apr 21 17:03:33 ubuntu networkd-dispatcher[1636]: No valid path found for iwconfig
Apr 21 17:03:33 ubuntu kernel: [   41.028641] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:33 ubuntu kernel: [   41.035479] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:33 ubuntu networkd-dispatcher[1636]: No valid path found for iw
Apr 21 17:03:33 ubuntu kernel: [   41.082220] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:33 ubuntu kernel: [   41.082220] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:33 ubuntu systemd[1]: Started Dispatcher daemon for systemd-networkd.
Apr 21 17:03:33 ubuntu kernel: [   41.427976] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:33 ubuntu kernel: [   41.437020] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:33 ubuntu kernel: [   41.476618] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:33 ubuntu kernel: [   41.476618] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:33 ubuntu systemd[1]: Reached target Multi-User System.
Apr 21 17:03:33 ubuntu systemd[1]: Reached target Graphical Interface.
Apr 21 17:03:33 ubuntu kernel: [   41.516112] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:33 ubuntu kernel: [   41.518990] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:03:33 ubuntu systemd[1]: Starting Update UTMP about System Runlevel Changes...
Apr 21 17:03:33 ubuntu systemd[1]: Started Update UTMP about System Runlevel Changes.
Apr 21 17:03:33 ubuntu systemd[1]: Startup finished in 6.227s (kernel) + 35.588s (userspace) = 41.816s.
Apr 21 17:05:12 ubuntu kernel: [  140.958215] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:05:12 ubuntu kernel: [  140.971340] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:05:13 ubuntu systemd[1]: Created slice User Slice of root.
Apr 21 17:05:13 ubuntu kernel: [  141.560945] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:05:13 ubuntu kernel: [  141.562813] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:05:13 ubuntu systemd[1]: Starting User Manager for UID 0...
Apr 21 17:05:13 ubuntu kernel: [  141.769812] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:05:13 ubuntu kernel: [  141.770013] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:05:13 ubuntu kernel: [  141.892838] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:05:13 ubuntu kernel: [  141.893095] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:05:13 ubuntu systemd[1]: Started Session 1 of user root.
Apr 21 17:05:13 ubuntu kernel: [  141.967709] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:05:13 ubuntu kernel: [  141.968014] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:05:15 ubuntu systemd[1688]: Listening on GnuPG network certificate management daemon.
Apr 21 17:05:15 ubuntu systemd[1688]: Listening on GnuPG cryptographic agent (ssh-agent emulation).
Apr 21 17:05:15 ubuntu systemd[1688]: Reached target Timers.
Apr 21 17:05:15 ubuntu systemd[1688]: Listening on GnuPG cryptographic agent and passphrase cache (access for web browsers).
Apr 21 17:05:15 ubuntu systemd[1688]: Reached target Paths.
Apr 21 17:05:15 ubuntu systemd[1688]: Listening on GnuPG cryptographic agent and passphrase cache (restricted).
Apr 21 17:05:15 ubuntu systemd[1688]: Listening on GnuPG cryptographic agent and passphrase cache.
Apr 21 17:05:15 ubuntu systemd[1688]: Reached target Sockets.
Apr 21 17:05:15 ubuntu systemd[1688]: Reached target Basic System.
Apr 21 17:05:15 ubuntu systemd[1]: Started User Manager for UID 0.
Apr 21 17:05:15 ubuntu systemd[1688]: Reached target Default.
Apr 21 17:05:15 ubuntu systemd[1688]: Startup finished in 1.212s.
Apr 21 17:08:24 ubuntu kernel: [  332.768329] EXT4-fs (sda): error count since last fsck: 11
Apr 21 17:08:24 ubuntu kernel: [  332.768738] EXT4-fs (sda): initial error at time 1587451481: ext4_iget:4782: inode 304474
Apr 21 17:08:24 ubuntu kernel: [  332.768738] EXT4-fs (sda): last error at time 1587453185: ext4_validate_block_bitmap:385: inode 13453
Apr 21 17:08:24 ubuntu kernel: [  332.816433] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:08:24 ubuntu kernel: [  332.818606] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:08:24 ubuntu kernel: [  332.834773] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:08:24 ubuntu kernel: [  332.834966] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:08:24 ubuntu kernel: [  332.837501] systemd-journald[1066]: Failed to open system journal: Not a directory
Apr 21 17:08:24 ubuntu kernel: [  332.837806] systemd-journald[1066]: Failed to open system journal: Not a directory
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
Apr 21 17:33:13 ubuntu systemd-sysctl[1081]: Couldn't write '1' to 'kernel/yama/ptrace_scope', ignoring: No such file or directory
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
Apr 21 17:33:13 ubuntu systemd-sysctl[1081]: Couldn't write 'fq_codel' to 'net/core/default_qdisc', ignoring: No such file or directory
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
Apr 21 17:33:13 ubuntu systemd[1]: Starting Flush Journal to Persistent Storage...
Apr 21 17:33:13 ubuntu systemd[1]: Started Flush Journal to Persistent Storage.
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
Apr 21 17:33:13 ubuntu systemd[1]: Started udev Kernel Device Manager.
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
Apr 21 17:33:13 ubuntu systemd[1]: Starting Network Service...
Apr 21 17:33:13 ubuntu systemd[1]: Started Set the console keyboard layout.
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
Apr 21 17:33:13 ubuntu systemd[1]: Reached target Local File Systems (Pre).
Apr 21 17:33:13 ubuntu systemd[1]: Reached target Local File Systems.
Apr 21 17:33:13 ubuntu systemd[1]: Starting Set console font and keymap...
Apr 21 17:33:13 ubuntu systemd[1]: Starting Enable support for additional executable binary formats...
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
Apr 21 17:33:13 ubuntu systemd[1]: Starting Create Volatile Files and Directories...
Apr 21 17:33:13 ubuntu systemd[1]: Started udev Coldplug all Devices.
Apr 21 17:33:13 ubuntu systemd[1]: proc-sys-fs-binfmt_misc.automount: Got automount request for /proc/sys/fs/binfmt_misc, triggered by 1551 (update-binfmts)
Apr 21 17:33:13 ubuntu systemd[1]: Mounting Arbitrary Executable File Formats File System...
Apr 21 17:33:13 ubuntu systemd[1]: Started Set console font and keymap.
Apr 21 17:33:13 ubuntu systemd-networkd[1307]: Enumeration completed
Apr 21 17:33:13 ubuntu systemd[1]: Started Network Service.
Apr 21 17:33:13 ubuntu systemd-tmpfiles[1586]: "/var/lib/systemd/coredump" already exists and is not a directory.
Apr 21 17:33:13 ubuntu systemd[1]: Mounted Arbitrary Executable File Formats File System.
Apr 21 17:33:13 ubuntu systemd[1]: Started Enable support for additional executable binary formats.
Apr 21 17:33:13 ubuntu systemd-tmpfiles[1586]: ACL operation on "/var/log/journal/c6f04ae9b6ea4a3ab3b02d6805ef9da7" failed: Permission denied
Apr 21 17:33:13 ubuntu systemd[1]: systemd-tmpfiles-setup.service: Main process exited, code=exited, status=1/FAILURE
Apr 21 17:33:13 ubuntu kernel: [    1.908884] pci_bus 0000:00: resource 5 [io  0x0d00-0xffff window]
Apr 21 17:33:13 ubuntu kernel: [    1.908896] pci_bus 0000:00: resource 6 [mem 0x000a0000-0x000bffff window]
Apr 21 17:33:13 ubuntu kernel: [    1.908905] pci_bus 0000:00: resource 7 [mem 0x20000000-0xfebfffff window]
Apr 21 17:33:13 ubuntu kernel: [    1.908914] pci_bus 0000:00: resource 8 [mem 0x100000000-0x17fffffff window]
Apr 21 17:33:13 ubuntu kernel: [    1.910052] NET: Registered protocol family 2
Apr 21 17:33:13 ubuntu kernel: [    1.942771] TCP established hash table entries: 4096 (order: 3, 32768 bytes)
Apr 21 17:33:13 ubuntu systemd[1]: systemd-tmpfiles-setup.service: Failed with result 'exit-code'.
Apr 21 17:33:13 ubuntu systemd[1]: Failed to start Create Volatile Files and Directories.
Apr 21 17:33:13 ubuntu systemd[1]: Starting Update UTMP about System Boot/Shutdown...
Apr 21 17:33:13 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 17:33:13 ubuntu systemd[1]: Starting Network Name Resolution...
Apr 21 17:33:13 ubuntu systemd[1614]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 17:33:13 ubuntu systemd[1614]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
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
Apr 21 17:33:13 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 17:33:13 ubuntu kernel: [    2.144011] Initialise system trusted keyrings
Apr 21 17:33:13 ubuntu kernel: [    2.153097] workingset: timestamp_bits=56 max_order=17 bucket_order=0
Apr 21 17:33:13 ubuntu kernel: [    2.366127] NFS: Registering the id_resolver key type
Apr 21 17:33:13 ubuntu kernel: [    2.367989] Key type id_resolver registered
Apr 21 17:33:13 ubuntu kernel: [    2.369472] Key type id_legacy registered
Apr 21 17:33:13 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 17:33:13 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 17:33:13 ubuntu kernel: [    2.384171] SELinux:  Registering netfilter hooks
Apr 21 17:33:13 ubuntu kernel: [    2.446075] Key type asymmetric registered
Apr 21 17:33:13 ubuntu kernel: [    2.446595] Asymmetric key parser 'x509' registered
Apr 21 17:33:13 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 17:33:13 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 1.
Apr 21 17:33:13 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 17:33:13 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 17:33:13 ubuntu systemd[1620]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 17:33:13 ubuntu systemd[1620]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 17:33:13 ubuntu systemd[1]: Started Update UTMP about System Boot/Shutdown.
Apr 21 17:33:13 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
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
Apr 21 17:33:14 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
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
Apr 21 17:33:14 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 17:33:14 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 17:33:14 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 2.
Apr 21 17:33:14 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 17:33:14 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 17:33:14 ubuntu systemd[1623]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 17:33:14 ubuntu systemd[1623]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 17:33:14 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 17:33:14 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 17:33:14 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 17:33:14 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 17:33:14 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 3.
Apr 21 17:33:14 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 17:33:14 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 17:33:14 ubuntu systemd[1627]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 17:33:14 ubuntu systemd[1627]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 17:33:14 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 17:33:14 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 17:33:14 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 17:33:14 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 17:33:14 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 4.
Apr 21 17:33:14 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 17:33:14 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 17:33:14 ubuntu systemd[1630]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 17:33:14 ubuntu systemd[1630]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 17:33:14 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 17:33:14 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 17:33:14 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 17:33:14 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 17:33:14 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 5.
Apr 21 17:33:14 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 17:33:14 ubuntu systemd-resolved[1616]: Positive Trust Anchors:
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
Apr 21 17:33:14 ubuntu systemd-resolved[1616]: . IN DS 19036 8 2 49aac11d7b6f6446702e54a1607371607a1a41855200fd2ce1cdde32f24e8fb5
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
Apr 21 17:33:14 ubuntu systemd-resolved[1616]: . IN DS 20326 8 2 e06d44b80b8f1d39a95c0b0d7c65d08458e880409bbc683457104237c7f8ec8d
Apr 21 17:33:14 ubuntu systemd-resolved[1616]: Negative trust anchors: 10.in-addr.arpa 16.172.in-addr.arpa 17.172.in-addr.arpa 18.172.in-addr.arpa 19.172.in-addr.arpa 20.172.in-addr.arpa 21.172.in-addr.arpa 22.172.in-addr.arpa 23.172.in-addr.arpa 24.172.in-addr.arpa 25.172.in-addr.arpa 26.172.in-addr.arpa 27.172.in-addr.arpa 28.172.in-addr.arpa 29.172.in-addr.arpa 30.172.in-addr.arpa 31.172.in-addr.arpa 168.192.in-addr.arpa d.f.ip6.arpa corp home internal intranet lan local private test
Apr 21 17:33:14 ubuntu systemd[1]: systemd-timesyncd.service: Start request repeated too quickly.
Apr 21 17:33:14 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 17:33:14 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 17:33:14 ubuntu systemd[1]: Reached target System Initialization.
Apr 21 17:33:14 ubuntu systemd[1]: Started Daily Cleanup of Temporary Directories.
Apr 21 17:33:14 ubuntu systemd[1]: Listening on D-Bus System Message Bus Socket.
Apr 21 17:33:14 ubuntu systemd-resolved[1616]: Using system hostname 'ubuntu'.
Apr 21 17:33:14 ubuntu systemd[1]: Reached target Sockets.
Apr 21 17:33:14 ubuntu systemd[1]: Reached target Basic System.
Apr 21 17:33:14 ubuntu systemd[1]: Starting System Logging Service...
Apr 21 17:33:14 ubuntu systemd[1]: Starting Dispatcher daemon for systemd-networkd...
Apr 21 17:33:14 ubuntu systemd[1]: Started Regular background program processing daemon.
Apr 21 17:33:14 ubuntu systemd[1]: Starting Login Service...
Apr 21 17:33:14 ubuntu systemd[1]: Started D-Bus System Message Bus.
Apr 21 17:33:14 ubuntu cron[1636]: (CRON) INFO (pidfile fd = 3)
Apr 21 17:33:14 ubuntu cron[1636]: (CRON) INFO (Running @reboot jobs)
Apr 21 17:33:13 ubuntu rsyslogd: imuxsock: Acquired UNIX socket '/run/systemd/journal/syslog' (fd 3) from systemd.  [v8.32.0]
Apr 21 17:33:13 ubuntu rsyslogd: rsyslogd's groupid changed to 106
Apr 21 17:33:13 ubuntu rsyslogd: rsyslogd's userid changed to 102
Apr 21 17:33:13 ubuntu rsyslogd:  [origin software="rsyslogd" swVersion="8.32.0" x-pid="1634" x-info="http://www.rsyslog.com"] start
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
Apr 21 17:33:14 ubuntu kernel: [    6.079479] systemd[1]: systemd 237 running in system mode. (+PAM +AUDIT +SELINUX +IMA +APPARMOR +SMACK +SYSVINIT +UTMP +LIBCRYPTSETUP +GCRYPT +GNUTLS +ACL +XZ +LZ4 +SECCOMP +BLKID +ELFUTILS +KMOD -IDN2 +IDN -PCRE2 default-hierarchy=hybrid)
Apr 21 17:33:14 ubuntu kernel: [    6.083900] systemd[1]: Detected virtualization qemu.
Apr 21 17:33:14 ubuntu kernel: [    6.085111] systemd[1]: Detected architecture x86-64.
Apr 21 17:33:14 ubuntu kernel: [    6.152025] systemd[1]: Set hostname to <ubuntu>.
Apr 21 17:33:14 ubuntu kernel: [    7.822546] systemd-debug-g (1057) used greatest stack depth: 14208 bytes left
Apr 21 17:33:14 ubuntu kernel: [    7.938972] systemd-gpt-aut (1060) used greatest stack depth: 14064 bytes left
Apr 21 17:33:14 ubuntu kernel: [    8.036355] systemd-cryptse (1056) used greatest stack depth: 13392 bytes left
Apr 21 17:33:14 ubuntu kernel: [    9.603220] systemd[1]: Started Forward Password Requests to Wall Directory Watch.
Apr 21 17:33:14 ubuntu kernel: [    9.654561] systemd[1]: Created slice User and Session Slice.
Apr 21 17:33:14 ubuntu kernel: [    9.661125] systemd[1]: Reached target Remote File Systems.
Apr 21 17:33:14 ubuntu kernel: [    9.683164] systemd[1]: Set up automount Arbitrary Executable File Formats File System Automount Point.
Apr 21 17:33:14 ubuntu kernel: [    9.701945] systemd[1]: Started Dispatch Password Requests to Console Directory Watch.
Apr 21 17:33:14 ubuntu kernel: [    9.710134] systemd[1]: Reached target Local Encrypted Volumes.
Apr 21 17:33:14 ubuntu kernel: [   11.841973] systemd[1]: Starting Create Static Device Nodes in /dev...
Apr 21 17:33:14 ubuntu kernel: [   12.098605] systemd[1]: Started Load Kernel Modules.
Apr 21 17:33:14 ubuntu kernel: [   12.207486] systemd[1]: Mounted Huge Pages File System.
Apr 21 17:33:14 ubuntu kernel: [   12.317544] systemd[1]: Started Remount Root and Kernel File Systems.
Apr 21 17:33:14 ubuntu kernel: [   12.369147] systemd[1]: Mounted POSIX Message Queue File System.
Apr 21 17:33:14 ubuntu kernel: [   12.440610] systemd[1]: Mounted Kernel Debug File System.
Apr 21 17:33:14 ubuntu kernel: [   12.662591] systemd[1]: Starting Load/Save Random Seed...
Apr 21 17:33:14 ubuntu kernel: [   13.092120] systemd[1]: Starting Apply Kernel Variables...
Apr 21 17:33:14 ubuntu kernel: [   13.620705] systemd[1]: Started Load/Save Random Seed.
Apr 21 17:33:14 ubuntu kernel: [   14.362148] systemd[1]: Started Create Static Device Nodes in /dev.
Apr 21 17:33:14 ubuntu kernel: [   17.779307] systemd-journald[1071]: Received request to flush runtime journal from PID 1
Apr 21 17:33:14 ubuntu kernel: [   17.975612] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   18.036236] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   18.036236] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   18.252259] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   18.256061] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   18.297100] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   18.300720] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   18.445565] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   18.454058] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   22.786253] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   22.786253] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   23.196023] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   23.203594] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   23.225898] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   23.226174] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   23.460886] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   23.464801] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   23.492275] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   23.492275] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   27.802221] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   27.802221] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   28.001090] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   28.004629] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   28.272571] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   28.279950] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   28.450650] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   28.454843] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   28.624059] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   28.644970] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu systemd[1]: Started Login Service.
Apr 21 17:33:14 ubuntu systemd[1]: Started Message of the Day.
Apr 21 17:33:14 ubuntu systemd[1]: Reached target System Time Synchronized.
Apr 21 17:33:14 ubuntu kernel: [   32.828258] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   32.828258] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   32.843033] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   32.843033] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   32.855603] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   32.879577] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   32.898358] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu kernel: [   32.898358] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:14 ubuntu systemd[1]: Started Daily apt download activities.
Apr 21 17:33:14 ubuntu systemd[1]: Started Daily apt upgrade and clean activities.
Apr 21 17:33:14 ubuntu systemd[1]: Started Discard unused blocks once a week.
Apr 21 17:33:14 ubuntu systemd[1]: Reached target Timers.
Apr 21 17:33:14 ubuntu systemd[1]: Started Network Name Resolution.
Apr 21 17:33:15 ubuntu kernel: [   32.997154] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:15 ubuntu kernel: [   33.003067] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:15 ubuntu systemd[1]: Started System Logging Service.
Apr 21 17:33:15 ubuntu systemd[1]: Reached target Host and Network Name Lookups.
Apr 21 17:33:15 ubuntu systemd[1]: Reached target Network.
Apr 21 17:33:15 ubuntu systemd[1]: Starting Permit User Sessions...
Apr 21 17:33:16 ubuntu systemd[1]: Started Permit User Sessions.
Apr 21 17:33:16 ubuntu systemd[1]: Starting Set console scheme...
Apr 21 17:33:16 ubuntu systemd[1]: Started Set console scheme.
Apr 21 17:33:16 ubuntu systemd[1]: Created slice system-getty.slice.
Apr 21 17:33:17 ubuntu systemd[1]: Started Getty on tty1.
Apr 21 17:33:18 ubuntu systemd[1]: Found device /dev/ttyS0.
Apr 21 17:33:18 ubuntu systemd[1]: Started Serial Getty on ttyS0.
Apr 21 17:33:18 ubuntu systemd[1]: Reached target Login Prompts.
Apr 21 17:33:19 ubuntu systemd-udevd[1610]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 17:33:19 ubuntu kernel: [   37.829589] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:19 ubuntu kernel: [   37.829955] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:20 ubuntu kernel: [   37.996650] e1000 0000:00:03.0 enp0s3: renamed from eth0
Apr 21 17:33:20 ubuntu kernel: [   38.059299] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:20 ubuntu kernel: [   38.059299] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:20 ubuntu kernel: [   38.082985] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:20 ubuntu kernel: [   38.086465] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:20 ubuntu systemd-networkd[1307]: eth0: Interface name change detected, eth0 has been renamed to enp0s3.
Apr 21 17:33:20 ubuntu kernel: [   38.360163] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:20 ubuntu kernel: [   38.360163] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:24 ubuntu systemd[1]: Listening on Load/Save RF Kill Switch Status /dev/rfkill Watch.
Apr 21 17:33:24 ubuntu kernel: [   42.524112] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:24 ubuntu systemd-udevd[1314]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 17:33:24 ubuntu kernel: [   42.543524] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:24 ubuntu systemd-udevd[1613]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 17:33:29 ubuntu networkd-dispatcher[1635]: No valid path found for iwconfig
Apr 21 17:33:29 ubuntu kernel: [   47.980953] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:29 ubuntu kernel: [   47.981189] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:29 ubuntu networkd-dispatcher[1635]: No valid path found for iw
Apr 21 17:33:29 ubuntu kernel: [   47.989793] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:29 ubuntu kernel: [   47.990003] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:30 ubuntu systemd[1]: Started Dispatcher daemon for systemd-networkd.
Apr 21 17:33:30 ubuntu kernel: [   48.426950] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:30 ubuntu kernel: [   48.427263] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:30 ubuntu systemd[1]: Reached target Multi-User System.
Apr 21 17:33:30 ubuntu kernel: [   48.449584] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:30 ubuntu kernel: [   48.449818] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:30 ubuntu systemd[1]: Reached target Graphical Interface.
Apr 21 17:33:30 ubuntu kernel: [   48.461412] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:30 ubuntu kernel: [   48.461870] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:30 ubuntu systemd[1]: Starting Update UTMP about System Runlevel Changes...
Apr 21 17:33:30 ubuntu systemd[1]: Started Update UTMP about System Runlevel Changes.
Apr 21 17:33:30 ubuntu systemd[1]: Startup finished in 5.754s (kernel) + 43.001s (userspace) = 48.755s.
Apr 21 17:33:50 ubuntu kernel: [   68.674853] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:50 ubuntu kernel: [   68.678074] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:51 ubuntu systemd[1]: Created slice User Slice of root.
Apr 21 17:33:51 ubuntu kernel: [   69.195598] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:51 ubuntu kernel: [   69.196058] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:51 ubuntu systemd[1]: Starting User Manager for UID 0...
Apr 21 17:33:51 ubuntu kernel: [   69.457471] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:51 ubuntu kernel: [   69.457741] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:51 ubuntu kernel: [   69.596915] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:51 ubuntu systemd[1]: Started Session 1 of user root.
Apr 21 17:33:51 ubuntu kernel: [   69.622670] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:51 ubuntu kernel: [   69.627379] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:51 ubuntu kernel: [   69.627379] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:33:53 ubuntu systemd[1693]: Listening on GnuPG network certificate management daemon.
Apr 21 17:33:53 ubuntu systemd[1693]: Listening on GnuPG cryptographic agent and passphrase cache.
Apr 21 17:33:53 ubuntu systemd[1693]: Reached target Timers.
Apr 21 17:33:53 ubuntu systemd[1693]: Listening on GnuPG cryptographic agent (ssh-agent emulation).
Apr 21 17:33:53 ubuntu systemd[1693]: Listening on GnuPG cryptographic agent and passphrase cache (restricted).
Apr 21 17:33:53 ubuntu systemd[1693]: Reached target Paths.
Apr 21 17:33:53 ubuntu systemd[1693]: Listening on GnuPG cryptographic agent and passphrase cache (access for web browsers).
Apr 21 17:33:53 ubuntu systemd[1693]: Reached target Sockets.
Apr 21 17:33:53 ubuntu systemd[1693]: Reached target Basic System.
Apr 21 17:33:53 ubuntu systemd[1693]: Reached target Default.
Apr 21 17:33:53 ubuntu systemd[1693]: Startup finished in 1.252s.
Apr 21 17:33:53 ubuntu systemd[1]: Started User Manager for UID 0.
Apr 21 17:37:01 ubuntu systemd[1]: Stopping Network Service...
Apr 21 17:37:01 ubuntu kernel: [  259.181364] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:01 ubuntu kernel: [  259.186914] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:01 ubuntu kernel: [  259.263200] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:01 ubuntu kernel: [  259.275484] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:01 ubuntu systemd[1]: Stopped Network Service.
Apr 21 17:37:03 ubuntu kernel: [  261.904266] e1000 0000:00:03.0 eth0: (PCI:33MHz:32-bit) 52:54:00:12:34:56
Apr 21 17:37:03 ubuntu kernel: [  261.904266] e1000 0000:00:03.0 eth0: Intel(R) PRO/1000 Network Connection
Apr 21 17:37:03 ubuntu kernel: [  261.976836] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:03 ubuntu kernel: [  261.977194] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:03 ubuntu kernel: [  261.982913] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:03 ubuntu kernel: [  261.982913] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:04 ubuntu systemd-udevd[1749]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 17:37:04 ubuntu kernel: [  262.078648] e1000 0000:00:03.0 enp0s3: renamed from eth0
Apr 21 17:37:04 ubuntu kernel: [  262.081097] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:04 ubuntu kernel: [  262.086095] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:05 ubuntu systemd[1]: Starting Network Service...
Apr 21 17:37:06 ubuntu systemd-networkd[1758]: Enumeration completed
Apr 21 17:37:06 ubuntu systemd[1]: Started Network Service.
Apr 21 17:37:06 ubuntu kernel: [  264.263117] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:06 ubuntu kernel: [  264.274839] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:06 ubuntu systemd-networkd[1758]: lo: Link is not managed by us
Apr 21 17:37:06 ubuntu kernel: [  264.525637] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:06 ubuntu kernel: [  264.525873] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:06 ubuntu systemd-networkd[1758]: sit0: Link is not managed by us
Apr 21 17:37:06 ubuntu kernel: [  264.553565] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:06 ubuntu kernel: [  264.553954] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:06 ubuntu systemd-networkd[1758]: enp0s3: IPv6 successfully enabled
Apr 21 17:37:06 ubuntu kernel: [  264.574874] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:06 ubuntu kernel: [  264.581426] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:06 ubuntu kernel: [  264.621717] IPv6: ADDRCONF(NETDEV_UP): enp0s3: link is not ready
Apr 21 17:37:06 ubuntu kernel: [  264.624381] e1000: enp0s3 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: RX
Apr 21 17:37:06 ubuntu kernel: [  264.628381] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:06 ubuntu kernel: [  264.628706] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:37:06 ubuntu kernel: [  264.652850] IPv6: ADDRCONF(NETDEV_CHANGE): enp0s3: link becomes ready
Apr 21 17:37:06 ubuntu networkd-dispatcher[1635]: WARNING:Unknown index 4 seen, reloading interface list
Apr 21 17:37:07 ubuntu systemd-networkd[1758]: enp0s3: Gained carrier
Apr 21 17:37:07 ubuntu systemd-networkd[1758]: enp0s3: DHCPv4 address 10.0.2.15/24 via 10.0.2.2
Apr 21 17:37:07 ubuntu systemd-networkd[1758]: enp0s3: Gained IPv6LL
Apr 21 17:37:07 ubuntu systemd-networkd[1758]: enp0s3: Configured
Apr 21 17:47:54 ubuntu systemd[1]: Starting Cleanup of Temporary Directories...
Apr 21 17:47:54 ubuntu kernel: [  912.203737] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:47:54 ubuntu kernel: [  912.208023] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:47:54 ubuntu systemd[1]: Started Cleanup of Temporary Directories.
Apr 21 17:47:54 ubuntu kernel: [  912.593091] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:47:54 ubuntu kernel: [  912.600870] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:54:54 ubuntu systemd[1]: Starting Message of the Day...
Apr 21 17:54:54 ubuntu kernel: [ 1332.015521] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:54:54 ubuntu kernel: [ 1332.015799] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:54:54 ubuntu 50-motd-news[1793]: dpkg-query: no packages found matching curl
Apr 21 17:54:54 ubuntu kernel: [ 1332.593972] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:54:54 ubuntu kernel: [ 1332.597549] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:54:55 ubuntu systemd[1]: Started Message of the Day.
Apr 21 17:54:55 ubuntu kernel: [ 1333.390958] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 17:54:55 ubuntu kernel: [ 1333.397491] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 18:05:25 ubuntu kernel: [ 1963.745526] ar (4267) used greatest stack depth: 13320 bytes left
Apr 21 18:05:25 ubuntu kernel: [ 1963.848688] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 18:05:25 ubuntu kernel: [ 1963.853755] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 18:17:01 ubuntu kernel: [ 2659.471072] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 18:17:01 ubuntu kernel: [ 2659.474799] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 18:17:01 ubuntu CRON[4430]: (root) CMD (   cd / && run-parts --report /etc/cron.hourly)
Apr 21 18:17:01 ubuntu kernel: [ 2659.523743] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 18:17:01 ubuntu kernel: [ 2659.524084] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 18:17:01 ubuntu kernel: [ 2659.635165] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 18:17:01 ubuntu kernel: [ 2659.636988] systemd-journald[1071]: Failed to open system journal: Not a directory
Apr 21 18:22:01 ubuntu systemd-sysctl[1085]: Couldn't write '1' to 'kernel/yama/ptrace_scope', ignoring: No such file or directory
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
Apr 21 18:22:01 ubuntu systemd-sysctl[1085]: Couldn't write 'fq_codel' to 'net/core/default_qdisc', ignoring: No such file or directory
Apr 21 18:22:01 ubuntu systemd[1]: Starting Flush Journal to Persistent Storage...
Apr 21 18:22:01 ubuntu systemd[1]: Started Set the console keyboard layout.
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
Apr 21 18:22:01 ubuntu systemd[1]: Reached target Local File Systems (Pre).
Apr 21 18:22:01 ubuntu systemd[1]: Reached target Local File Systems.
Apr 21 18:22:01 ubuntu systemd[1]: Starting Set console font and keymap...
Apr 21 18:22:01 ubuntu systemd[1]: Starting Enable support for additional executable binary formats...
Apr 21 18:22:01 ubuntu systemd[1]: Started udev Coldplug all Devices.
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   1 disabled
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   2 disabled
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   3 disabled
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   4 disabled
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   5 disabled
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   6 disabled
Apr 21 18:22:01 ubuntu kernel: [    0.000000]   7 disabled
Apr 21 18:22:01 ubuntu systemd[1]: proc-sys-fs-binfmt_misc.automount: Got automount request for /proc/sys/fs/binfmt_misc, triggered by 1489 (update-binfmts)
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
Apr 21 18:22:01 ubuntu systemd[1]: Started Flush Journal to Persistent Storage.
Apr 21 18:22:01 ubuntu systemd[1]: Starting Create Volatile Files and Directories...
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: APIC 0x000000001FFE13E2 000090 (v01 BOCHS  BXPCAPIC 00000001 BXPC 00000001)
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: HPET 0x000000001FFE1472 000038 (v01 BOCHS  BXPCHPET 00000001 BXPC 00000001)
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: SRAT 0x000000001FFE14AA 000110 (v01 BOCHS  BXPCSRAT 00000001 BXPC 00000001)
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: Local APIC address 0xfee00000
Apr 21 18:22:01 ubuntu kernel: [    0.000000] SRAT: PXM 0 -> APIC 0x00 -> Node 0
Apr 21 18:22:01 ubuntu kernel: [    0.000000] SRAT: PXM 1 -> APIC 0x01 -> Node 1
Apr 21 18:22:01 ubuntu systemd[1]: Mounting Arbitrary Executable File Formats File System...
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
Apr 21 18:22:01 ubuntu systemd[1]: Started Set console font and keymap.
Apr 21 18:22:01 ubuntu systemd-networkd[1310]: Enumeration completed
Apr 21 18:22:01 ubuntu systemd[1]: Started Network Service.
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
Apr 21 18:22:01 ubuntu systemd[1]: Mounted Arbitrary Executable File Formats File System.
Apr 21 18:22:01 ubuntu systemd-tmpfiles[1611]: "/var/lib/systemd/coredump" already exists and is not a directory.
Apr 21 18:22:01 ubuntu systemd[1]: Started Enable support for additional executable binary formats.
Apr 21 18:22:01 ubuntu kernel: [    0.000000] console [ttyS0] enabled
Apr 21 18:22:01 ubuntu kernel: [    0.000000] mempolicy: Enabling automatic NUMA balancing. Configure with numa_balancing= or the kernel.numa_balancing sysctl
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: Core revision 20170831
Apr 21 18:22:01 ubuntu kernel: [    0.000000] ACPI: 1 ACPI AML tables successfully acquired and loaded
Apr 21 18:22:01 ubuntu kernel: [    0.000000] clocksource: hpet: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 19112604467 ns
Apr 21 18:22:01 ubuntu kernel: [    0.000000] hpet clockevent registered
Apr 21 18:22:01 ubuntu kernel: [    0.004000] APIC: Switch to symmetric I/O mode setup
Apr 21 18:22:01 ubuntu kernel: [    0.008000] ..TIMER: vector=0x30 apic1=0 pin1=2 apic2=-1 pin2=-1
Apr 21 18:22:01 ubuntu kernel: [    0.017000] tsc: Unable to calibrate against PIT
Apr 21 18:22:01 ubuntu systemd-tmpfiles[1611]: ACL operation on "/var/log/journal/c6f04ae9b6ea4a3ab3b02d6805ef9da7" failed: Permission denied
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
Apr 21 18:22:01 ubuntu systemd[1]: systemd-tmpfiles-setup.service: Main process exited, code=exited, status=1/FAILURE
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
Apr 21 18:22:01 ubuntu systemd[1]: systemd-tmpfiles-setup.service: Failed with result 'exit-code'.
Apr 21 18:22:01 ubuntu systemd[1]: Failed to start Create Volatile Files and Directories.
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
Apr 21 18:22:01 ubuntu systemd[1]: Starting Update UTMP about System Boot/Shutdown...
Apr 21 18:22:01 ubuntu systemd[1]: Starting Network Name Resolution...
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
Apr 21 18:22:01 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 18:22:01 ubuntu kernel: [    1.329650] pnp: PnP ACPI init
Apr 21 18:22:01 ubuntu kernel: [    1.329650] pnp 00:00: Plug and Play ACPI device, IDs PNP0b00 (active)
Apr 21 18:22:01 ubuntu kernel: [    1.349401] pnp 00:01: Plug and Play ACPI device, IDs PNP0303 (active)
Apr 21 18:22:01 ubuntu kernel: [    1.349614] pnp 00:02: Plug and Play ACPI device, IDs PNP0f13 (active)
Apr 21 18:22:01 ubuntu kernel: [    1.349614] pnp 00:03: [dma 2]
Apr 21 18:22:01 ubuntu kernel: [    1.349614] pnp 00:03: Plug and Play ACPI device, IDs PNP0700 (active)
Apr 21 18:22:01 ubuntu kernel: [    1.349614] pnp 00:04: Plug and Play ACPI device, IDs PNP0400 (active)
Apr 21 18:22:01 ubuntu systemd[1617]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 18:22:01 ubuntu systemd[1617]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 18:22:01 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 18:22:01 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 18:22:01 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 18:22:01 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
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
Apr 21 18:22:01 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 1.
Apr 21 18:22:01 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 18:22:01 ubuntu systemd[1]: Starting Network Time Synchronization...
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
Apr 21 18:22:01 ubuntu systemd[1]: Started Update UTMP about System Boot/Shutdown.
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
Apr 21 18:22:01 ubuntu systemd[1621]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 18:22:02 ubuntu systemd[1621]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 18:22:02 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 2.
Apr 21 18:22:02 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 18:22:02 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 18:22:02 ubuntu systemd[1625]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 18:22:02 ubuntu systemd[1625]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 18:22:02 ubuntu kernel: [    6.300981] Freeing unused kernel memory: 1224K
Apr 21 18:22:02 ubuntu kernel: [    6.302380] Write protecting the kernel read-only data: 18432k
Apr 21 18:22:02 ubuntu kernel: [    6.314538] Freeing unused kernel memory: 2004K
Apr 21 18:22:02 ubuntu kernel: [    6.332046] Freeing unused kernel memory: 380K
Apr 21 18:22:02 ubuntu kernel: [    7.213064] systemd[1]: systemd 237 running in system mode. (+PAM +AUDIT +SELINUX +IMA +APPARMOR +SMACK +SYSVINIT +UTMP +LIBCRYPTSETUP +GCRYPT +GNUTLS +ACL +XZ +LZ4 +SECCOMP +BLKID +ELFUTILS +KMOD -IDN2 +IDN -PCRE2 default-hierarchy=hybrid)
Apr 21 18:22:02 ubuntu kernel: [    7.217172] systemd[1]: Detected virtualization qemu.
Apr 21 18:22:02 ubuntu kernel: [    7.218345] systemd[1]: Detected architecture x86-64.
Apr 21 18:22:02 ubuntu kernel: [    7.285493] systemd[1]: Set hostname to <ubuntu>.
Apr 21 18:22:02 ubuntu kernel: [    8.908295] systemd-cryptse (1057) used greatest stack depth: 14064 bytes left
Apr 21 18:22:02 ubuntu kernel: [    9.058435] systemd-fstab-g (1059) used greatest stack depth: 13832 bytes left
Apr 21 18:22:02 ubuntu kernel: [    9.159132] systemd-gpt-aut (1061) used greatest stack depth: 13792 bytes left
Apr 21 18:22:02 ubuntu kernel: [    9.489077] systemd-sysv-ge (1065) used greatest stack depth: 13680 bytes left
Apr 21 18:22:02 ubuntu kernel: [   10.526303] systemd[1]: Set up automount Arbitrary Executable File Formats File System Automount Point.
Apr 21 18:22:02 ubuntu kernel: [   10.549043] systemd[1]: Created slice System Slice.
Apr 21 18:22:02 ubuntu kernel: [   10.582906] systemd[1]: Listening on /dev/initctl Compatibility Named Pipe.
Apr 21 18:22:02 ubuntu kernel: [   10.598936] systemd[1]: Listening on udev Control Socket.
Apr 21 18:22:02 ubuntu kernel: [   10.614799] systemd[1]: Listening on Journal Socket.
Apr 21 18:22:02 ubuntu kernel: [   10.683860] systemd[1]: Starting Set the console keyboard layout...
Apr 21 18:22:02 ubuntu kernel: [   12.295212] systemd[1]: Listening on Syslog Socket.
Apr 21 18:22:02 ubuntu kernel: [   12.792948] systemd[1]: Starting Journal Service...
Apr 21 18:22:02 ubuntu kernel: [   12.826529] systemd[1]: Reached target Slices.
Apr 21 18:22:02 ubuntu kernel: [   12.892716] systemd[1]: Created slice system-serial\x2dgetty.slice.
Apr 21 18:22:02 ubuntu kernel: [   13.137278] systemd[1]: Mounted Kernel Debug File System.
Apr 21 18:22:02 ubuntu kernel: [   13.248903] systemd[1]: Started Remount Root and Kernel File Systems.
Apr 21 18:22:02 ubuntu kernel: [   13.346754] systemd[1]: Mounted Huge Pages File System.
Apr 21 18:22:02 ubuntu kernel: [   13.368301] systemd[1]: Mounted POSIX Message Queue File System.
Apr 21 18:22:02 ubuntu kernel: [   13.463669] systemd[1]: Started Load Kernel Modules.
Apr 21 18:22:02 ubuntu kernel: [   13.818269] gzip (1082) used greatest stack depth: 13368 bytes left
Apr 21 18:22:02 ubuntu kernel: [   13.859997] systemd[1]: Starting Apply Kernel Variables...
Apr 21 18:22:02 ubuntu kernel: [   18.277378] systemd[1]: Started udev Kernel Device Manager.
Apr 21 18:22:02 ubuntu kernel: [   18.759669] systemd[1]: Starting Network Service...
Apr 21 18:22:02 ubuntu kernel: [   18.812814] systemd[1]: Started Journal Service.
Apr 21 18:22:02 ubuntu kernel: [   21.784923] systemd-journald[1083]: Received request to flush runtime journal from PID 1
Apr 21 18:22:02 ubuntu kernel: [   21.887914] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   21.941076] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   21.945039] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   22.029214] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   22.032738] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   22.119679] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   22.120153] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   22.455183] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   22.469655] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   26.953818] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   26.962372] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   26.996100] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   27.003394] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   27.025036] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   27.038914] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   27.097882] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   27.123799] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   27.312918] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   27.316735] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   32.166102] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   32.175180] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   32.712409] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   32.770152] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   32.804101] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   32.807852] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   32.825061] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   32.829085] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   32.841282] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu kernel: [   32.845129] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 18:22:02 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 3.
Apr 21 18:22:02 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 18:22:02 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 18:22:02 ubuntu systemd[1628]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 18:22:02 ubuntu systemd[1628]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 18:22:02 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 18:22:02 ubuntu systemd-resolved[1616]: Positive Trust Anchors:
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 4.
Apr 21 18:22:02 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 18:22:02 ubuntu systemd-resolved[1616]: . IN DS 19036 8 2 49aac11d7b6f6446702e54a1607371607a1a41855200fd2ce1cdde32f24e8fb5
Apr 21 18:22:02 ubuntu systemd-resolved[1616]: . IN DS 20326 8 2 e06d44b80b8f1d39a95c0b0d7c65d08458e880409bbc683457104237c7f8ec8d
Apr 21 18:22:02 ubuntu systemd-resolved[1616]: Negative trust anchors: 10.in-addr.arpa 16.172.in-addr.arpa 17.172.in-addr.arpa 18.172.in-addr.arpa 19.172.in-addr.arpa 20.172.in-addr.arpa 21.172.in-addr.arpa 22.172.in-addr.arpa 23.172.in-addr.arpa 24.172.in-addr.arpa 25.172.in-addr.arpa 26.172.in-addr.arpa 27.172.in-addr.arpa 28.172.in-addr.arpa 29.172.in-addr.arpa 30.172.in-addr.arpa 31.172.in-addr.arpa 168.192.in-addr.arpa d.f.ip6.arpa corp home internal intranet lan local private test
Apr 21 18:22:02 ubuntu systemd-resolved[1616]: Using system hostname 'ubuntu'.
Apr 21 18:22:02 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 18:22:02 ubuntu systemd[1631]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 18:22:02 ubuntu systemd[1631]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 18:22:02 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 18:22:02 ubuntu systemd[1]: Started Network Name Resolution.
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 5.
Apr 21 18:22:02 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Start request repeated too quickly.
Apr 21 18:22:02 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 18:22:02 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 18:22:02 ubuntu systemd[1]: Reached target Host and Network Name Lookups.
Apr 21 18:22:02 ubuntu systemd[1]: Reached target Network.
Apr 21 18:22:02 ubuntu systemd[1]: Reached target System Time Synchronized.
Apr 21 18:22:02 ubuntu systemd[1]: Reached target System Initialization.
Apr 21 18:22:02 ubuntu systemd[1]: Listening on D-Bus System Message Bus Socket.
Apr 21 18:22:02 ubuntu systemd[1]: Reached target Sockets.
Apr 21 18:22:02 ubuntu systemd[1]: Started Daily apt download activities.
Apr 21 18:22:02 ubuntu systemd[1]: Started Daily Cleanup of Temporary Directories.
Apr 21 18:22:02 ubuntu systemd[1]: Started Discard unused blocks once a week.
Apr 21 18:22:02 ubuntu systemd[1]: Started Message of the Day.
Apr 21 18:22:02 ubuntu systemd[1]: Started Daily apt upgrade and clean activities.
Apr 21 18:22:02 ubuntu systemd[1]: Reached target Timers.
Apr 21 18:22:02 ubuntu systemd[1]: Reached target Basic System.
Apr 21 18:22:02 ubuntu systemd[1]: Starting System Logging Service...
Apr 21 18:22:02 ubuntu systemd[1]: Started Regular background program processing daemon.
Apr 21 18:22:02 ubuntu systemd[1]: Starting Dispatcher daemon for systemd-networkd...
Apr 21 18:22:02 ubuntu systemd[1]: Starting Login Service...
Apr 21 18:22:02 ubuntu cron[1635]: (CRON) INFO (pidfile fd = 3)
Apr 21 18:22:02 ubuntu systemd[1]: Starting Permit User Sessions...
Apr 21 18:22:02 ubuntu cron[1635]: (CRON) INFO (Running @reboot jobs)
Apr 21 18:22:02 ubuntu systemd[1]: Started D-Bus System Message Bus.
Apr 21 18:22:01 ubuntu rsyslogd: imuxsock: Acquired UNIX socket '/run/systemd/journal/syslog' (fd 3) from systemd.  [v8.32.0]
Apr 21 18:22:01 ubuntu rsyslogd: rsyslogd's groupid changed to 106
Apr 21 18:22:01 ubuntu rsyslogd: rsyslogd's userid changed to 102
Apr 21 18:22:01 ubuntu rsyslogd:  [origin software="rsyslogd" swVersion="8.32.0" x-pid="1634" x-info="http://www.rsyslog.com"] start
Apr 21 18:22:03 ubuntu systemd[1]: Started Login Service.
Apr 21 18:22:03 ubuntu systemd[1]: Started System Logging Service.
Apr 21 18:22:03 ubuntu systemd[1]: Started Permit User Sessions.
Apr 21 18:22:03 ubuntu systemd[1]: Starting Set console scheme...
Apr 21 18:22:03 ubuntu systemd[1]: Started Set console scheme.
Apr 21 18:22:03 ubuntu systemd[1]: Created slice system-getty.slice.
Apr 21 18:22:04 ubuntu systemd[1]: Started Getty on tty1.
Apr 21 18:22:05 ubuntu kernel: [   36.730813] e1000 0000:00:03.0 enp0s3: renamed from eth0
Apr 21 18:22:05 ubuntu systemd-udevd[1478]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 18:22:05 ubuntu systemd-networkd[1310]: eth0: Interface name change detected, eth0 has been renamed to enp0s3.
Apr 21 18:22:06 ubuntu systemd[1]: Found device /dev/ttyS0.
Apr 21 18:22:06 ubuntu kernel: [   37.896804] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:06 ubuntu kernel: [   37.897203] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:06 ubuntu systemd[1]: Started Serial Getty on ttyS0.
Apr 21 18:22:06 ubuntu kernel: [   37.990786] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:06 ubuntu kernel: [   37.990786] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:07 ubuntu systemd[1]: Reached target Login Prompts.
Apr 21 18:22:07 ubuntu kernel: [   38.055137] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:07 ubuntu kernel: [   38.063960] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:10 ubuntu kernel: [   41.618866] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:10 ubuntu kernel: [   41.632163] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:11 ubuntu systemd-networkd[1310]: lo: Link is not managed by us
Apr 21 18:22:11 ubuntu kernel: [   42.729203] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:11 ubuntu kernel: [   42.732079] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:11 ubuntu systemd-networkd[1310]: sit0: Link is not managed by us
Apr 21 18:22:11 ubuntu systemd-networkd[1310]: enp0s3: IPv6 successfully enabled
Apr 21 18:22:11 ubuntu kernel: [   42.802976] IPv6: ADDRCONF(NETDEV_UP): enp0s3: link is not ready
Apr 21 18:22:11 ubuntu kernel: [   42.819784] e1000: enp0s3 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: RX
Apr 21 18:22:11 ubuntu kernel: [   42.870038] IPv6: ADDRCONF(NETDEV_CHANGE): enp0s3: link becomes ready
Apr 21 18:22:12 ubuntu systemd-networkd[1310]: enp0s3: Gained carrier
Apr 21 18:22:12 ubuntu kernel: [   43.061061] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:12 ubuntu kernel: [   43.067746] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:12 ubuntu systemd-networkd[1310]: enp0s3: DHCPv4 address 10.0.2.15/24 via 10.0.2.2
Apr 21 18:22:12 ubuntu kernel: [   43.294074] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:12 ubuntu kernel: [   43.302972] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:13 ubuntu systemd-networkd[1310]: enp0s3: Gained IPv6LL
Apr 21 18:22:13 ubuntu kernel: [   44.649152] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:13 ubuntu kernel: [   44.652825] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:13 ubuntu systemd-networkd[1310]: enp0s3: Configured
Apr 21 18:22:13 ubuntu kernel: [   44.693740] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:13 ubuntu kernel: [   44.701047] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:14 ubuntu systemd-udevd[1317]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 18:22:14 ubuntu kernel: [   45.252614] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:14 ubuntu kernel: [   45.253120] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:14 ubuntu systemd[1]: Listening on Load/Save RF Kill Switch Status /dev/rfkill Watch.
Apr 21 18:22:14 ubuntu systemd-udevd[1308]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 18:22:19 ubuntu networkd-dispatcher[1636]: No valid path found for iwconfig
Apr 21 18:22:19 ubuntu kernel: [   50.276374] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:19 ubuntu kernel: [   50.278090] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:19 ubuntu networkd-dispatcher[1636]: No valid path found for iw
Apr 21 18:22:19 ubuntu kernel: [   50.296626] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:19 ubuntu kernel: [   50.297070] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:19 ubuntu systemd[1]: Started Dispatcher daemon for systemd-networkd.
Apr 21 18:22:19 ubuntu kernel: [   50.832515] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:19 ubuntu kernel: [   50.832813] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:19 ubuntu systemd[1]: Reached target Multi-User System.
Apr 21 18:22:19 ubuntu kernel: [   50.861167] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:19 ubuntu kernel: [   50.871500] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:19 ubuntu systemd[1]: Reached target Graphical Interface.
Apr 21 18:22:19 ubuntu kernel: [   50.888996] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:19 ubuntu kernel: [   50.891051] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:22:19 ubuntu systemd[1]: Starting Update UTMP about System Runlevel Changes...
Apr 21 18:22:20 ubuntu systemd[1]: Started Update UTMP about System Runlevel Changes.
Apr 21 18:22:20 ubuntu systemd[1]: Startup finished in 6.950s (kernel) + 44.382s (userspace) = 51.332s.
Apr 21 18:33:49 ubuntu systemd[1]: serial-getty@ttyS0.service: Service hold-off time over, scheduling restart.
Apr 21 18:33:49 ubuntu kernel: [  740.287731] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:33:49 ubuntu kernel: [  740.288110] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:33:49 ubuntu systemd[1]: serial-getty@ttyS0.service: Scheduled restart job, restart counter is at 1.
Apr 21 18:33:49 ubuntu kernel: [  740.303251] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:33:49 ubuntu kernel: [  740.303572] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:33:49 ubuntu systemd[1]: Stopped Serial Getty on ttyS0.
Apr 21 18:33:49 ubuntu kernel: [  740.308690] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:33:49 ubuntu kernel: [  740.308876] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:33:49 ubuntu systemd[1]: Started Serial Getty on ttyS0.
Apr 21 18:33:49 ubuntu kernel: [  740.337499] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:33:49 ubuntu kernel: [  740.337803] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:33:58 ubuntu kernel: [  749.277865] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:33:58 ubuntu kernel: [  749.297847] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:33:58 ubuntu systemd[1]: Created slice User Slice of root.
Apr 21 18:33:58 ubuntu kernel: [  749.748740] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:33:58 ubuntu kernel: [  749.751435] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:33:58 ubuntu systemd[1]: Starting User Manager for UID 0...
Apr 21 18:33:58 ubuntu kernel: [  749.953993] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:33:58 ubuntu kernel: [  749.970549] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:33:59 ubuntu kernel: [  750.105939] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:33:59 ubuntu kernel: [  750.114843] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:33:59 ubuntu systemd[1]: Started Session 1 of user root.
Apr 21 18:33:59 ubuntu kernel: [  750.148968] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:33:59 ubuntu kernel: [  750.152543] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:34:00 ubuntu systemd[1698]: Reached target Paths.
Apr 21 18:34:00 ubuntu systemd[1698]: Listening on GnuPG cryptographic agent and passphrase cache (restricted).
Apr 21 18:34:00 ubuntu systemd[1698]: Listening on GnuPG network certificate management daemon.
Apr 21 18:34:00 ubuntu systemd[1698]: Listening on GnuPG cryptographic agent and passphrase cache (access for web browsers).
Apr 21 18:34:00 ubuntu systemd[1698]: Listening on GnuPG cryptographic agent and passphrase cache.
Apr 21 18:34:00 ubuntu systemd[1698]: Reached target Timers.
Apr 21 18:34:00 ubuntu systemd[1698]: Listening on GnuPG cryptographic agent (ssh-agent emulation).
Apr 21 18:34:00 ubuntu systemd[1698]: Reached target Sockets.
Apr 21 18:34:00 ubuntu systemd[1698]: Reached target Basic System.
Apr 21 18:34:00 ubuntu systemd[1698]: Reached target Default.
Apr 21 18:34:00 ubuntu systemd[1698]: Startup finished in 1.262s.
Apr 21 18:34:00 ubuntu systemd[1]: Started User Manager for UID 0.
Apr 21 18:37:20 ubuntu systemd[1]: Starting Cleanup of Temporary Directories...
Apr 21 18:37:20 ubuntu kernel: [  951.467254] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:37:20 ubuntu kernel: [  951.472249] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:37:20 ubuntu systemd[1]: Started Cleanup of Temporary Directories.
Apr 21 18:37:20 ubuntu kernel: [  951.820675] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:37:20 ubuntu kernel: [  951.826814] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:39:20 ubuntu systemd[1]: Starting Message of the Day...
Apr 21 18:39:20 ubuntu kernel: [ 1071.660697] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:39:20 ubuntu kernel: [ 1071.661281] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:39:21 ubuntu 50-motd-news[1749]: dpkg-query: no packages found matching curl
Apr 21 18:39:21 ubuntu kernel: [ 1072.757799] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:39:21 ubuntu kernel: [ 1072.769758] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:39:23 ubuntu systemd[1]: Started Message of the Day.
Apr 21 18:39:23 ubuntu kernel: [ 1074.114234] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:39:23 ubuntu kernel: [ 1074.114400] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:43:51 ubuntu kernel: [ 1342.718163] python3 (1745) used greatest stack depth: 13192 bytes left
Apr 21 18:43:51 ubuntu kernel: [ 1342.759544] systemd-journald[1083]: Failed to open system journal: Not a directory
Apr 21 18:43:51 ubuntu kernel: [ 1342.763025] systemd-journald[1083]: Failed to open system journal: Not a directory
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
Apr 21 18:46:57 ubuntu systemd-sysctl[1084]: Couldn't write '1' to 'kernel/yama/ptrace_scope', ignoring: No such file or directory
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
Apr 21 18:46:57 ubuntu systemd-sysctl[1084]: Couldn't write 'fq_codel' to 'net/core/default_qdisc', ignoring: No such file or directory
Apr 21 18:46:57 ubuntu systemd[1]: Started udev Kernel Device Manager.
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
Apr 21 18:46:57 ubuntu systemd[1]: Starting Network Service...
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
Apr 21 18:46:57 ubuntu systemd[1]: Starting Flush Journal to Persistent Storage...
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
Apr 21 18:46:57 ubuntu systemd[1]: Started Flush Journal to Persistent Storage.
Apr 21 18:46:57 ubuntu systemd[1]: Started udev Coldplug all Devices.
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
Apr 21 18:46:57 ubuntu systemd[1]: Started Set the console keyboard layout.
Apr 21 18:46:57 ubuntu systemd[1]: Reached target Local File Systems (Pre).
Apr 21 18:46:57 ubuntu systemd[1]: Reached target Local File Systems.
Apr 21 18:46:57 ubuntu systemd[1]: Starting Enable support for additional executable binary formats...
Apr 21 18:46:57 ubuntu systemd[1]: Starting Create Volatile Files and Directories...
Apr 21 18:46:57 ubuntu systemd[1]: Starting Set console font and keymap...
Apr 21 18:46:57 ubuntu systemd[1]: proc-sys-fs-binfmt_misc.automount: Got automount request for /proc/sys/fs/binfmt_misc, triggered by 1609 (update-binfmts)
Apr 21 18:46:57 ubuntu systemd[1]: Mounting Arbitrary Executable File Formats File System...
Apr 21 18:46:57 ubuntu systemd-networkd[1309]: Enumeration completed
Apr 21 18:46:57 ubuntu systemd[1]: Started Network Service.
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
Apr 21 18:46:57 ubuntu systemd-tmpfiles[1610]: "/var/lib/systemd/coredump" already exists and is not a directory.
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
Apr 21 18:46:57 ubuntu systemd[1]: Started Set console font and keymap.
Apr 21 18:46:57 ubuntu systemd[1]: Mounted Arbitrary Executable File Formats File System.
Apr 21 18:46:57 ubuntu systemd[1]: Started Enable support for additional executable binary formats.
Apr 21 18:46:57 ubuntu systemd-tmpfiles[1610]: ACL operation on "/var/log/journal/c6f04ae9b6ea4a3ab3b02d6805ef9da7" failed: Permission denied
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
Apr 21 18:46:57 ubuntu systemd[1]: systemd-tmpfiles-setup.service: Main process exited, code=exited, status=1/FAILURE
Apr 21 18:46:57 ubuntu kernel: [    4.078587] rtc_cmos 00:00: RTC can wake from S4
Apr 21 18:46:57 ubuntu kernel: [    4.104124] rtc_cmos 00:00: rtc core: registered rtc_cmos as rtc0
Apr 21 18:46:57 ubuntu kernel: [    4.109970] rtc_cmos 00:00: alarms up to one day, y3k, 114 bytes nvram, hpet irqs
Apr 21 18:46:57 ubuntu kernel: [    4.115055] input: AT Translated Set 2 keyboard as /devices/platform/i8042/serio0/input/input1
Apr 21 18:46:57 ubuntu systemd[1]: systemd-tmpfiles-setup.service: Failed with result 'exit-code'.
Apr 21 18:46:57 ubuntu systemd[1]: Failed to start Create Volatile Files and Directories.
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
Apr 21 18:46:57 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 18:46:57 ubuntu systemd[1]: Starting Update UTMP about System Boot/Shutdown...
Apr 21 18:46:57 ubuntu systemd[1]: Starting Network Name Resolution...
Apr 21 18:46:57 ubuntu systemd[1617]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 18:46:57 ubuntu systemd[1617]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
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
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 18:46:57 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 1.
Apr 21 18:46:57 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 18:46:57 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 18:46:57 ubuntu systemd[1622]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 18:46:57 ubuntu systemd[1622]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 18:46:57 ubuntu systemd[1]: Started Update UTMP about System Boot/Shutdown.
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 18:46:57 ubuntu kernel: [    5.994037] random: crng init done
Apr 21 18:46:57 ubuntu kernel: [    6.159832] systemd[1]: systemd 237 running in system mode. (+PAM +AUDIT +SELINUX +IMA +APPARMOR +SMACK +SYSVINIT +UTMP +LIBCRYPTSETUP +GCRYPT +GNUTLS +ACL +XZ +LZ4 +SECCOMP +BLKID +ELFUTILS +KMOD -IDN2 +IDN -PCRE2 default-hierarchy=hybrid)
Apr 21 18:46:57 ubuntu kernel: [    6.180768] systemd[1]: Detected virtualization qemu.
Apr 21 18:46:57 ubuntu kernel: [    6.185853] systemd[1]: Detected architecture x86-64.
Apr 21 18:46:57 ubuntu kernel: [    6.253934] systemd[1]: Set hostname to <ubuntu>.
Apr 21 18:46:57 ubuntu kernel: [    7.584075] systemd-hiberna (1062) used greatest stack depth: 14208 bytes left
Apr 21 18:46:57 ubuntu kernel: [    8.056846] systemd-cryptse (1057) used greatest stack depth: 13808 bytes left
Apr 21 18:46:57 ubuntu kernel: [    9.515388] systemd[1]: Reached target Remote File Systems.
Apr 21 18:46:57 ubuntu kernel: [    9.534219] systemd[1]: Set up automount Arbitrary Executable File Formats File System Automount Point.
Apr 21 18:46:57 ubuntu kernel: [    9.546194] systemd[1]: Reached target Swap.
Apr 21 18:46:57 ubuntu kernel: [    9.553981] systemd[1]: Started Dispatch Password Requests to Console Directory Watch.
Apr 21 18:46:57 ubuntu kernel: [    9.569886] systemd[1]: Started Forward Password Requests to Wall Directory Watch.
Apr 21 18:46:57 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 2.
Apr 21 18:46:57 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 18:46:57 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 18:46:57 ubuntu systemd[1625]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 18:46:57 ubuntu systemd[1625]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 18:46:57 ubuntu kernel: [    9.578487] systemd[1]: Reached target Local Encrypted Volumes.
Apr 21 18:46:57 ubuntu kernel: [   11.494481] systemd[1]: Starting Journal Service...
Apr 21 18:46:57 ubuntu kernel: [   11.665966] systemd[1]: Started Load Kernel Modules.
Apr 21 18:46:57 ubuntu kernel: [   11.725580] systemd[1]: Mounted Kernel Debug File System.
Apr 21 18:46:57 ubuntu kernel: [   11.795761] systemd[1]: Mounted POSIX Message Queue File System.
Apr 21 18:46:57 ubuntu kernel: [   11.890492] systemd[1]: Started Remount Root and Kernel File Systems.
Apr 21 18:46:57 ubuntu kernel: [   11.963876] systemd[1]: Mounted Huge Pages File System.
Apr 21 18:46:57 ubuntu kernel: [   12.074703] systemd[1]: Starting Load/Save Random Seed...
Apr 21 18:46:57 ubuntu kernel: [   12.361383] systemd[1]: Starting Apply Kernel Variables...
Apr 21 18:46:57 ubuntu kernel: [   12.956430] systemd[1]: Started Create Static Device Nodes in /dev.
Apr 21 18:46:57 ubuntu kernel: [   13.243834] systemd[1]: Started Load/Save Random Seed.
Apr 21 18:46:57 ubuntu kernel: [   16.689062] systemd[1]: Started Journal Service.
Apr 21 18:46:57 ubuntu kernel: [   18.967906] systemd-journald[1080]: Received request to flush runtime journal from PID 1
Apr 21 18:46:57 ubuntu kernel: [   19.277069] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 18:46:57 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 18:46:57 ubuntu kernel: [   19.306248] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   19.308871] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   19.625956] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   19.626197] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   20.305718] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   20.305982] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   20.688676] cached_setup_ke (1078) used greatest stack depth: 13768 bytes left
Apr 21 18:46:57 ubuntu kernel: [   20.699115] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   20.702745] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   22.079114] uname (1613) used greatest stack depth: 13760 bytes left
Apr 21 18:46:57 ubuntu kernel: [   24.124758] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   24.127612] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   24.261065] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   24.263968] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   24.391704] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   24.392056] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 18:46:57 ubuntu kernel: [   24.419913] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   24.423962] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   24.447872] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 3.
Apr 21 18:46:57 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 18:46:57 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 18:46:57 ubuntu systemd[1628]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 18:46:57 ubuntu systemd[1628]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 18:46:57 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 4.
Apr 21 18:46:57 ubuntu kernel: [   24.451871] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   30.735583] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   30.735912] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   30.775280] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   30.775280] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   31.117862] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   31.120871] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   31.262663] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 18:46:57 ubuntu systemd[1]: Starting Network Time Synchronization...
Apr 21 18:46:57 ubuntu systemd-resolved[1619]: Positive Trust Anchors:
Apr 21 18:46:57 ubuntu systemd-resolved[1619]: . IN DS 19036 8 2 49aac11d7b6f6446702e54a1607371607a1a41855200fd2ce1cdde32f24e8fb5
Apr 21 18:46:57 ubuntu systemd-resolved[1619]: . IN DS 20326 8 2 e06d44b80b8f1d39a95c0b0d7c65d08458e880409bbc683457104237c7f8ec8d
Apr 21 18:46:57 ubuntu systemd-resolved[1619]: Negative trust anchors: 10.in-addr.arpa 16.172.in-addr.arpa 17.172.in-addr.arpa 18.172.in-addr.arpa 19.172.in-addr.arpa 20.172.in-addr.arpa 21.172.in-addr.arpa 22.172.in-addr.arpa 23.172.in-addr.arpa 24.172.in-addr.arpa 25.172.in-addr.arpa 26.172.in-addr.arpa 27.172.in-addr.arpa 28.172.in-addr.arpa 29.172.in-addr.arpa 30.172.in-addr.arpa 31.172.in-addr.arpa 168.192.in-addr.arpa d.f.ip6.arpa corp home internal intranet lan local private test
Apr 21 18:46:57 ubuntu systemd[1632]: systemd-timesyncd.service: Failed to set up special execution directory in /var/lib: File exists
Apr 21 18:46:57 ubuntu systemd[1632]: systemd-timesyncd.service: Failed at step STATE_DIRECTORY spawning /lib/systemd/systemd-timesyncd: File exists
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Main process exited, code=exited, status=238/STATE_DIRECTORY
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 18:46:57 ubuntu kernel: [   31.263188] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   31.347835] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu kernel: [   31.392649] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:57 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 18:46:57 ubuntu systemd-resolved[1619]: Using system hostname 'ubuntu'.
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Service has no hold-off time, scheduling restart.
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Scheduled restart job, restart counter is at 5.
Apr 21 18:46:57 ubuntu systemd[1]: Stopped Network Time Synchronization.
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Start request repeated too quickly.
Apr 21 18:46:57 ubuntu systemd[1]: systemd-timesyncd.service: Failed with result 'exit-code'.
Apr 21 18:46:57 ubuntu systemd[1]: Failed to start Network Time Synchronization.
Apr 21 18:46:57 ubuntu systemd[1]: Reached target System Initialization.
Apr 21 18:46:57 ubuntu systemd[1]: Started Daily Cleanup of Temporary Directories.
Apr 21 18:46:57 ubuntu systemd[1]: Started Message of the Day.
Apr 21 18:46:57 ubuntu systemd[1]: Listening on D-Bus System Message Bus Socket.
Apr 21 18:46:57 ubuntu systemd[1]: Reached target Sockets.
Apr 21 18:46:57 ubuntu systemd[1]: Reached target Basic System.
Apr 21 18:46:57 ubuntu systemd[1]: Started D-Bus System Message Bus.
Apr 21 18:46:57 ubuntu systemd[1]: Starting Dispatcher daemon for systemd-networkd...
Apr 21 18:46:57 ubuntu systemd[1]: Starting System Logging Service...
Apr 21 18:46:57 ubuntu systemd[1]: Starting Login Service...
Apr 21 18:46:57 ubuntu systemd[1]: Started Regular background program processing daemon.
Apr 21 18:46:57 ubuntu systemd[1]: Reached target System Time Synchronized.
Apr 21 18:46:57 ubuntu systemd[1]: Started Daily apt download activities.
Apr 21 18:46:57 ubuntu systemd[1]: Started Daily apt upgrade and clean activities.
Apr 21 18:46:57 ubuntu systemd[1]: Started Discard unused blocks once a week.
Apr 21 18:46:57 ubuntu systemd[1]: Reached target Timers.
Apr 21 18:46:57 ubuntu systemd[1]: Started Network Name Resolution.
Apr 21 18:46:57 ubuntu systemd[1]: Reached target Network.
Apr 21 18:46:57 ubuntu systemd[1]: Starting Permit User Sessions...
Apr 21 18:46:57 ubuntu systemd[1]: Reached target Host and Network Name Lookups.
Apr 21 18:46:57 ubuntu cron[1640]: (CRON) INFO (pidfile fd = 3)
Apr 21 18:46:57 ubuntu cron[1640]: (CRON) INFO (Running @reboot jobs)
Apr 21 18:46:57 ubuntu systemd[1]: Started Permit User Sessions.
Apr 21 18:46:57 ubuntu systemd[1]: Starting Set console scheme...
Apr 21 18:46:57 ubuntu systemd[1]: Started Set console scheme.
Apr 21 18:46:57 ubuntu systemd[1]: Created slice system-getty.slice.
Apr 21 18:46:57 ubuntu systemd[1]: Started Getty on tty1.
Apr 21 18:46:57 ubuntu systemd[1]: Started Login Service.
Apr 21 18:46:57 ubuntu rsyslogd: imuxsock: Acquired UNIX socket '/run/systemd/journal/syslog' (fd 3) from systemd.  [v8.32.0]
Apr 21 18:46:57 ubuntu rsyslogd: rsyslogd's groupid changed to 106
Apr 21 18:46:57 ubuntu rsyslogd: rsyslogd's userid changed to 102
Apr 21 18:46:57 ubuntu systemd[1]: Found device /dev/ttyS0.
Apr 21 18:46:57 ubuntu rsyslogd:  [origin software="rsyslogd" swVersion="8.32.0" x-pid="1638" x-info="http://www.rsyslog.com"] start
Apr 21 18:46:57 ubuntu systemd[1]: Started System Logging Service.
Apr 21 18:46:57 ubuntu systemd[1]: Started Serial Getty on ttyS0.
Apr 21 18:46:57 ubuntu systemd[1]: Reached target Login Prompts.
Apr 21 18:46:58 ubuntu systemd-udevd[1313]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 18:46:58 ubuntu kernel: [   35.513482] e1000 0000:00:03.0 enp0s3: renamed from eth0
Apr 21 18:46:58 ubuntu systemd-networkd[1309]: eth0: Interface name change detected, eth0 has been renamed to enp0s3.
Apr 21 18:46:59 ubuntu kernel: [   36.477038] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:46:59 ubuntu kernel: [   36.484668] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:01 ubuntu systemd-udevd[1307]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 18:47:01 ubuntu kernel: [   38.139691] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:01 ubuntu kernel: [   38.140126] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:01 ubuntu systemd[1]: Listening on Load/Save RF Kill Switch Status /dev/rfkill Watch.
Apr 21 18:47:01 ubuntu kernel: [   38.634874] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:01 ubuntu kernel: [   38.635177] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:02 ubuntu systemd-udevd[1311]: link_config: autonegotiation is unset or enabled, the speed and duplex are not writable.
Apr 21 18:47:02 ubuntu kernel: [   39.273878] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:02 ubuntu kernel: [   39.293558] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:04 ubuntu systemd-networkd[1309]: lo: Link is not managed by us
Apr 21 18:47:04 ubuntu kernel: [   41.111054] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:04 ubuntu kernel: [   41.126869] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:04 ubuntu systemd-networkd[1309]: sit0: Link is not managed by us
Apr 21 18:47:04 ubuntu systemd-networkd[1309]: enp0s3: IPv6 successfully enabled
Apr 21 18:47:04 ubuntu kernel: [   41.187078] IPv6: ADDRCONF(NETDEV_UP): enp0s3: link is not ready
Apr 21 18:47:04 ubuntu kernel: [   41.198683] e1000: enp0s3 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: RX
Apr 21 18:47:04 ubuntu kernel: [   41.214888] IPv6: ADDRCONF(NETDEV_CHANGE): enp0s3: link becomes ready
Apr 21 18:47:04 ubuntu systemd-networkd[1309]: enp0s3: Gained carrier
Apr 21 18:47:04 ubuntu kernel: [   41.545147] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:04 ubuntu kernel: [   41.567982] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:04 ubuntu systemd-networkd[1309]: enp0s3: DHCPv4 address 10.0.2.15/24 via 10.0.2.2
Apr 21 18:47:04 ubuntu kernel: [   41.867678] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:04 ubuntu kernel: [   41.868021] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:05 ubuntu systemd-networkd[1309]: enp0s3: Gained IPv6LL
Apr 21 18:47:05 ubuntu kernel: [   42.940924] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:05 ubuntu kernel: [   42.941270] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:05 ubuntu systemd-networkd[1309]: enp0s3: Configured
Apr 21 18:47:05 ubuntu kernel: [   42.967947] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:05 ubuntu kernel: [   42.970881] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:08 ubuntu kernel: [   45.245873] ls (1674) used greatest stack depth: 13672 bytes left
Apr 21 18:47:08 ubuntu kernel: [   45.254727] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:08 ubuntu kernel: [   45.255147] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:08 ubuntu kernel: [   45.412129] systemd-udevd (1313) used greatest stack depth: 13544 bytes left
Apr 21 18:47:09 ubuntu networkd-dispatcher[1637]: No valid path found for iwconfig
Apr 21 18:47:09 ubuntu kernel: [   46.890825] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:09 ubuntu kernel: [   46.891044] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:09 ubuntu networkd-dispatcher[1637]: No valid path found for iw
Apr 21 18:47:09 ubuntu kernel: [   46.905656] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:09 ubuntu kernel: [   46.905656] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:10 ubuntu systemd[1]: Started Dispatcher daemon for systemd-networkd.
Apr 21 18:47:10 ubuntu kernel: [   47.369637] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:10 ubuntu kernel: [   47.369943] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:10 ubuntu systemd[1]: Reached target Multi-User System.
Apr 21 18:47:10 ubuntu kernel: [   47.407643] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:10 ubuntu kernel: [   47.408137] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:10 ubuntu systemd[1]: Reached target Graphical Interface.
Apr 21 18:47:10 ubuntu kernel: [   47.426596] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:10 ubuntu kernel: [   47.426890] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:10 ubuntu systemd[1]: Starting Update UTMP about System Runlevel Changes...
Apr 21 18:47:10 ubuntu systemd[1]: Started Update UTMP about System Runlevel Changes.
Apr 21 18:47:10 ubuntu systemd[1]: Startup finished in 5.864s (kernel) + 41.926s (userspace) = 47.790s.
Apr 21 18:47:20 ubuntu kernel: [   57.848066] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:20 ubuntu kernel: [   57.855515] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:21 ubuntu systemd[1]: Created slice User Slice of root.
Apr 21 18:47:21 ubuntu kernel: [   58.374700] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:21 ubuntu kernel: [   58.374996] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:21 ubuntu systemd[1]: Starting User Manager for UID 0...
Apr 21 18:47:21 ubuntu kernel: [   58.549585] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:21 ubuntu kernel: [   58.549924] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:21 ubuntu kernel: [   58.660718] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:21 ubuntu kernel: [   58.661020] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:21 ubuntu systemd[1]: Started Session 1 of user root.
Apr 21 18:47:21 ubuntu kernel: [   58.699949] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:21 ubuntu kernel: [   58.707676] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:47:23 ubuntu systemd[1695]: Listening on GnuPG cryptographic agent and passphrase cache (restricted).
Apr 21 18:47:23 ubuntu systemd[1695]: Listening on GnuPG network certificate management daemon.
Apr 21 18:47:23 ubuntu systemd[1695]: Listening on GnuPG cryptographic agent (ssh-agent emulation).
Apr 21 18:47:23 ubuntu systemd[1695]: Listening on GnuPG cryptographic agent and passphrase cache (access for web browsers).
Apr 21 18:47:23 ubuntu systemd[1695]: Reached target Timers.
Apr 21 18:47:23 ubuntu systemd[1695]: Reached target Paths.
Apr 21 18:47:23 ubuntu systemd[1695]: Listening on GnuPG cryptographic agent and passphrase cache.
Apr 21 18:47:23 ubuntu systemd[1695]: Reached target Sockets.
Apr 21 18:47:23 ubuntu systemd[1695]: Reached target Basic System.
Apr 21 18:47:23 ubuntu systemd[1695]: Reached target Default.
Apr 21 18:47:23 ubuntu systemd[1]: Started User Manager for UID 0.
Apr 21 18:47:23 ubuntu systemd[1695]: Startup finished in 1.225s.
Apr 21 18:49:07 ubuntu kernel: [  164.979471] python3 (1718) used greatest stack depth: 13192 bytes left
Apr 21 18:49:08 ubuntu kernel: [  165.055114] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 18:49:08 ubuntu kernel: [  165.067448] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 19:01:37 ubuntu systemd[1]: Starting Cleanup of Temporary Directories...
Apr 21 19:01:37 ubuntu kernel: [  914.343222] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 19:01:37 ubuntu kernel: [  914.354904] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 19:01:37 ubuntu systemd[1]: Started Cleanup of Temporary Directories.
Apr 21 19:01:38 ubuntu kernel: [  915.084407] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 19:01:38 ubuntu kernel: [  915.104393] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 19:17:02 ubuntu kernel: [ 1839.054798] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 19:17:02 ubuntu kernel: [ 1839.054798] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 19:17:02 ubuntu CRON[1737]: (root) CMD (   cd / && run-parts --report /etc/cron.hourly)
Apr 21 19:17:02 ubuntu kernel: [ 1839.103749] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 19:17:02 ubuntu kernel: [ 1839.106897] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 19:17:02 ubuntu kernel: [ 1839.261100] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 19:17:02 ubuntu kernel: [ 1839.261465] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 19:31:37 ubuntu systemd[1]: Starting Message of the Day...
Apr 21 19:31:37 ubuntu kernel: [ 2714.256087] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 19:31:37 ubuntu kernel: [ 2714.267582] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 19:31:37 ubuntu 50-motd-news[1742]: dpkg-query: no packages found matching curl
Apr 21 19:31:37 ubuntu kernel: [ 2714.763481] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 19:31:37 ubuntu kernel: [ 2714.763481] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 19:31:38 ubuntu systemd[1]: Started Message of the Day.
Apr 21 19:31:38 ubuntu kernel: [ 2715.359131] systemd-journald[1080]: Failed to open system journal: Not a directory
Apr 21 19:31:38 ubuntu kernel: [ 2715.369973] systemd-journald[1080]: Failed to open system journal: Not a directory
