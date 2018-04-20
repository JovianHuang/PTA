/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-54.c
* @Description:	A question which numbered 7-54 in PTA. This question requires
				that the program be written to reorder integers into an array
* @Version:		1.0.0.180420_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int sizeArr;
	scanf("%d", &sizeArr);
	int arrInteger[sizeArr];

	int endIndex = sizeArr - 1;
	for (int i = endIndex; i >= 0; i--)
		scanf("%d", &arrInteger[i]);

	for (int i = 0; i < sizeArr; i ++)
	{
		printf("%d", arrInteger[i]);
		if (i < endIndex)
			printf(" ");
	}
	return 0;
}