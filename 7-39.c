/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-39.c
* @Description:	A question which numbered 7-39 in PTA. This question requires
				that the program be written to calculate the tortoise and rabbit
				racing problem
* @Version:		1.6.0.180414_base
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int time;
	scanf("%d", &time);

	int tortoise = 0, rabbit = 0;
	int flag = 1;	// Flag to judge rabbit's satus, 1 for running
	int t_nap = 0;	// To control rabbit to nap and re-running

	for (int i = 1; i <= time; i++)
	{
		tortoise += 3;

		if (flag)
			rabbit += 9;

		if (!(i % 10) && rabbit > tortoise && flag)
		{	// Rabbit take a nap
			t_nap = 0;
			flag = 0;
		}

		if (!(flag))
		{	// A nap for 30 mins
			t_nap++;
			flag = (t_nap < 31) ? 0 : 1;
		}
	}

	if (rabbit > tortoise)
		printf("^_^ %d\n", rabbit);
	else if (rabbit < tortoise)
		printf("@_@ %d\n", tortoise);
	else	// Tortoise is the winner if it's not the last one, damn the set
		printf("-_- %d\n", tortoise);

	return 0;
}