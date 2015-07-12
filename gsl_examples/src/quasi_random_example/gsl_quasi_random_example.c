/*
 ============================================================================
 Name        : gsl_quasi_random_example.c
 Author      : Hamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <gsl/gsl_qrng.h>

int main(void) {
	int i;
	gsl_qrng * q = gsl_qrng_alloc(gsl_qrng_sobol, 2);

	for (i = 0; i < 1024; i++) {
		double v[2];
		gsl_qrng_get(q, v);
		printf("%.5f %.5f\n", v[0], v[1]);
	}

	gsl_qrng_free(q);

	return EXIT_SUCCESS;
}
