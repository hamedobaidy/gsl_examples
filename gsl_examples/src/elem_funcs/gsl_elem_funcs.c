/*
 ============================================================================
 Name        : gsl_elem_funcs.c
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : GNU Scientific Library - elementary functions example
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <gsl/gsl_math.h>

int main(void) {
	puts("GSL elementary functions!");

	double d = gsl_log1p(0.05);
	printf("log(1+0.05) = %f\n", d);

	d = gsl_expm1(0.05);
	printf("exp(0.05) - 1 = %f\n", d);

	d = gsl_hypot(3.0, 4.0);
	printf("hypot(3, 4) = %f\n", d);

	d = gsl_hypot3(3, 4, 5);
	printf("hypot3(3, 4, 5) = %f\n", d);

	d = gsl_acosh(M_PI);
	printf("acosh(pi) = %f\n", d);

	d = gsl_asinh(M_PI);
	printf("asinh(pi) = %f\n", d);

	d = gsl_atanh(M_PI_4);
	printf("atanh(pi/4) = %f\n", d);

	d = gsl_ldexp(0.05, 2);
	printf("x * 2^2 = %f", d);

	d = gsl_frexp(0.05, 2);
	printf("f = %f", d);

	return EXIT_SUCCESS;
}
