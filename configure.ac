AC_INIT(configure.ac)

AM_CONFIG_HEADER(config.h)

AM_INIT_AUTOMAKE(ext4magic, 0.3.2)

AC_LANG_C
AC_PROG_CC
AM_PROG_CC_C_O
AM_PROG_LIBTOOL

fail=0
AC_CHECK_HEADER([ext2fs/ext2fs.h],[],[fail=1])
AC_CHECK_HEADER([blkid/blkid.h],[],[fail=1])
AC_CHECK_HEADER([e2p/e2p.h],[],[fail=1])
AC_CHECK_HEADER([uuid/uuid.h],[],[fail=1])
test $fail = 1 &&
AC_MSG_ERROR([You must install the develop packages "ext2fs , blkid , e2p , uuid" to build ext4magic])

fail=0
AC_CHECK_HEADER([zlib.h],[],[fail=1])
AC_CHECK_HEADER([bzlib.h],[],[fail=1])
test $fail = 1 &&
AC_MSG_ERROR([You must install the packages "zlib-devel and libbz2-devel" to build this version]) 

fail=0
AC_SEARCH_LIBS([ext2fs_test_inode_bitmap_range], [ext2fs], [], [fail=1])
test $fail = 1 &&
AC_MSG_ERROR([You must have ext2fs version >= 1.41.9 to build ext4magic])

fail=0
AC_SEARCH_LIBS([magic_getpath], [magic], [], [fail=1])
test $fail = 1 &&
AC_MSG_ERROR([library libmagic.so >= 5.04 not found, install package "file-5.04" and "file-devel" (workaround see INSTALL)])



AC_ARG_ENABLE(debug,[  --enable-debug            Turn on debugging ],
         [if test "$GCC" = "yes"; then CPPFLAGS="$CPPFLAGS -DDEBUG"; fi])
AC_ARG_ENABLE(debug-magic,[  --enable-debug-magic            Turn on debugging magic-scan-engine ],
         [if test "$GCC" = "yes"; then CPPFLAGS="$CPPFLAGS -DDEBUG_MAGIC_SCAN"; fi])
AC_ARG_ENABLE(file-attr,[  --enable-file-attr            enable restore of file attribute ],
         [if test "$GCC" = "yes"; then CPPFLAGS="$CPPFLAGS -DFILE_ATTR"; fi])
AC_ARG_ENABLE(expert-mode,[  --enable-expert-mode            enable advanced options for expert mode ],
         [if test "$GCC" = "yes"; then CPPFLAGS="$CPPFLAGS -DEXPERT_MODE"; fi])

AC_OUTPUT(Makefile src/Makefile)
