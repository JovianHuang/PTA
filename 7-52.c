/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-52.c
* @Description:	A question which numbered 7-52 in PTA. This question requires
				that the program be written to balabala
* @Version:		1.1.0.180420_alpha
* =========================================================================== *
*/
#include <stdio.h>

void Moves(int[], int, int);

int main(int argc, char const *argv[])
{
	int numTotal, numMoves;
	scanf("%d%d", &numTotal, &numMoves);

	int arrA[numTotal];
	for (int i = 0; i < numTotal; i++)
		scanf("%d", &arrA[i]);

	Moves(arrA, numTotal, numMoves);

	for (int i = 0; i < numTotal; i++)
	{	
		printf("%d", arrA[i]);
		if (i < numTotal - 1)
			printf(" ");
	}

	return 0;
}

void Moves(int arrA[], int numTotal, int numMoves)
{
	for (int i = 0; i < numMoves; i++)
	{
		int endNum = arrA[numTotal - 1];
		for (int j = numTotal - 1; j > 0; j--)
			arrA[j] = arrA[j - 1];
		arrA[0] = endNum;		
	}
}