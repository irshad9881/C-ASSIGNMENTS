#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter the elements:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    printf("The Matrix:\n");
     for(i=0;i<=2;i++)
     {
        for(j=0;j<=2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
     }
     printf("Upper  tringonal matrix:\n");
      for(i=0;i<=2;i++)
     {
        for(j=0;j<=2;j++)
        {
            if(i<=j)
            {
            printf("%d ",a[i][j]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
     }
     return 0;
}