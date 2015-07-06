dnl Process this file with autoconf to produce a configure script.

AC_PREREQ(2.59)
AC_INIT(gtkmm_gsl_test, 1.0)


AC_CANONICAL_SYSTEM
AM_INIT_AUTOMAKE()

AC_PROG_CXX

AC_CHECK_LIB([m],[cos], [])
AC_CHECK_LIB([gslcblas],[cblas_dgemm], [])
AC_CHECK_LIB([gsl],[gsl_blas_dgemm], [])

PKG_CHECK_MODULES([GTKMM], [gtkmm-3.0])

AC_CONFIG_FILES(Makefile src/Makefile)
AC_OUTPUT

