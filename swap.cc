#include<stdio.h>
int main()
{
	int a=2,b=3,temp;
	printf("\nbefore swapping:a=%d,b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swapping:a=%d,b=%d",a,b);
	return 0;
}
