#include<stdio.h>
int main()
{
	int i,n,a=21;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		a=a+1;
		printf("%d\n",a);
	}
	if(a==2)
	printf("%d is a prime",a);
	else
	printf("%d is not a prime",a);
	return 0;
}
