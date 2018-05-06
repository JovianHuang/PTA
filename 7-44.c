/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-44.c
* @Description:	A question which numbered 7-44 in PTA. This question requires
				that the program be written to calculate the Kaprekar problem
* @Version:		1.2.6.180415_alpha
* =========================================================================== *
*/
#include <stdio.h>

int Rearrange(int, int[], int[]);
void DescSelectionSort(int[]);
void AscSelectionSort(int[]);
void Swap(int[], int, int);

int main(int argc, char const *argv[])
{
	int num;
	scanf("%d", &num);
	int arrNum[3];	// Store number of the num
	int arrReNum[2]; // Store rearrange numbers into it, 0 for max and 1 for min

	for (int i = 1; ; i++)
	{
		Rearrange(num, arrNum, arrReNum);
		if (!(num == arrReNum[0] - arrReNum[1]))
		{
			num = arrReNum[0] - arrReNum[1];
			printf("%d: %d - %d = %d\n", i, arrReNum[0], arrReNum[1], num);
		}
		else
			break;
	}

	return 0;
}

int Rearrange(int num, int arrNum[], int arrReNum[2])
{		// Argument 2 is the array to store the Number, argument 3 is to store
		//	rearrange numbers
	for (int i = 0; i < 3; i++)
	{	// Divide number of the num into every single number
		arrNum[i] = num % 10;
		num /= 10;
	}

	DescSelectionSort(arrNum);	// Rearrange numbers in descending
	arrReNum[0] = arrNum[0] * 100 + arrNum[1] * 10 + arrNum[2];

	AscSelectionSort(arrNum);	// Rearrange numbers in ascending
	arrReNum[1] = arrNum[0] * 100 + arrNum[1] * 10 + arrNum[2];
}

void DescSelectionSort(int arrNum[])
{
	for (int i = 0; i < 3; i++)
	{
		int max = i;
		for (int j = i + 1; j < 3; j++)
		{
			if (arrNum[j] > arrNum[max])
				max = j;
		}
		if (max != i)
			Swap(arrNum, max, i);
	}
}

void AscSelectionSort(int arrNum[])
{
	for (int i = 0; i < 3; i++)
	{
		int min = i;
		for (int j = i + 1; j < 3; j++)
		{
			if (arrNum[j] < arrNum[min])
				min = j;
		}
		if (min != i)
			Swap(arrNum, min, i);
	}
}

void Swap(int arrNum[], int i, int j)
{
	int temp = arrNum[i];
	arrNum[i] = arrNum[j];
	arrNum[j] = temp;
}