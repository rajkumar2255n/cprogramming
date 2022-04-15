#include <stdio.h>

int main()
{
    int i,j,n;
    printf("\n\tEnter number of rows needed to print the patten:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("01");
        }
     printf("\n");
    }
    return 0;
}
