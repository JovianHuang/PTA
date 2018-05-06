/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	6-4.c
* @Description:	A question which numbered 6-4 in PTA. This question requires
				that the program be written to balabala
* @Version:		1.0.0.180503_alpha
* =========================================================================== *
*/
#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t);
void ReadString( char s[] ); /* 裁判提供，细节不表 */

int main()
{
    char s[MAXS], t[MAXS], *pos;

    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if ( pos != NULL )
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}

char *search(char *s, char *t)
{
	char *result = NULL;

	for (int i = 0; *s + i != NULL; i++)
		if ( !((*s+i) - *t) )
			*result = *s + i;

	return result;
}