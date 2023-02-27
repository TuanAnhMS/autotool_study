# Our binary is produced here
bin_PROGRAMS = main
main_SOURCES = main.cxx

# main library will be installed into the default directory for "bin"'s (hence we used the bin prefix)

noinst_LIBRARIES = libhelper.a
libhelper_a_SOURCES = helper.cxx
# noinst_ : assures that this library is not installed to the user's computer.
# libABC.A is a *nix convertion. if you noticed, we replace the . with _ in SOURCES line

main_LDADD = libhelper.a ../my_inc/libmyadd.a
# LDADD specifies which libraries to compile into "main". we have two libraries.
# libhelper comes from this directory and libmyadd comes from my_inc directory. 

