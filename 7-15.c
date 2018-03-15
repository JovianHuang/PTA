#include <stdio.h>

int main()
{
	// Represent a DecN
	int DecN;
	// Represent a Hexadecimal Number, besides, that BCD Number
	int HexN;
	
	// To get a Decimal Number from Ming
	scanf("%d", &DecN);
	HexN = DecN / 16 * 10 + DecN % 16 * 1;
	printf("%d\n", HexN);

	return 0;
}