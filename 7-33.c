/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-33.c
* @Description:	A question which numbered 7-33 in PTA. This question requires
				that the program be written to statistics the number of primes
				in the given integer M and N intervals and sums them
* @Version:		1.0.0.180330_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <math.h>

int prime(int p)
{
	if (p <= 1)
	{
		return 0;
	}

	int bound = (int)sqrt(p) + 1;
	for (int i = 2; i < bound; i++)
	{
		if (!(p % i))
		{
			return 0;
		}
	}

	return 1;
}

int PrimeSum(int m, int n)
{
	int sum = 0;
	int p;

	for( p=m; p<=n; p++ )
	{
        if( prime(p) != 0 )
            sum += p;
    }

	return sum;
}

int main(int argc, char const *argv[])
{
	int m, n, p;
	int count = 0;

    scanf("%d %d", &m, &n);
    for( p=m; p<=n; p++ ) 
    {
        if( prime(p) != 0 )
           count++; 
    }
    printf("%d %d\n", count, PrimeSum(m, n));

	return 0;
}

