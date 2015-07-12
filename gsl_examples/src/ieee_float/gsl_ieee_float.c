/*
 ============================================================================
 Name        : gsl_ieee_float.c
 Author      : Hamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <gsl/gsl_ieee_utils.h>

int main(void) {
	float f = 1.0/3.0;
	double d = 1.0/3.0;

	double fd = f; /* promote from float to double */

	printf (" f="); gsl_ieee_printf_float(&f);
	printf ("\n");

	printf ("fd="); gsl_ieee_printf_double(&fd);
	printf ("\n");

	printf (" d="); gsl_ieee_printf_double(&d);
	printf ("\n");

	return EXIT_SUCCESS;
}
