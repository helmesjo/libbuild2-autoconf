// HAVE___BUILTIN_EXPECT

#undef HAVE___BUILTIN_EXPECT

/* Checks for the GCC/Clang built-in function __builtin_expect(),
 * which provides branch prediction hints.
 */
#if defined(__GNUC__) || defined(__clang__)
#  define HAVE___BUILTIN_BSEXPECT
#endif
