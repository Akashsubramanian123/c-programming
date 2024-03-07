#include<stdio.h>
int main()
{
	int kumar_bank=2000,w;
	printf("Enter the amount you need to withdraw!:");
	scanf("%d",&w);
	if(w<=kumar_bank)
	{
		printf("your balance is %d",kumar_bank-w);
	}
	else
	{
		printf("insufficent balance!");
	}
	return 0;
}
