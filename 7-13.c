#include <stdio.h>
 int main()
 {

 	int D, D_after_toD;

 	scanf("%d", &D);
 	D_after_toD = D + 2;
 	if (D_after_toD > 7)
 	{
 		D_after_toD = D_after_toD - 7;
 	}

 	printf("%d", D_after_toD);
 	
 	 return 0;
 }