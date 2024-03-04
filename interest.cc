#include<stdio.h>
int main()
{
	float balance=2000,interest=0.2*balance;
	printf("The balance is %0.2f\n",interest);
	printf("The balance accumulated in 1 year:%0.2f\n",balance+interest);
	return 0;
}
