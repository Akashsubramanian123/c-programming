#include<stdio.h>
int main()
{
	int num=25,flag=0,i;
	for(i=0;i<=num/2;i++)
	{
		if(num==i*i)
		{
			flag=1;
			printf("The number %d is a perfect square",num);
			break;
		}
	}
	if(flag==0)
	{
		printf("The number %d is not a perfect square",num);
	}
	return 0;
}
