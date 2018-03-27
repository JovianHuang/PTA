/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-34.c
* @Description:	A question which numbered 7-34 in PTA. This question requires
				that the program be written to find the first N terms of the
				fractional sequence
* @Version:		1.0.0.180327_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	// Mole for molecular, deno for denominator
	double mole = 2, deno = 1, sum = 0;
	double temp;
	int count;
	scanf("%d", &count);

	for (int i = 0; i < count; i++)
	{
		sum += mole / deno;
		temp = mole + deno;
		deno = mole;
		mole = temp;
	}

	printf("%.2f\n", sum);

	return 0;
}
