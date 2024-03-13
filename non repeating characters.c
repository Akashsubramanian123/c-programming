#include<stdio.h>
int main()
{
	char str[20]="Hello";
	int i;
	int frequency[256]={0};
	for(i=0;str[i]!='\0';i++)
	{
		frequency[str[i]]++;
	}
	printf("Non repeating characters:");
	for(i=0;i<256;i++)
	{
		if(frequency[i]==1)
		{
			printf("%c",i);
		}
	}
	return 0;
}
