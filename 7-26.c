/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-26.c
* @Description:	A question which numbered 7-26 in PTA. This question requires
				that the program be written to find the greatest
				common divisor and least common multiple of two
				given positive integers
* @Version:		2.1.0.180412_beta
* =========================================================================== *
*/
#include <stdio.h>
int GCD(int, int);

int main(int argc, char const *argv[])
{
	int m, n;
	scanf("%d %d", &m, &n);

	// Variable: gcd for greast common dividor, lcm for least common multilpe
	int gcd = 0, lcm = 0;

	gcd = GCD(m, n);
	lcm = m * n / gcd;

	printf("%d %d", gcd, lcm);

	return 0;
}

int GCD(int m, int n)
{
	int remainder, i;

	while (n != 0)
	{
		remainder = m % n;
		m = n;
		n = remainder;
	}
	return m;
}