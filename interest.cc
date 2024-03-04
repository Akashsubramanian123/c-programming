#include<stdio.h>
int main()
{
	float balance=1000,interest=0.2*balance;
	printf("The interest accumulated in 1 year is %0.2f\n",interest);
	printf("The balance accumulated in 1 year is %0.2f\n",interest+balance);
	return 0;
}
