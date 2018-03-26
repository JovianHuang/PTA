#include <stdio.h>

int main()
{
	int foot, inch;
	int centimeter;

	scanf("%d", &centimeter);
	foot = centimeter / 30.48;
	/*printf("(d)centimeter / 30.48 = %d\n", centimeter / 30.48);
	printf("(f)centimeter / 30.48 = %f\n", centimeter / 30.48);
	printf("(d)foot = %d\n", foot);
	printf("(f)foot = %f\n", foot);*/

	inch = ((centimeter/30.48) - foot) * 12;
	printf("%d %d\n", foot, inch);

	return 0;
}