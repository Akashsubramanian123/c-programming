#include<stdio.h>
int main()
{
	int a=7,b=5,c=12;
	if(a>b && a>c)
	{
		printf("%d is a largest",a);
	}
	else if(b>c)
	{
		printf("%d is a largest",b);
	}
	else
	{
		printf("%d is a largest",c);
	}
	return 0;
}
