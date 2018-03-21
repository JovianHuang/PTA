/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-29.c
* @Description:	A question which numbered 7-29 in PTA. This question requires
				that the program be written to find polynomial root with
				bisection method
* @Version:		1.6.2.180319_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <math.h>

float func(float a3, float a2, float a1, float a0, float x)
{
	float result = 0;

	result = a3 * (x*x*x) + a2 * (x*x) + a1 * x + a0;

	return result;
}

int main(int argc, char const *argv[])
{
	float a3, a2, a1, a0;	// Coefficients of polynomial
	float a, b;	// Interval endpoints
	float root;
	scanf("%f%f%f%f\n", &a3, &a2, &a1, &a0);
	scanf("%f%f", &a, &b);

	printf("a3 = %f\n", a3);
	printf("a2 = %f\n", a2);
	printf("a1 = %f\n", a1);
	printf("a0 = %f\n", a0);
	printf("a= %f, b = %f\n", a, b);

	while (fabs(a-b) > 1e-6)
	{
		float midpoint = (a + b) / 2;
		float f_a = func(a3, a2, a1, a0, a);
		float f_b = func(a3, a2, a1, a0, b);
		float midpoint_value = func(a3, a2, a1, a0, midpoint);

		printf("midpoint = %f\n", midpoint);
		printf("f_a = %f\n", f_a);
		printf("f_b = %f\n", f_b);
		printf("midpoint_value = %f\n", midpoint_value);

		if (f_a * f_b < 0)
		{
			if (fabs(midpoint_value-0) < 1e-4)
			{
				root = midpoint;
				break;
			}
			else if (midpoint_value * f_a > 0)
			{
				a = midpoint;
			}
			else if (midpoint_value * f_b > 0)
			{
				b = midpoint;
			}
		}
	}

	printf("%.2f\n", root);

	return 0;
}
