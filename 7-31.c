/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-31.c
* @Description:	A question which numbered 7-31 in PTA. This question requires
				that the program be written to ...//I don't know how to
				describe the question.
* @Version:		1.0.0.180325_beta
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int N[100];
	scanf("%d", &N[0]);

	for (int count = 0; count >= 0; count++)
	{
		int temp = N[count];
		int sum = 0;

		while (temp)
		{
			sum += (temp % 10);
			temp = temp / 10;
		}

		N[count + 1] = sum * 3 + 1;
		printf("%d:%d\n", count + 1, N[count + 1]);

		// As a flag
		if (!(N[count+1] - N[count]))
			count = -2;
	}

	return 0;
}
