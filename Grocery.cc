#include<stdio.h>
int main()
{
	int mango=20,apple=30,grapes=40,amount=0,total=0,cash;
	char fruit[50],yes[50]="yes";
	while (strcmp("yes",yes)==0)
	{
		printf("Enter the fruit u want:\n");
		scanf("%s",fruit);
		if(strcmp("mango",fruit)==0||strcmp("Mango",fruit)==0)
		{
			printf("Enter the amount of mango u want\n");
			scanf("%d",&amount);
			total+=(mango*amount);
			printf("%s of %d kg is %d\n",fruit,amount,total);
		}
		else if(strcmp("apple",fruit)==0||strcmp("Apple",fruit)==0)
		{
			printf("Enter the amount of apple u want\n");
			scanf("%d",&amount);
			total+=(apple*amount);
			printf("%s of %d kg is %d\n",fruit,amount,total);
		}
		else if(strcmp("grapes",fruit)==0||strcmp("Grapes",fruit)==0)
		{
			printf("Enter the amount of grapes u want\n");
			scanf("%d",&amount);
			total+=(grapes*amount);
			printf("%s of %d kg is %d\n",fruit,amount,total);
		}
		else
		{
			printf("no such fruit available!");
		}
		printf("do you want to try again?\n");
		scanf("%s",yes);
		if (strcmp("yes",yes)==0||strcmp("Yes",yes)==0)
		{
			continue;
		}
		else
		{
			break;
		}
	}
		printf("total bill is %d\n",total);
		printf("Enter the cash you have\n");
		scanf("%d",&cash);
		if(cash>=amount)
		{
			printf("the balance is %d\n",cash-total);
		}
		else
		{
			printf("insufficient cash!\n");
		}
	return 0;
}
