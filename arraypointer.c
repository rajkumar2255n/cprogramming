#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n;
    printf("\n\tEnter no of rows needed:");
    scanf("%d",&m);
    printf("\n\tEnter no of columns needed:");
    scanf("%d",&n);
    int **a;
    a=(int **)malloc(m*sizeof(int *));
    for( int i=0;i<m;i++)
    {
        a[i]=(int *) malloc(n *sizeof(int));
    }
    printf("\n\tEnter matrix elements:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("\n\tEnter the element for %d X %d :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\tMatrix elements are:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("\t");
            printf("%d",a[i][j]);
        }
    printf("\n");
    }
    for(int i=0;i<m;i++)
    {
        free(a[i]);
    }
    free(a);
    return 0;
}
