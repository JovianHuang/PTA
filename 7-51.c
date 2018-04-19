/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-51.c
* @Description:	A question which numbered 7-51 in PTA. This question requires
				that the program be written to balabala
* @Version:		1.2.2.180417_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <math.h>

int prime(int);

int main(int argc, char const *argv[])
{
	int n, k;
	scanf("%d%d", &n, &k);
	int iPrime[10];

	int isum = 0, icounter = 0;
	for (n; n > k; n--)
	{
		if (prime(n))
		{
			iPrime[icounter] = n;
			isum += n;
			icounter++;
		}
		
		if (!(icounter < 10))
			break;
	}

	for (int i = 0; i < icounter; i++)
	{
		printf("%d", iPrime[i]);
		if (i < icounter - 1)
			printf("+");
	}
	printf("=%d\n", isum);

	return 0;
}

int prime(int p)
{
	int bound = (int)sqrt(p) + 1;
	
	if (p <= 1)
		return 0;

	for (int i = 2; i < bound; i++)
	{
		if (!(p % i))
			return 0;
	}

	return 1;
}