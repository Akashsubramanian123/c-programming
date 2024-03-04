#include<stdio.h>
int main()
{
	float mil=15,distance=36.7,perlitrecost=102.34,week=6,amt,amt_total;
	printf("senthil spent total amount:");
	amt=distance*2/mil;
	amt_total=amt*6*perlitrecost;
	printf("%0.2f",amt_total);
	return 0;	
}
