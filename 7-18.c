/*
* ======================================== *
* @Author:		JovianHuang
* @E-mail:		960094902@qq.com
* @Filename:	7-18.c
* @Description:	A question which numbered 7-18 in PTA. This question requires
				that the program be written to calculate fares.
* @Version:		3.0
* ======================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	double fares = 0, extra_charge = 0;
	float mileage;
	int time;

	scanf("%f %d", &mileage, &time);

	// Calculate fares with multi-branch selection structure
	if (mileage <= 3)
		fares = 10;
	else if (mileage <= 10)
		fares = (mileage - 3) * 2 + 10;
	else
		fares = (mileage -10) * 3 + 24;

	// Calculate extra_charge with selection structure
	if (time < 5)
		extra_charge = 0;
	else
		extra_charge = time / 5 * 2;

	// Add up fares and extra_charge to get final fares
	fares = fares + extra_charge;
	// Round(fares)
	fares = (int)(fares + 0.5);

	// Format the result
	printf("%.0f", fares);

	return 0;
}
