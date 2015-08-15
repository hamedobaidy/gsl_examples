/*
 ============================================================================
 Name        : gsl_polynomials.c
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : GNU Scientific Library - polynomial example
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <gsl/gsl_errno.h>
#include <gsl/gsl_poly.h>

int main(void) {
	puts("GSL polynomial functions.");

	// gsl_poly_eval
	double d[] = { 1, 2, 3, 4 };
	double y = gsl_poly_eval(d, 4, 1);
	printf("c0 + c1 * x + c2 * x^2 + c3 * x^3, (x=1) = %f\n", y);

	// gsl_poly_solve_quadratic
	double x0, x1;
	int i = gsl_poly_solve_quadratic(1, 1, 1, &x0, &x1);
	printf("x^2+x+1, x0 = %f, x1 = %f\n", x0, x1);
	printf("i = %d\n\n", i);

	// gsl_ploy_complex_solve_quadratic
	gsl_complex z0, z1;
	i = gsl_poly_complex_solve_quadratic(1, 1, 4, &z0, &z1);
	printf("z0 = %f + %fi, z1 = %f + %fi\n", z0.dat[0], z0.dat[1], z1.dat[0],
			z1.dat[1]);
	printf("i = %d\n\n", i);

	// gsl_poly_solve_cubic
	double x2;
	i = gsl_poly_solve_cubic(1, 2, 3, &x0, &x1, &x2);
	printf("x0 = %f x1 = %f x2 = %f\n", x0, x1, x2);
	printf("i = %d\n\n", i);

	// gsl_poly_complex_solve_cubic
	gsl_complex z2;
	i = gsl_poly_complex_solve_cubic(4, 5, 6, &z0, &z1, &z2);
	printf("z0 = %f + %fi, z1 = %f + %fi, z2 = %f + %fi\n", z0.dat[0],
			z0.dat[1], z1.dat[0], z1.dat[1], z2.dat[0], z2.dat[1]);
	printf("i = %d\n\n", i);

	// gsl_poly_complex_solve
	gsl_poly_complex_workspace *w = gsl_poly_complex_workspace_alloc(10);
	double z[18];
	double a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int j = gsl_poly_complex_solve(a, 10, w, z);
	if (j == GSL_SUCCESS) {
		printf("gsl_poly_complex_solve returned GSL_SUCCESS\n");
		for (i = 0; i < 9; i++)
				printf("z%d = %+.18f %+.18f\n", i, z[2 * i], z[2 * i + 1]);
	} else {
		printf("gsl_poly_complex_solve returned GSL_FAILED\n");
	}

	gsl_poly_complex_workspace_free(w);

	return EXIT_SUCCESS;
}
