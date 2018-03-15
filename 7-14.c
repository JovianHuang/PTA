#include <stdio.h>
int main()
{
	int time_original, time_after;
	int time_flow, TotalMin;
	int min_T_after, hour_T_after;

	scanf("%d %d", &time_original, &time_flow);
	TotalMin = time_original / 100 * 60 + time_original % 100 + time_flow;
	hour_T_after = TotalMin / 60;
	min_T_after =TotalMin % 60;
	time_after = hour_T_after * 100 + min_T_after;

	printf("%d", time_after);

	return 0;

 }