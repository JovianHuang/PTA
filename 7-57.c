/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-57.c
* @Description:	A question which numbered 7-57 in PTA. This question requires
				that the program be written to find the given
* @Version:		1.0.0.180420_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int numTotal, numTarget;
	scanf("%d%d", &numTotal, &numTarget);
	int arrNum[numTotal];

	int targetIndex = 0, found = 0;
	for (int i = 0; i < numTotal; i++)
	{
		scanf("%d", &arrNum[i]);
		if (arrNum[i] == numTarget)
		{
			targetIndex = i;
			found = 1;
		}
	}

	if (found)
		printf("%d\n", targetIndex);
	else
		printf("Not Found\n");




	return 0;
}