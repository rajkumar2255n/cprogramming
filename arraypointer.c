#include <stdio.h>

int main()
{
    int a[10][10];
    int i,j,n;
    printf("\n\tEnter no rows need to your matrix:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\n\tEnter the value of matrix %d X %d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\tThe Matrix value is below\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t");
            printf("%d",a[i][j]);
        }
    printf("\n");
    }
    return 0;
}
