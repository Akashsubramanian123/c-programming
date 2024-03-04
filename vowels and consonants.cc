#include<stdio.h>
int main()
{
	char a='a';
	if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
	{
		printf("%c is a vowel\n",a);
	}
	else
	{
		printf("%c is a consonant\n",a);
	}
	return 0;
}
