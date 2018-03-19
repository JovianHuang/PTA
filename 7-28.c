/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-28.c
* @Description:	A question which numbered 7-28 in PTA. This question requires
				that the program be written to find the sum of the number of
				positive intergers N and their digits
* @Version:		1.0.0.180319_beta
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n; // That given positive intergers N
	scanf("%d", &n);

	int digits = 0, sum = 0;

	while (n != 0)
	{
		sum = n % 10 + sum;
		n = n / 10;
		digits++;
	}

	printf("%d %d", digits, sum);

	return 0;
}
