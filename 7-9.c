#include <stdio.h>
 
 int main()
 {

 	int Sum, i1, i2, i3, i4;
 	float Average;
 	
 	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

 	Sum = i1 + i2 + i3 + i4;
 	Average = Sum / 4.0;

 	printf("Sum = %d; Average = %.1f", Sum, Average);

 	return 0;
 }