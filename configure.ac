# Initialize AC: ACINIT (package_name, version, bug_report_address)
AC_INIT([my_programe], [0,1])
# Iinitialize Automake
AM_INIT_AUTOMAKE

# AM stands for Automake commands, AC stands for Autoconf commands
# we use libraries
AC_PROG_RANLIB

# Let's check for a C++ compiler.
AC_LANG(C++)

# Let's set a C++ compiler.
AC_PROG_CXX
AC_PROG_CC

# Let's specify where the Makefiles should be produced.
# these are the same locations as your Makefile.in's, but name as Makefile only
# We need to do this because both Autoconf and Automake read this file and produce Makefiles from this list.

AC_CONFIG_FILES([Makefile my_inc/Makefile src/Makefile])
# Finally produce "configure" script
AC_OUTPUT