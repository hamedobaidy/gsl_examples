/*
 * cumulative_distribution.c
 *
 *  Created on: Jul 6, 2015
 *      Author: hamed
 */


#include <stdio.h>
#include <stdlib.h>
#include <gsl/gsl_cdf.h>

int main(void) {
	double P, Q;
	double x = 2.0;

	P = gsl_cdf_ugaussian_P (x);
	printf ("prob(x < %f) = %f\n", x, P);

	Q = gsl_cdf_ugaussian_Q (x);
	printf ("prob(x > %f) = %f\n", x, Q);

	x = gsl_cdf_ugaussian_Pinv (P);
	printf ("Pinv(%f) = %f\n", P, x);

	x = gsl_cdf_ugaussian_Qinv (Q);
	printf ("Qinv(%f) = %f\n", Q, x);

	return EXIT_SUCCESS;
}
