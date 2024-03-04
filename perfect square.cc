#include<stdio.h>
int main()
{
	int i,a=36,flag=0;
	for(i=0;i<=a/2;i++)
	{
		if(a==i*i)
		{
			printf("%d is a perfect square",a);
			flag=1;
		}
	}
	if(flag==0)
	printf("%d is not a perfect square",a);
	return 0;
}
