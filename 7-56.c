/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-56.c
* @Description:	A question which numbered 7-56 in PTA. This question requires
				that the program be written to search the saddle point in the
				matrix
* @Version:		2.5.9.180420_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int lim;
	scanf("%d", &lim);
	int arrMatrix[lim][lim];	// Array of Matrix

	for (int i = 0; i < lim; i++)	
	{	// Get Data
		for (int j = 0; j < lim; j++)
			scanf("%d", &arrMatrix[i][j]);
	}

	int indexMax[lim], indexMin[lim];
	/*	These 2 arrays are to store the Indexcripts of the max in each rows or 
		of the min in each columns.	*/

	for (int i = 0; i < lim; i++)
	{	/*	Search the max row by row, i in []1 is for the number of row,
		 	and search the min column by column, i in []2 is for the number
		 	of columns. */
		int max = arrMatrix[i][0], min = arrMatrix[0][i];
		int temp_indexMax = 0, temp_indexMin = 0;	// As it's name

		for (int j = 0; j < lim; j++)
		{	/* 	Search the max in each rows and the min in each columns at the
				same time.	*/
			if (arrMatrix[i][j] > max)
			{
				max = arrMatrix[i][j];
				temp_indexMax = j;
			}

			if (arrMatrix[j][i] < min)
			{
				min = arrMatrix[j][i];
				temp_indexMin = j;
			}
		}

		indexMax[i] = temp_indexMax;
		indexMin[i] = temp_indexMin;
	}

	// Compare and output
	int found = 0;	// As a flag of whether it have find the Saddle Point
	for (int i = 0; i < lim; i++)
	{
		int j = indexMin[i];
		if (indexMax[j] == i)
		{
			printf("%d %d\n", j, i);
			found = 1;
		}
	}
	if (!(found))
		printf("NONE\n");

	return 0;
}