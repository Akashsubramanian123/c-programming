#include<stdio.h>
int main()
{
	int a[5]={1,2,2,3,4},i,j,k,size=5;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<size;k++)
				{
					a[k]=a[k+1];
				}
				j--;
				size--;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
