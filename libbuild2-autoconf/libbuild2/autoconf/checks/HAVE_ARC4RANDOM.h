// HAVE_ARC4RANDOM : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_ARC4RANDOM

/* Since OpenBSD 2.1, FreeBSD 2.3, NetBSD 2.0, Mac OS X 10.7
 * and glibc 2.36.
 */
#if BUILD2_AUTOCONF_OPENBSD_PREREQ(199706) || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(2, 3)   || \
    BUILD2_AUTOCONF_NETBSD_PREREQ(2, 0)    || \
    BUILD2_AUTOCONF_MACOS_PREREQ(10, 7)    || \
    BUILD2_AUTOCONF_GLIBC_PREREQ(2, 36)
#  define HAVE_ARC4RANDOM 1
#endif
