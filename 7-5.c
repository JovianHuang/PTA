#include <stdio.h>

int main(){
	int count = 4;
	int i;
	
	do{
		for (i = 0; i < 4 - count; ++i){
			printf(" ");
		}
		for (i = 0; i < count; ++i){
			printf("*");
			if(i < count - 1){
				printf(" ");
			}
		}
		printf("\n");
		count--;
	}while(count > 0);
	
	return 0;
}
