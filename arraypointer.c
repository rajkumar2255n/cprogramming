#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10],i,j,n;
    printf("\n\tEnter number of elements neede in a array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\n\tEnter a value for element %d X %d :",i+1,j+1);
            scanf("%d",(*(a+i)+j));
        }
    }
    printf("\n\tThe entered elements are below:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t");
            printf("%d",*(*(a+i)+j));
        }
    printf("\n");
    }
    return 0;
}
