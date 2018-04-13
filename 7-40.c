/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-40.c
* @Description:	A question which numbered 7-40 in PTA. This question requires
				that the program be written to balabala
* @Version:		1.2.3.180413_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <math.h>

void Evaluate(int arrData[][2], int);

int main(int argc, char const *argv[])
{
	int bound;
	scanf("%d", &bound);

	int arrData[bound][2];

	for (int i = 0; i < bound; i++)	// High into [i][0], weight into [i][1]
		scanf("%d%d", &arrData[i][0], &arrData[i][1]);

	for (int i = 0; i < bound; i++)
		Evaluate(arrData, i);

	return 0;
}

void Evaluate(int arrData[][2], int i)
{
	float std_weight = (arrData[i][0] - 100) * 0.9 * 2;
	float limit = std_weight * 0.1;
	float deviation = arrData[i][1] - std_weight;

	if (fabs(deviation) < limit)
		printf("You are wan mei!\n");
	else if (deviation >= limit)
		printf("You are tai pang le!\n");
	else
		printf("You are tai shou le!\n");
}