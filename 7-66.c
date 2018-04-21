/*
* =========================================================================== *
* @Author:		JovianHuang
* @Filename:	7-66.c
* @Description:	A question which numbered 7-66 in PTA. This question requires
				that the program be written to find the who got the highest
				achivement among those stus
* @Version:		1.3.0.180421_alpha
* =========================================================================== *
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	const int subjectsNum = 3;
	const int strLen = 10;
	int stusNum;
	scanf("%d", &stusNum);

	char stusID[stusNum][strLen];
	char stusNames[stusNum][strLen];
	int arrAchivements[stusNum];
	memset(arrAchivements, 0, stusNum*sizeof(int));

	int stuIndex, tempAchivement, achivementMax, bestStuIndex;
	for (int stuIndex = 0; stuIndex < stusNum; stuIndex++)
	{
		scanf("%s", stusID[stuIndex]);
		scanf("%s", stusNames[stuIndex]);

		for (int j = 0; j < subjectsNum; j++)
		{
			scanf("%d", &tempAchivement);
			arrAchivements[stuIndex] += tempAchivement;
		}

		if (!(stuIndex))
		{
			achivementMax = arrAchivements[stuIndex];
			bestStuIndex = stuIndex;
		}
		else if(achivementMax < arrAchivements[stuIndex])
		{
			achivementMax = arrAchivements[stuIndex];
			bestStuIndex = stuIndex;
		}
	}

	printf("%s %s ", stusNames[bestStuIndex], stusID[bestStuIndex]);
	printf("%d\n", achivementMax);

	return 0;
}