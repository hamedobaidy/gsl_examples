/*
 ============================================================================
 Name        : gsl_rng_example.c
 Author      : Hamed
 Version     :
 Copyright   : GNU General Public License
 Description : GNU Scientific Library - random number generation example
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <gsl/gsl_rng.h>

gsl_rng * r; /* global generator */

int main(void) {
	const gsl_rng_type * T;

	gsl_rng_env_setup();

	T = gsl_rng_default;
	r = gsl_rng_alloc (T);

	printf ("generator type: %s\n", gsl_rng_name (r));
	printf ("seed = %lu\n", gsl_rng_default_seed);
	printf ("first value = %lu\n", gsl_rng_get (r));

	gsl_rng_free (r);

	return EXIT_SUCCESS;
}
