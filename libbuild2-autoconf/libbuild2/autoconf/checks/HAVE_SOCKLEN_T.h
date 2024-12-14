// HAVE_SOCKLEN_T

#undef HAVE_SOCKLEN_T

/* socklen_t is available in:
 * - glibc since 2.0
 * - BSD systems (including MacOS)
 * - Solaris, Cygwin
 */
#  if defined(__linux__)                  || \
      defined(__FreeBSD__)                || \
      defined(__OpenBSD__)                || \
      defined(__NetBSD__)                 || \
      defined(__APPLE__)                  || \
      (defined(__sun) && defined(__SVR4)) || \
      defined(__CYGWIN__)
#  define HAVE_SOCKLEN_T 1
#endif
