/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-45.c
* @Description:	A question which numbered 7-45 in PTA. This question requires
				that the program be written to find perfect number
* @Version:		1.2.4.180416_alpha
* =========================================================================== *
*/
#include <stdio.h>
#define BOUND 100

int main(int argc, char const *argv[])
{
	int m, n;
	scanf("%d%d", &m, &n);

	int flag = 0;	// To distinguish the status whether it is found perfect num
	for (int i = m; i <= n; i++)
	{	// Traversing from m to n to check whether it is perfect number
		int factor[BOUND];
		int sum = 0;
		int k = 0;	// Subscript of factors
		
		for (int j = 1; j < i; j++)
		{	// Decomposition factor
		
			if (!(i % j))
			{
				sum += j;
				factor[k] = j;
				k++;
			}
		}

		if (sum == i)
		{	
			flag = 1;
			// Perfect number
			printf("%d = ", i);
			
			for (int j = 0; j < k; j++)
			{	
				printf("%d", factor[j]);
				if (j < k - 1)
					printf(" + ");
			}
			printf("\n");
		}

	}
	if (!(flag))
		printf("None\n");

	return 0;
}
	