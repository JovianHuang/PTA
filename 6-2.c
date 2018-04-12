/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	6-2.c
* @Description:	A question which numbered 6-2 in PTA. This question requires
				that the program be written to use function to verify Goldbach's
				Conjecture
* @Version:		1.1.0.180411_base
* =========================================================================== *
*/
#include <stdio.h>
#include <math.h>

int prime(int p);
void Goldbach(int n);

int main(int argc, char const *argv[])
{
	int m, n, i, cnt;

	scanf("%d %d", &m, &n);
	if (prime(m) != 0)
		printf("%d is a prime number\n", m);
	if (m < 6)
		m = 6;
	if (m % 2)
		m++;
	cnt = 0;
	for (i = m; i <= n; i += 2)
	{
		Goldbach(i);
		cnt++;
		if (cnt % 5)
			printf(", ");
		else
			printf("\n");
	}

	return 0;
}
	
int prime(int p)
{
	if (p <= 1)
		return 0;

	int bound = (int)sqrt(p) + 1;
	for (int i = 2; i < bound; i++)
	{
		if (!(p % i))
			return 0;
	}

	return 1;
}

void Goldbach(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (prime(i))
		{
			int temp = n - i;
			if (prime(temp) && temp >= i)
			{
				printf("%d=%d+%d", n, i, temp);
				break;
			}
		}
		else
			continue;
	}
}