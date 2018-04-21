/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-61.c
* @Description:	A question which numbered 7-61 in PTA. This question requires
				that the program be written to balabala
* @Version:		1.0.0.180421_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	const int strLenMax = 80;

	int strsNum;
	scanf("%d", &strsNum);

	char strings[strsNum][strLenMax];

	int index;
	int longestStrIndex = 0;
	for (index = 0; index < strsNum; index++)
	{
		scanf("%s", &strings[index]);
		
		if (!(index))
			continue;
		else if(strcmp(strings[longestStrIndex], strings[index]) < 0)
			longestStrIndex = index;
	}

	printf("The longest is: %s\n", strings[longestStrIndex]);


	return 0;
}