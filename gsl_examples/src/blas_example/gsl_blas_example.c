/*
 ============================================================================
 Name        : gsl_blas_example.c
 Author      : Hamed
 Version     :
 Copyright   : Your copyright notice
 Description : GNU Scientific Library - BLAS example
 ============================================================================
 */

#include <stdio.h>
#include <gsl/gsl_blas.h>
#include <stdlib.h>

int main(void) {
	double a[] = { 0.11, 0.12, 0.13, 0.21, 0.22, 0.23 };

	double b[] = { 1011, 1012,
	1021, 1022,
	1031, 1032 };

	double c[] = { 0.00, 0.00,
	0.00, 0.00 };

	gsl_matrix_view A = gsl_matrix_view_array(a, 2, 3);
	gsl_matrix_view B = gsl_matrix_view_array(b, 3, 2);
	gsl_matrix_view C = gsl_matrix_view_array(c, 2, 2);

	/* Compute C = A B */

	gsl_blas_dgemm (CblasNoTrans, CblasNoTrans,
	1.0, &A.matrix, &B.matrix,
	0.0, &C.matrix);

	printf ("[ %g, %g\n", c[0], c[1]);
	printf (" %g, %g ]\n", c[2], c[3]);

	return EXIT_SUCCESS;
}
