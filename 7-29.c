/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-29.c
* @Description:	A question which numbered 7-29 in PTA. This question requires
				that the program be written to find polynomial root with
				bisection method
* @Version:		1.0.0.180319_alpha
* =========================================================================== *
*/
#include <stdio.h>

float func(float a3, float a2, float a1, float a0，float x)
{
	float result = 0;
	float a3, a2, a1, a0, x;
	result = a3 * (x*x*x) + a2 * (x*x) + a1 * x + a0;

	return result;
}

int main(int argc, char const *argv[])
{
	float a3, a2, a1, a0;	// Coefficients of polynomial
	float a, b;	// Interval endpoints
	scanf("%d%d%d%d", &a3, &a2, &a1, &a0);
	scanf("%d%d", &a, &b);

	while (a != b)
	{
		float midpoint = (a + b) / 2;
		float f_a = func(a3, a2, a1, a0, a);
		float f_b = func(a3, a2, a1, a0, b);
		if (f_a * f_b < 0)
		{
			float midpoint_value = func(a3, a2, a1, a0, midpoint);
			if (midpoint_value == 0)
			{
				float root = midpofloat;
			}
			else if (midpoint_value == f_a)
			{
				a = midpoint;
				break;
			}
			else if (midpoint_value == f_b)
			{
				b = midpoint;
				break;
			}
		}

	}

	printf("%.2f\n", root);

	return 0;
}
