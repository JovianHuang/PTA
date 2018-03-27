/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-32.c
* @Description:	A question which numbered 7-32 in PTA. This question requires
				that the program be written to find the first N terms of the
				interleaved sequence.
* @Version:		1.0.1.180327_beta
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	double sum = 0;
	int n;
	scanf("%d", &n);

	for ( ; n > 0; n--)
	{
		int flag = 1;
		if (!(n % 2))
			flag = -1;
		sum += flag * n / (double)(2 * n - 1);
	}

	printf("%.3f\n", sum);

	return 0;
}
