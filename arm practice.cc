#include<stdio.h>
int main()
{
	int a=121,ori,rem,result=0;
	ori=a;
	while(ori>0)
	{
		rem=a%10;
		result+=(result*10)+rem;
		ori/=10;
	}
	if(result==a)
	printf("%d is a armstrong",a);
	else
	printf("%d is not a armstrong",a);
	return 0;
}
