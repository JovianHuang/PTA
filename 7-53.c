/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-53.c
* @Description:	A question which numbered 7-53 in PTA. This question requires
				that the program be written to find the max and it's index
* @Version:		1.0.0.180420_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int sizeOfArr;
	scanf("%d", &sizeOfArr);
	int arrInteger[sizeOfArr];

	int numMax, numMaxIndex;
	for (int i = 0; i < sizeOfArr; i++)
	{
		scanf("%d", &arrInteger[i]);
		if (!i)
		{	// Assume fisrst integer is the max
			numMax = arrInteger[0];
			numMaxIndex = 0;
		}
		else if (numMax < arrInteger[i])
		{
			numMax = arrInteger[i];
			numMaxIndex = i;
		}
	}

	printf("%d %d\n", numMax, numMaxIndex);

	return 0;
}
