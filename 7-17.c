#include <stdio.h>

int main()
{
	int i;

	scanf("%d", &i);
	i = 10 - i / 10;

	if (i == 0)
		printf("A"); 
	else
		switch(i){
			case 1:printf("A"); break;
			case 2:printf("B"); break;
			case 3:printf("C"); break;
			case 4:printf("D"); break;
			case 5:printf("E"); break;
			default:printf("E");
		}

	return 0;
}