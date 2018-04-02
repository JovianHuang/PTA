/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-20.c
* @Description:	A question which numbered 7-20 in PTA. This question requires
				that the program be written to simulate the work of simple
				calculators
* @Version:		2.3.0.180402_aphla
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int integer, result;
	int count = 0, flag = 0;
	char ch;

	while (1)
	{
		if (count > 0)
		{
			ch = getchar();
			if (ch == '=')
				break;
			scanf("%d", &integer);
			switch (ch)
			{
				case '+':result += integer;	break;
				case '-':result -= integer;	break;
				case '*':result *= integer;	break;
				case '/':
						if (!(integer))
							flag = 1;
						else
							result /= integer;	break;
				default	:flag = 1;
			}
		}
		else
		{
			scanf("%d", &integer);
			result = integer;	// Cuz there is no operation before the first i.
		}

		count++;
	}
	if (flag)
		printf("ERROR\n");
	else
		printf("%d\n", result);

	return 0;
}