// HAVE_STRNLEN : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_STRNLEN

/* This checks for strnlen(), which calculates the length of
 * a string up to a specified maximum.
 * It is a POSIX function.
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 10) || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(8, 0) || \
    BUILD2_AUTOCONF_NETBSD_PREREQ(6, 0) || \
    BUILD2_AUTOCONF_MACOS_PREREQ(10, 7)
#  define HAVE_STRNLEN 1
#endif
