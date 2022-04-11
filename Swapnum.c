#include<stdio.h>
int main()
{
	int n1,n2,temp;
	printf("Enter the number1:");
	scanf("%d",&n1);
	printf("Enter the number2:");
	scanf("%d",&n2);
	temp=n1;
	n1=n2;
	n2=temp;
	printf("The numbers after the Swapping are number1 as %d and number2 as %d",n1,n2);
}
