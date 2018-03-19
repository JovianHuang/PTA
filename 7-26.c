/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-26.c
* @Description:	A question which numbered 7-26 in PTA. This question requires
				that the program be written to find the greatest
				common divisor and least common multiple of two
				given positive integers
* @Version:		1.0.0.180319_beta
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int m, n;
	scanf("%d %d", &m, &n);

	// Variable: gcd for greast common dividor, lcm for least common multilpe
	int gcd = 0, lcm = 0;
	// To find the gcd with Euclidean Algorithm
	if (m < n)
	{
		int temp;
		temp = n;
		n = m;
		m = temp;
	}
	int temp_m = m, temp_n = n;
	int remainder;
	while (temp_n != 0)
	{
		remainder = temp_m % temp_n;
		temp_m = temp_n;
		temp_n = remainder;
	}
	gcd = temp_m;

	// To find the lcm
	lcm = m * n / gcd;

	printf("%d %d", gcd, lcm);

	return 0;
}
