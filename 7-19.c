/*
* =========================================================================== *
* @Author:		JovianHuang
* @E-mail:		960094902@qq.com
* @Filename:	7-19.c
* @Description:	A question which numbered 7-19 in PTA. This question requires
				that the program be written to calculate the day of the year
				in a certain year.
* @Version:		1.3.2.180313_beta
* =========================================================================== *
*/
#include <stdio.h>

// A function to judge whether it is a leap year
int LeapOrNot(int year)
{
	int i;
	if (year % 4 == 0 && year % 100 != 0)
		i = 1;
	else if (year % 400 == 0)
		i = 1;
	else
		i = 0;

	return i;
}

int main(int argc, char const *argv[])
{
	int year, month, day, i;
	int days = 0;
	scanf("%d/%d/%d", &year, &month, &day);

	// Declare two arrays that stores the number of days in each month
	int arrMonth_inLeap[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int arrMonth_inAvg[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	// Call LeapOrNot to judge how many days in Feb
	if (LeapOrNot(year) == 1)
	{
		i = 0;
		/* 	This initialization is necessary, or change
			the "i" in the following loop to other*/
		for (i; i < month - 1; i++)
			days = days + arrMonth_inLeap[i];
		days = days + day;
	}
	else
	{
		i = 0;
		for (i; i < month - 1; i++)
			days = days + arrMonth_inAvg[i];
		days = days + day;
	}

	printf("%d\n", days);

	return 0;
}