#include<stdio.h>
int main()
{
	int a=13,i,flag=0;
	if(a==0||a==1)
	flag=1;
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d is a prime number",a);
	}
	else
	{
		printf("%d is not a prime number",a);
	}
	return 0;
}
