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
	double root, mid, f_a, f_b, mid_value;
	scanf("%lf%lf%lf%lf", &a3, &a2, &a1, &a0);
	scanf("%lf%lf", &a, &b);
	
	while (fabs(a-b) > 1e-6)
	{
		mid = (a + b) / 2;
		f_a = func(a3, a2, a1, a0, a);
		f_b = func(a3, a2, a1, a0, b);
		mid_value = func(a3, a2, a1, a0, mid);

		if (f_a * f_b < 0)
		{
			if (fabs(mid_value-0) < 1e-4)
			{
				root = mid;
				break;
			}
			else if (mid_value * f_a > 0)
				a = mid;
			else
				b = mid;
		}
	}

	printf("%.2lf\n", root);

	return 0;
}
