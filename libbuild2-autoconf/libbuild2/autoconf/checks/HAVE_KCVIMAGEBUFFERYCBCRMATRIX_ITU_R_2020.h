// HAVE_KCVIMAGEBUFFERYCBCRMATRIX_ITU_R_2020 : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_KCVIMAGEBUFFERYCBCRMATRIX_ITU_R_2020

/* ITU-R BT.2020 YCbCr matrix, used in UHDTV color space conversions.
 * Since MacOS 10.11/iOS 9
 */
#if BUILD2_AUTOCONF_MACOS_PREREQ(10, 11)
#  define HAVE_KCVIMAGEBUFFERYCBCRMATRIX_ITU_R_2020 1
#endif
