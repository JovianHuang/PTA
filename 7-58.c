/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-58.c
* @Description:	A question which numbered 7-58 in PTA. This question requires
				that the program be written to find the most occurrences in an
				integer sequence.
* @Version:		1.1.2.180420_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int numTotal, i, j;
	scanf("%d ", &numTotal);
	int arrNum[numTotal];

	for (i = 0; i < numTotal; i++)
		scanf("%d", &arrNum[i]);

	int arrNumOccur[numTotal];
	memset(arrNumOccur, 0, numTotal*sizeof(int));
	for (i = 0; i < numTotal; i++)
	{
		for (j = 0; j < numTotal; j++)
		{
			if (arrNum[i] == arrNum[j])
				arrNumOccur[i]++;
		}
	}

	int numMax = arrNum[0];
	int numOccurMax = arrNumOccur[0];
	for (i = 1; i < numTotal; i++)
	{
		if (arrNumOccur[i] > numOccurMax)
		{
			numMax = arrNum[i];
			numOccurMax = arrNumOccur[i];
		}
	}

	printf("%d %d\n", numMax, numOccurMax);

	return 0;
}