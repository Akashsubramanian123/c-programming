#include<stdio.h>
int main()
{
	int age[5]={20,10,40,60,75},cost;
	for(int i=0;i<5;i++)
	{
	if(age[i]<=12)
	{
		cost=cost+250;
	}
	else
	{
		cost=cost+500;
	}
    }
    printf("total amt:%d",cost);
	return 0;
}
