/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-37.c
* @Description:	A question which numbered 7-37 in PTA. This question requires
				that the program be written to balabala
* @Version:		1.2.0.180412_beta
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned long integer;
	scanf("%ld", &integer);
	int arrInteger[10];
	int i;

	if (!(integer))
		printf("%d ", 0);
	else
		{
		for (i = 0; integer; i++)
		{	// Store the numbers of the integer into arr
			arrInteger[i] = integer % 10;
			integer /= 10;
		}
		for (i = i - 1; i > -1; i--)	// Print the num
			printf("%d ", arrInteger[i]);
		}

	return 0;
}