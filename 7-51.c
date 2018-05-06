/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-51.c
* @Description:	A question which numbered 7-51 in PTA. This question requires
				that the program be written to balabala
* @Version:		1.2.9.180504_beta
* =========================================================================== *
*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

_Bool prime(int);

int main(int argc, char const *argv[])
{
	int n, k;
	scanf("%d%d", &n, &k);
	int arrPrime[10];

	int sum = 0, counter = 0;
	for (n; counter < k; n--)
	{
		if (prime(n))
		{
			arrPrime[counter] = n;
			sum += n;
			counter++;
		}

		if (!(counter < 10) || n < 2)
			break;
	}

	for (int i = 0; i < counter; i++)
	{
		printf("%d", arrPrime[i]);
		if (i < counter - 1)
			printf("+");
	}
	printf("=%d\n", sum);

	return 0;
}

_Bool prime(int p)
{
	_Bool isPrime = true;
	int bound = (int)sqrt(p) + 1;

	if (p <= 1)
		isPrime = false;

	for (int i = 2; i < bound; i++)
		if (!(p % i))
			isPrime = false;

	return isPrime;
}