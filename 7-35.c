/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-35.c
* @Description:	A question which numbered 7-35 in PTA. This question requires
				that the program be written to calculate the monket eat peach
				problem
* @Version:		1.0.0.180413_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int peach = 1;
	int n;
	scanf("%d", &n);

	for (n; n - 1; n--)
		peach = (peach + 1) * 2;

	printf("%d\n", peach);

	return 0;
}
	