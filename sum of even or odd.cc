#include<stdio.h>
int main()
{
	int a=10,b=20,i,evensum=0,oddsum=0;
	for(i=10;i<=20;i++)
	{
		if(i%2==0)
		evensum+=i;
		else
		oddsum+=i;
	}
		printf("The sum of odd number:%d\n",oddsum);
		printf("The sum of even number:%d\n",evensum);
	return 0;
}
