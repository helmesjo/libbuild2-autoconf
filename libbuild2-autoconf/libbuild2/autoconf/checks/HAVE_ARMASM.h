// HAVE_ARMASM

#undef HAVE_ARMASM

/* Check for ARM assembly support.
 * ARM assembly is supported on compilers targeting ARM architectures.
 *
 * Available on Linux/glibc, MacOS, Windows including MinGW.
 * Supported by GCC, Clang.
 */
#if defined(__GNUC__) || defined(__clang__)
#  if defined(__ARM_ARCH) || \
      defined(__arm__)    || \
      defined(__aarch64__)
#    define HAVE_ARMASM 1
#  endif
#endif
