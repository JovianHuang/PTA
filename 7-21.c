/*
* =========================================================================== *
* @Author:		JovianHuang
* @E-mail:		960094902@qq.com
* @Filename:	7-21.c
* @Description:	A question which numbered 7-21 in PTA. This question requires
				that the program be written to simulate rader speedometer
* @Version:		1.0.0.180313_beta
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int speed;

	scanf("%d", &speed);

	if (speed > 60)
		printf("Speed: %d - Speeding\n", speed);
	else
		printf("Speed: %d - OK\n", speed);

	return 0;
}