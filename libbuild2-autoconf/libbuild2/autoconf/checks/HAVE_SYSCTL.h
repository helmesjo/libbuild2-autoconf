// HAVE_SYSCTL : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_SYSCTL
/* Since 4.4BSD (OpenBSD 2.1-6.2, FreeBSD, NetBSD, Mac OS X 10.7),
 * <= glibc 2.31.
 */
#if (BUILD2_AUTOCONF_OPENBSD_PREREQ(199706) && !BUILD2_AUTOCONF_OPENBSD_PREREQ(201804)) || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(2, 3)   || \
    BUILD2_AUTOCONF_NETBSD_PREREQ(2, 0)    || \
    BUILD2_AUTOCONF_MACOS_PREREQ(10, 7)    || \
    (defined(__GLIBC__) && defined(__GLIBC_MINOR__) && ((__GLIBC__ << 16) + __GLIBC_MINOR__ <= ((2) << 16) + (31)))
#  define HAVE_SYSCTL 1
#endif
