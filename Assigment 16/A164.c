#include<stdio.h>
int main()
{
    int a[2][2],i,j,sum=0,n;
    printf("Enter the elements:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    printf("The Matrix:\n");
     for(i=0;i<2;i++)
     {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
     }
     for(i=0;i<2;i++)
     {
        for(j=0;j<2;j++)
        {
            if(i==j)
            {
            sum=sum+a[i][j];
            }
        }
     }
     printf("Sum of right diagonal:");
     printf("%d ",sum);
    return 0;
}