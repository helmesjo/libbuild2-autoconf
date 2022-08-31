// HAVE_GETENV : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_GETENV

/* Since Version 7 AT&T UNIX, 4.3BSD-Tahoe (OpenBSD, FreeBSD, NetBSD, Mac OS X),
* glibc 1.90
 */
#if defined(__FreeBSD__)            || \
    defined(__OpenBSD__)            || \
    defined(__NetBSD__)             || \
    defined(BUILD2_AUTOCONF_MACOS)  || \
    BUILD2_AUTOCONF_GLIBC_PREREQ(1, 90)
#  define HAVE_GETENV 1
#endif
