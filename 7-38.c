/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-38.c
* @Description:	A question which numbered 7-38 in PTA. This question requires
				that the program be written to balabala
* @Version:		1.5.0.180413_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, y, f;
	scanf("%d", &n);

	for (f = 0; f < 100; f++)
	{
		for (y = 0; y < 100; y++)
		{
			if (98 * f - 199 * y == n)
			{
				printf("%d.%d\n", y, f);
				return 0;
			}
		}
	}
	printf("No Solution\n");

	return 0;
}
	