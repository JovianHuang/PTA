/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-41.c
* @Description:	A question which numbered 7-41 in PTA. This question requires
				that the program be written to clculate the factorial sum
* @Version:		1.0.0.180413_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	int sum = 0;
	for (n; n; n--)
	{
		int factorial = 1;

		for (int i = n; i; i--)
			factorial *= i;
		sum += factorial;
	}
	printf("%d\n", sum);

	return 0;
}
	