#include<stdio.h>
int main()
{
	int n,num,i,original_num,rem=0,remainder,count=0,result=0;
	printf("Enter a number:");
	scanf("%d",&num);
	original_num=num;
	n=num;
	while(n>0)
	{
		count+=1;
		n/=10;
	}
	printf("the number of digits is %d\n",count);
	while(original_num!=0)
	{
		remainder=original_num%10;
		result+=pow(remainder,count);
		original_num/=10;
	}
	printf("%d is the sum of %d power of each digit.\n",result,count);
	if(result==num)
	{
		printf("%d is a armstrong number!",num);
	}
	else
	{
		printf("%d is not armstrong number!",num);
	}
	return 0;
}
