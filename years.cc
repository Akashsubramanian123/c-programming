#include<stdio.h>
int main()
{
	int days=400,years=(days/365),weeks=(days%365)/7,days_1=days-((years*365)+(weeks*7));
	printf("days=%d\nyears=%d\nweeks=%d\nremaining_days=%d",days,years,weeks,days_1);
	return 0;
}
