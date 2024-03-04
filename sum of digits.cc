#include<stdio.h>
int main()
{
	int a=12345,sum=0;
	while(a>0)
	{
		sum+=a%10;
		a/=10;
    }
    printf("Sum:%d\n",sum);
	return 0;
}
