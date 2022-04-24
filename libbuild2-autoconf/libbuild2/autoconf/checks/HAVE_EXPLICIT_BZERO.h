// HAVE_EXPLICIT_BZERO : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_EXPLICIT_BZERO

/* Since FreeBSD 11, OpenBSD 5.5, and glibc 2.25.
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 25)   || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(11, 0) || \
    BUILD2_AUTOCONF_OPENBSD_PREREQ(201405)
#  define HAVE_EXPLICIT_BZERO 1
#endif
