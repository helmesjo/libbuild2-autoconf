// HAVE_FUNC_PTR_ATTRIBUTE_RETURNS_NONNULL

#undef HAVE_FUNC_PTR_ATTRIBUTE_RETURNS_NONNULL

/* Checks if the compiler supports the unused attribute for function
 * pointers, which can suppress warnings for unused function pointers.
 */
#if defined(__GNUC__) || defined(__clang__)
#  define HAVE_FUNC_PTR_PTR_ATTRIBUTE_RETURNS_NONNULL 1
#endif
