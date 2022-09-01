// HAVE__GMTIME_S : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE__GMTIME_S

/* Win32
 */
#if defined(_WIN32)
#  define HAVE__GMTIME_S 1
#endif