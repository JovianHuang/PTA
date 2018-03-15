#include <stdio.h>

int main()
{
	int foot, inch;
	int centimeter;

	scanf("%d", &centimeter);
	foot = centimeter / 30.48;
	inch = ((centimeter/30.48) - foot) * 12;
	printf("%d %d\n", foot, inch);

	return 0;
}