#include <stdio.h>

int main()
{
	int Celsius, Fahr;
	
	scanf("%d", &Fahr);
	Celsius = 5 * (Fahr-32) / 9;
	printf("Celsius = %d", Celsius);

	return 0;
}