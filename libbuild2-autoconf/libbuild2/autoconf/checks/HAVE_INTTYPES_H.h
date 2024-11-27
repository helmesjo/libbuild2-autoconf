// HAVE_INTTYPES_H : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_INTTYPES_H

/* Since OpenBSD 3.9, FreeBSD 5.0, NetBSD 5.0, Mac OS X 10.3
 * glibc 2.2, Mingw-w64 2.0, Platform SDK 10.
 */
#if BUILD2_AUTOCONF_OPENBSD_PREREQ(200601) || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(5, 0)   || \
    BUILD2_AUTOCONF_NETBSD_PREREQ(5, 0)    || \
    BUILD2_AUTOCONF_MACOS_PREREQ(10, 3)    || \
    BUILD2_AUTOCONF_GLIBC_PREREQ(2, 2)     || \
    BUILD2_AUTOCONF_MINGW_PREREQ(2, 0)     || \
    defined(_WIN32) || \
    defined(__CYGWIN__)
#  define HAVE_INTTYPES_H 1
#endif
