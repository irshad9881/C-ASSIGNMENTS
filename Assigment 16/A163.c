#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],i,j;
    printf("Enter elements of first array:");
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix:\n");
     for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose matrix:\n");
     for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        
    for(j=0;j<2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
return 0;
}