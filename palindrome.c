#include<stdio.h>
int main()
{
	int num,ori,rem,rev=0;
	printf("Enter the number:");
	scanf("%d",&num);
	ori=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	if (ori==rev)
	{
		printf("%d is a palindrome",ori);
	}
	else
	{
		printf("%d is not a palindrome",ori);
	}
	return 0;
}
