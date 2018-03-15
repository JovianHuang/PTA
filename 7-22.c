/*
* =========================================================================== *
* @Author:		JovianHuang
* @E-mail:		960094902@qq.com
* @Filename:	7-22.c
* @Description:	A question which numbered 7-22 in PTA. This question requires
				that the program be written to find the different ball among
				three balls
* @Version:		1.0.0.180313_beta
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	// That three balls
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);

	if (A == B)
		printf("C");
	else if (A == C)
		printf("B");
	else
		printf("A");

	return 0;
}
