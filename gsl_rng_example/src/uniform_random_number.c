/*
 * uniform_random_number.c
 *
 *  Created on: Jul 6, 2015
 *      Author: hamed
 */

#include <stdio.h>
#include <stdlib.h>
#include <gsl/gsl_rng.h>

int main(void) {
	const gsl_rng_type * T;

	gsl_rng * r;

	int i, n = 10;

	gsl_rng_env_setup();

	T = gsl_rng_default;
	r = gsl_rng_alloc(T);

	for (i = 0; i < n; i++) {
		double u = gsl_rng_uniform(r);
		printf("%.5f\n", u);
	}

	gsl_rng_free(r);

	return EXIT_SUCCESS;
}

