#include<stdio.h>
int main()
{
	int count=0;
	for(int i=1;i<=100;i++)
	{
		if(i%5==0)
		count++;
	}
	printf("Number of digits divisible by 5 from 1 to 100:%d\n",count);
	return 0;
}
