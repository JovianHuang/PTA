/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-42.c
* @Description:	A question which numbered 7-42 in PTA. This question requires
				that the program be written to balabala 
* @Version:		1.2.14.180414_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;	// An odd num not ending in 5
	scanf("%d", &x);

	unsigned long long s;
	int n = 0;	// Digits
	int flag = 1;
	for (unsigned long long i = 1; flag; i = i * 10 + 1)
	{
		s = i / x;
		n++;
		if (!(i % x) || n > 20)
			flag = 0;
		// printf("running -- i = %llu -- %d\n", i, i % x);
	}	
	printf("%llu %d\n", s, n);

	return 0;
}