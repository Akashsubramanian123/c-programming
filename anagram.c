#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]="car",str2[20]="arc",temp;
	int i,j,len1=strlen(str1),len2=strlen(str2);
	if(len1!=len2)
	{
		printf("The numbers are not a anagram!");
		return 0;
	}
	for(i=0;i<len1;i++)
	{
		for(j=i+1;j<len1;j++)
		{
			if(str1[i]>str1[j])
			{
				temp=str1[i];
				str1[i]=str1[j];
				str1[j]=temp;
			}
			if(str2[i]>str2[j])
			{
				temp=str2[i];
				str2[i]=str2[j];
				str2[j]=temp;
			}
		}
	}
	printf("\nsimplified string1: %s\nsimplified string2: %s\n",str1,str2);
	for(i=0;i<len1;i++)
	{
		if(str1[i]!=str2[i])
		{
			printf("The numbers are not a anagram!");
			return 0;
		}
	}
	printf("The numbers are a anagram!");
	return 0;
}
