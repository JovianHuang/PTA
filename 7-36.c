/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-36.c
* @Description:	A question which numbered 7-36 in PTA. This question requires
				that the program be written to figure out a simple math problem
				named "HanXin Dianbing"
* @Version:		1.2.0.180407_ahpla
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int target;
	int flag = 0;
	for (target = 1; !flag; target++)
	{
		if (target%5==1 && target%6==5 && target%7==4 && target%11==10)
		{
			flag = 1;
			printf("%d\n", target);
		}
	}

	return 0;
}
	