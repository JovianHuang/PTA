/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	6-1.c
* @Description:	A question which numbered 6-1 in PTA. This question requires
				that the program be written to judging the prime number, and
				calculating the sum of primes in a given interval
* @Version:		0.2.0.180323_base
* =========================================================================== *
*/
#include <stdio.h>
#include <math.h>

int prime(int p)
{
	int flag = 0;

	for (int i = 2; i <= sqrt(p); i++)
	{
		if (p % i)
		{
			flag = 1;
			break;
		}
	}

	return flag;
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

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

	return 0;
}
