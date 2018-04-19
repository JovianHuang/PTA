/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-50.c
* @Description:	A question which numbered 7-50 in PTA. This question requires
				that the program be written to 
* @Version:		1.0.6.180417_base
* =========================================================================== *
*/
#include <stdio.h>
#include <math.h>

double fact(int);

int main(int argc, char const *argv[])
{
	double eps;
	scanf("%le", &eps);

	double divisor = 1, pi_two = 0; 
	double item;
	for (int i = 0; ; i++)
	{
		divisor *= (2 * i + 1);
		item = fact(i) / divisor;
		if (item - 0 > eps)
			pi_two += item;
		else
			break; 
	}
	pi_two += item;
	printf("PI = %.5lf\n", pi_two * 2);

	return 0;
}

double fact(int n)
{
	double result = 1;
	if (n > 0)
	{
		for ( ; n; n--)
			result *= n;
	}

	return result;
}