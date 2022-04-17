#include <stdio.h>
int chprime(int x , int i)
{
    if(i == 1)
    {
        return 1;
    }
    else
    {
        if ( x % i ==0)
        {
            return 0;
        }
        else
        {
            return chprime(x , i-1);
        }
    }
}
int main()
{
   int num , check;
   printf("\n\t Enter a number for checking:");
   scanf("%d",&num);
   check = chprime(num ,num/2);
   if( check ==1)
   {
       printf("\n\t%d is a prime number",num);
   }
   else
   {
       printf("\n\t%d is not a prime number",num);
   }
   return 0;
}
