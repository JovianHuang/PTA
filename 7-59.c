/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-59.c
* @Description:	A question which numbered 7-59 in PTA. This question requires
				that the program be written to balabala
* @Version:		1.0.6.180420_base
* =========================================================================== *
*/
#include <stdio.h>
#include <string.h>
#define LENGTH 90

int main(int argc, char const *argv[])
{
	char ch[LENGTH];
	fgets(ch, LENGTH, stdin);

	ch[strlen(ch) -1] = '\0';

	int len = strlen(ch);

	for (int i = len - 1; i >= 0; i--)
		printf("%c", ch[i]);

	return 0;
}