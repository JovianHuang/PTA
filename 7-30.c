/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-30.c
* @Description:	A question which numbered 7-30 in PTA. This question requires
				that the program be written to output the pinyin of every
				numbers of the given integer.
* @Version:		1.4.0.180322_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int integer;
	scanf("%d", &integer);

	// If the integer is negative, output "fu", and convert to positive.
	if (integer < 0)
	{
		printf("fu ");
		integer = -integer;
	}

	int arrNumber[10];	// Declare an arry to store those numbers of integer.
	int count = 0;

	// Special case
	if (!(integer))
		printf("ling");

	for (; integer; count++)	// Execution while integer is greater than 0.
	{
		arrNumber[count] = integer % 10;
		integer /= 10;
	}

	for (; count; count--)
	{
		switch(arrNumber[count - 1])
		{
			case 0: printf("ling"); break;
			case 1: printf("yi"); break;
			case 2: printf("er"); break;
			case 3: printf("san"); break;
			case 4: printf("si"); break;
			case 5: printf("wu"); break;
			case 6: printf("liu"); break;
			case 7: printf("qi"); break;
			case 8: printf("ba"); break;
			case 9: printf("jiu");
		}
		// Output a space between two numbers.
		if (count > 1)
			printf(" ");
	}

	return 0;
}
