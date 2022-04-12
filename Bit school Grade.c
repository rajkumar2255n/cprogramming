#include<stdio.h>
int main()
{
	int m1;
	printf("\n\tEnter your mark for calculate your grade:");
	scanf("%d",&m1);
	if(m1 > 85)
	{
		printf("\n\tCongralutaion,you have scored Grade A");
	}
	else if(m1>70 && m1<=84)
	{
		printf("\n\tGood,Scored Grade B");
	}
	else if(m1>55 && m1<=69)
	{
		printf("\n\tScored Grade C");
	}
	else if(m1>40 && m1<=54)
	{
		printf("\n\tGrade D");
	}
	else
	{
		printf("\n\tGrade F ,Fail");
	}
}
