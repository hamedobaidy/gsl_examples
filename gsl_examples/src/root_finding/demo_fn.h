/*
 * demo_fn.h
 *
 *  Created on: Jul 7, 2015
 *      Author: hamed
 */

#ifndef DEMO_FN_H_
#define DEMO_FN_H_

struct quadratic_params {
	double a, b, c;
};

double quadratic(double x, void *params);
double quadratic_deriv(double x, void *params);
void quadratic_fdf(double x, void *params, double *y, double *dy);

#endif /* DEMO_FN_H_ */
