#include<stdio.h>
int main()
{
	int a=10;
	if(a>=18)
	printf("%d is eligible to vote",a);
	else
	printf("you need to wait %d years",18-a);
	return 0;
}
