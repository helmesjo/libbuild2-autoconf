// HAVE_STRUCT_GROUP_SOURCE_REQ : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_STRUCT_GROUP_SOURCE_REQ

/* Presence of the group_source_req structure, used for managing IP multicast group
 * subscriptions with source filtering, typically found in newer networking libraries.
 * Since glibc 2.5, FreeBSD 9.0
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 5) || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(9, 0)
#  define HAVE_STRUCT_GROUP_SOURCE_REQ 1
#endif
