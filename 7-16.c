#include <stdio.h>

int main()
{
	int n, sign;

	scanf("%d", &n);

	if(n < 0)
		sign = -1;
	else if (n > 0)
		sign = 1;
	else
		sign = 0;

	printf("sign(%d) = %d", n, sign);

	return 0;
}