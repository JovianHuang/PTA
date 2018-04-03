/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-25.c
* @Description:	A question which numbered 7-25 in PTA. This question requires
				that the program be written to calculates the sum of odd 
				numbers in a given series of positive integers.
* @Version:		1.2.4.180402_aphla
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int sum = 0;
	int num;

	while (1)
	{
		scanf("%d", &num);
		if (num < 1)
			break;
		else if (num % 2)
			sum += num;
	}

	printf("%d\n", sum);

	return 0;
}
	