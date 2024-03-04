#include<stdio.h>
int main()
{
	int apple=10,mango=15,amount=0,total=0,cash;
	char fruits[20];
	printf("Enter a fruits:\n");
	scanf("%s",&fruits);
	if(fruits=="apple"||fruits=="Apple")
	{
		printf("enter the amount of apple u want\n");
		scanf("%d",&amount);
		total+=(apple*amount);
	}
	else if(fruits=="mango"||fruits=="Mango")
	{
		printf("Enter the amount of mango u want\n");
		scanf("%d",&amount);
		total+=(mango*amount);
	}
	printf("total bill is %d",total);
	printf("enter the cash u have\n");
	scanf("%d",&cash);
	if(cash>amount)
	{
		printf("the cash is %d\n",cash=total);
    }
	else
	{
		printf("insufficient balance\n");
	}
	return 0;
}
