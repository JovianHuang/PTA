#include <stdio.h>

int main()
{
	int Height;
	double kg, ShiJin;

	scanf("%d", &Height);		
	kg = (Height -100) * 0.9;
	ShiJin = kg * 2;
	printf("%.1f", ShiJin);

	return 0;
}