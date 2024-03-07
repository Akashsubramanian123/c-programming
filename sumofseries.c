#include<stdio.h>
#include<math.h>
int main()
{
	int i,n=3;
	double sums=0.0,ser;
	printf("The series is:");
	for(i=0;i<=n;i++)
	{
		ser=1/pow(i,i);
		sums=+ser;
		printf("1/%1f,",pow(i,i));
	}
	printf("\n%1f",sums);
	return 0;
}
