/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-48.c
* @Description:	A question which numbered 7-48 in PTA. This question requires
				that the program be written to 
* @Version:		1.0.0.180416_alpha
* =========================================================================== *
*/
#include <stdio.h>

double fact(int);

int main(int argc, char const *argv[])
{
	int m, n;
	scanf("%d%d", &m, &n);

	int result = fact(n) / (fact(m) * fact(n - m));

	printf("result = %d\n", result); 

	return 0;
}

double fact(int n)
{
	double result = 1;
	for ( ; n; n--)
		result *= n;

	return result;
}