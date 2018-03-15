#include <stdio.h>

int main(){
	int i;
	int count = 3;
	for(i = 0; i < count; i++){
		if(i % 2 != 0 )
			printf("A   A");
		else
			printf("  A");
		if(i < count - 1)
			printf("\n"); 
	}
	
	return 0;
} 
