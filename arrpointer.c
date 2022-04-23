#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],*p,i,n;
    printf("\n\tEnter number of elements neede in a array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\t");
        scanf("%d",&a[i]);
    }
    p=a;
    printf("\n\tThe entered elements are below:\n");
    for(i=0;i<n;i++)
    {
        printf("\t");
        printf("%d",*p);
        p++;
    }
    return 0;
}
