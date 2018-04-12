/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-27.c
* @Description:	A question which numbered 7-27 in PTA. This question requires
				that the program be written to calculate the rabbit
				breeding problem
* @Version:		2.2.1.180412_alpha
* =========================================================================== *
*/
#include <stdio.h>
#define N 25

int main(int argc, char const *argv[])
{
	int target, month;
	scanf("%d", &target);

	if (target == 1)	// What if?
	{
		printf("%d\n", 1);
		return 0;
	}

	int arrNumRabbits[N] = {1,1};	// First 2 months
	for (month = 2; arrNumRabbits[month-1] <= target; month++)
		arrNumRabbits[month] = arrNumRabbits[month-1] + arrNumRabbits[month-2];

	printf("%d\n", month);

	return 0;
}
