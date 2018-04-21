/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-65.c
* @Description:	A question which numbered 7-65 in PTA. This question requires
				that the program be written to calculate thr sum vector of two
				two-dimensional plane vectors
* @Version:		1.1.7.180421_alpha
* =========================================================================== *
*/
#include <stdio.h>
#define DIMENSIONS 2

int main(int argc, char const *argv[])
{
	const int baseVectorsNum = 2;
	const int vectorSumNum = 1;

	double arrVectorsBase[baseVectorsNum][DIMENSIONS];
	double arrVectorSum[vectorSumNum][DIMENSIONS];

	int i, j;
	for (i = 0; i < baseVectorsNum; i++)
	{
		for (j = 0; j < DIMENSIONS; j++)
			scanf("%lf", &arrVectorsBase[i][j]);
	}

	for (i = 0; i < DIMENSIONS; i++)
	{
		for (j = 0; j < baseVectorsNum; j++)
			arrVectorSum[0][i] += arrVectorsBase[j][i];

		if (arrVectorSum[0][i] > -0.05 && arrVectorSum[0][i] < 0.05)
			arrVectorSum[0][i] = 0.0;
	}

	printf("(%.1lf, %.1lf)\n", arrVectorSum[0][0], arrVectorSum[0][1]);

	return 0;
}