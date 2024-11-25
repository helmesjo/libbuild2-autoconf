// HAVE___BSWAP_32 : BUILD2_AUTOCONF_LIBC_VERSION

#undef HAVE___BSWAP_32

/* Checks for the availability of the __bswap_32
 * macro or intrinsic, which swaps the byte order
 * of a 32-bit integer.
 * It is typically defined in system headers such
 * as <byteswap.h> on GNU-based systems or equivalent
 * headers on other platforms.
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 9)      || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(5, 0)    || \
    BUILD2_AUTOCONF_OPENBSD_PREREQ(200305)  || \
    BUILD2_AUTOCONF_NETBSD_PREREQ(1, 6)
#  define HAVE___BSWAP_32 1
#endif
