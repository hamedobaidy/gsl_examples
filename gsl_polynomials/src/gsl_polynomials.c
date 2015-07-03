/*
 ============================================================================
 Name        : gsl_polynomials.c
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <gsl/gsl_poly.h>

int main(void) {
	puts("GSL polynomial functions.");

	// gsl_poly_eval
	double d[] = {1, 2, 3, 4};
	double y = gsl_poly_eval(d, 4, 1);
	printf("c0 + c1 * x + c2 * x^2 + c3 * x^3, (x=1) = %f\n", y);

	// gsl_poly_solve_quadratic
	double x0, x1;
	y = gsl_poly_solve_quadratic(1, 1, 1, &x0, &x1);
	printf("x^2+x+1, x0 = %f, x1 = %f", x0, x1);

	return EXIT_SUCCESS;
}
