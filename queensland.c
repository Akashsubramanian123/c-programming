#include<stdio.h>
int main()
{
	int i,fam,age,amount,total=0;
	char stu_id[20];
	printf("Enter the no of family members:");
	scanf("%d",&fam);
	for(i=0;i<fam;i++)
	{
		printf("Enter the age of the member\n");
		scanf("%d",&age);
		if(age>=3&&age<=22)
		{
			printf("do you have a student id\n");
			scanf("%s",&stu_id);
			if(age<=12)
			{
				amount=250;
				if(strcmp(stu_id,"yes")==0||strcmp(stu_id,"Yes")==0)
				{
					amount=amount/2;
					total+=amount;
					printf("The amount for this person is %d\n",amount);
				}
				else
				{
					total+=amount;
					printf("The amount for this person is %d\n",amount);
				}
			
			}
			else
			{
				amount=500;
				if(strcmp(stu_id,"yes")==0||strcmp(stu_id,"Yes")==0)
				{
					amount=amount/2;
					total+=amount;
					printf("The amount for this person is %d\n",amount);
				}
				else
				{
					total+=amount;
					printf("The amount for this person is %d\n",amount);
				}
			}
		}
		else
		{
			if(age<=12)
			{
				amount=250;
				total+=amount;
				printf("The amount for this person is %d\n",amount);

			
			}
			else
			{
				amount=500;
				total+=amount;
				printf("The amount for this person is %d\n",amount);
			}
		}
		
	}
	printf("The total bill is %d",total);
	return 0;
}
