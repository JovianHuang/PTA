/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-47.c
* @Description:	A question which numbered 7-47 in PTA. This question requires
				that the program be written to 
* @Version:		1.2.1.180416_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int integer, i;
	scanf("%d", &integer);

	if (integer >= 0)
	{
		for (i = 0; integer; i++)
			integer /= 2;
		printf("%d\n", 32 - i);
	}
	else
		printf("%d\n", 0);

	return 0;
}