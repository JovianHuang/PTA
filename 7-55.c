/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-55.c
* @Description:	A question which numbered 7-55 in PTA. This question requires
				that the program be written to calculate a matrix
* @Version:		1.1.0.180420_base
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int lim;
	scanf("%d", &lim);
	int arrMatrix[lim][lim];

	for (int i = 0; i < lim; i++)
	{
		for (int j = 0; j < lim; j++)
			scanf("%d", & arrMatrix[i][j]);
	}

	int elemnetsSum = 0;
	for (int i = 0; i < lim - 1; i++)
	{
		for (int j = 0; j < lim - 1; j++)
		{
			if (i + j == lim - 1)
				continue;

			elemnetsSum += arrMatrix[i][j];
		}
	}

	printf("%d\n", elemnetsSum);

	return 0;
}