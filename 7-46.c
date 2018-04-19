/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-46.c
* @Description:	A question which numbered 7-46 in PTA. This question requires
				that the program be written to 
* @Version:		1.0.0.180416_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t = 0;
	int n, u, d;
	scanf("%d%d%d", &n, &u, &d);
	if (n > u)
	{
		while (1)
		{
			n -= u;
			t++;
			if (n > 0)
			{
				n += d;
				t++;
			}
			else
				break;
		}
	}
	else
		t = 1;

	printf("%d\n", t);	

	return 0;
}
	