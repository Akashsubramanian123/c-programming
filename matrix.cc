#include<stdio.h>
int main()
{
	int a[2][2]={1,2,3,4},i,j,size=sizeof(a)/sizeof(a[0]);
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
