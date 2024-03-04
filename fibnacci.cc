#include<stdio.h>
int main()
{
	int a=0,b=1,c,i;
	printf("the fibonacci series:%d,%d",a,b);
	c=a+b;
	for(i=2;i<10;i++)
	{
		printf(",%d",c);
	a=b;
	b=c;
	c=a+b;
    }
	return 0;
}    
