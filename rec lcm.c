#include <stdio.h>
int lcm(int x , int y) 
{
    static int temp = 1 ;
    if (temp % x == 0 && temp % y ==0 )
    {
        return temp;
    }
    else
    {
        temp++;
        lcm( x , y);
        return temp;
    }
}
int main()
{
   int num1,num2;
   printf("\n\tEnter number 1 integer to find lcm:");
   scanf("%d",&num1);
   printf("\n\tEnter number 2 integer to find lcm:");
   scanf("%d",&num2);
   printf("\n");
   printf("\n\tThe LCM of two number %d and %d is %d",num1,num2,lcm(num1,num2));
   return 0;
}
