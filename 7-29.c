/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-29.c
* @Description:	A question which numbered 7-29 in PTA. This question requires
				that the program be written to find polynomial root with
				bisection method
* @Version:		1.8.5.180402_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <math.h>

double func(double a3, double a2, double a1, double a0, double x)
{
	return a3 * (x*x*x) + a2 * (x*x) + a1 * x + a0;
}

int main(int argc, char const *argv[])
{
	double a3, a2, a1, a0;	// Coefficients of polynomial
	double a, b;	// Interval endpoints
	double root, midpoint, f_a, f_b, midpoint_value;
	scanf("%lf%lf%lf%lf\n", &a3, &a2, &a1, &a0);
	scanf("%lf%lf", &a, &b);

	// printf("a3 = %lf\n", a3);
	// printf("a2 = %lf\n", a2);
	// printf("a1 = %lf\n", a1);
	// printf("a0 = %lf\n", a0);
	// printf("a= %lf, b = %lf\n", a, b);

	while (fabs(a-b) > 1e-6)
	{
		midpoint = (a + b) / 2;
		f_a = func(a3, a2, a1, a0, a);
		f_b = func(a3, a2, a1, a0, b);
		midpoint_value = func(a3, a2, a1, a0, midpoint);

		// printf("midpoint = %lf\n", midpoint);
		// printf("f_a = %lf\n", f_a);
		// printf("f_b = %lf\n", f_b);
		// printf("midpoint_value = %lf\n", midpoint_value);

		if (f_a * f_b < 0)
		{
			if (fabs(midpoint_value-0) < 1e-4)
			{
				root = midpoint;
				break;
			}
			else if (midpoint_value * f_a > 0)
				a = midpoint;
			else
				b = midpoint;
		}
	}

	printf("%.2lf\n", root);

	return 0;
}
