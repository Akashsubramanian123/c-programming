#include<stdio.h>
int main()
{
	int num=19,digit,sum=0;
	int ori_num=num;
	while(num!=1&&num!=4)
	{
		sum=0;
		while(num>0)
		{
			digit=num%10;
			sum+=digit*digit;
			num/=10;
		}
		num=sum;
	}
	if(num==1)
	{
		printf("%d is a happy number!",ori_num);
	}
	else
	{
		printf("%d is not a happy number!",ori_num);
	}
	return 0;
}
