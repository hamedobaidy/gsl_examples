/*
 ============================================================================
 Name        : gsl_example.c
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : GNU Scientific Library - simple example
 ============================================================================
 */

#include <stdio.h>
#include <gsl/gsl_sf_bessel.h>

int
main (void)
{
  double x = 5.0;
  double y = gsl_sf_bessel_J0 (x);
  printf ("J0(%g) = %.18e\n", x, y);
  return 0;
}
