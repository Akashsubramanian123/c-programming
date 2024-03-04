#include<stdio.h>
int main()
{
	int i,a=10,fact=1;
	for(i=1;i<=10;i++)
	{
		fact*=i;
	}
	printf("Factorial:%d",fact);
	return 0;
}
