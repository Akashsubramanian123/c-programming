#include<stdio.h>
int main()
{
	int a=131,reverse=0,ori,rem;
	ori=a;
	while(a>0)
	{
	rem=a%10;
	reverse=(reverse*10)+rem;
	a/=10;
    }
	if(ori==reverse)
	printf("%d is a pallandrum",ori);
	else
	printf("%d is not a pallandrum",ori);
	return 0;
}
