/*
* =========================================================================== *
* @Author:		JovianHuang
* @E-mail:		960094902@qq.com
* @Filename:	7-23.c
* @Description:	A question which numbered 7-23 in PTA. This question requires
				that the program be written to calculate the water fee in sections
* @Version:		1.1.0.180313_beta
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	float y = 0, x = 0;

	scanf("%f", &x);

	if (x <= 15)
		y = 4 * x / 3;
	else
		y = 2.5 * x - 17.5;

	printf("%.2f", y);

	return 0;
}
