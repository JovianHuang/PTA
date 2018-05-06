/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	6-3.c
* @Description:	A question which numbered 6-3 in PTA. This question requires
				that the program be written to balabala
* @Version:		1.0.0.180503_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

bool palindrome(char *s)
{
	bool equal = true;

	int i, j;
	int len = strlen(s) - 1;
	for (i = 0, j = len; j - i > 0; i++, j--)
	{
		if (s[i] - s[j])
		{
			equal = false;
			break;
		}
	}

	return equal;
}