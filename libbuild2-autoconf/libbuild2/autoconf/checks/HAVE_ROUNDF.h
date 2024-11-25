// HAVE_ROUNDF : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_ROUNDF

/*  Since glibc 2.1, 4.3BSD, FreeBSD 1.0, OpenBSD 2.0, NetBSD 1.0, MacOS, Mingw-w64 1.0
 *  POSIX.1, SVr4
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 1) || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(1, 0) || \
    BUILD2_AUTOCONF_OPENBSD_PREREQ(199510) || \
    BUILD2_AUTOCONF_NETBSD_PREREQ(1, 0) || \
    BUILD2_AUTOCONF_MINGW_PREREQ(1, 0) || \
    defined(BUILD2_AUTOCONF_MACOS) || \
    defined(_WIN32) || \
    ((defined(__sun) && defined(__SVR4)) || defined(__sun__))
#  define HAVE_ROUNDF 1
#endif
