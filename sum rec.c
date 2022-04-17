#include <stdio.h>
int sum (int x)
{
    if(x != 0)
    {
        return (x % 10 + sum (x/10));
    }
    else
    {
        return 0;
    }
}  

int main ()
{
  int num;
  printf ("\n\tEnter a number for sum it:");
  scanf ("%d", &num);
  printf("\n\tThe sum of the given number %d is this %d",num,sum(num));
  return 0;
}
