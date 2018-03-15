/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-24.c
* @Description:	A question which numbered 7-24 in PTA. This question requires
				that the program be written to be a guess the number game
* @Version:		2.5.0.180314_beta
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int target_num, maxnum_of_guessable, answer;
	int flag_of_game_over = 0;

	scanf("%d%d", &target_num, &maxnum_of_guessable);
	scanf("%d", &answer);
	int num_of_guessed = 1;	// It have guessed once while scan an answer

	// Determine whether the answer is correct, if not, compare their size
	while (answer != target_num && answer > 0)
	{
		if(answer > target_num)
	 		printf("Too big\n");
	 	else if (answer < target_num)
	 		printf("Too small\n");
	 	else
	 		break;

	 	if(num_of_guessed == maxnum_of_guessable)
	 		break;
	 	// Get a new answer from player
	 	scanf("%d", &answer);

	 	// Statistical response times
	 	num_of_guessed++;
	 }

	/* Must check that the answer is correct, if not, it will be mistakenly
	recongnized as game over when the player happens to guess the target_num
	in the last chance. */
 	if (answer<0 || num_of_guessed==maxnum_of_guessable && answer!=target_num)
 	{
 		printf("Game Over");
 		flag_of_game_over = 1;
 	}

	// Evaluate player perfprmance, if it's not game over
	if (flag_of_game_over == 0)
	{
		if (num_of_guessed == 1)
			printf("Bingo!");
		else if (num_of_guessed < 4)
			printf("Lucky You!");
		else
			printf("Good Guess!");
	}

	return 0;
}