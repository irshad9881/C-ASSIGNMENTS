#include<stdio.h>
int main()
{
    int a[3][3],i,j,count=0;
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
        for(i=0;i<=2;i++)
     {
        for(j=0;j<=2;j++)
        {
            if(a[i][j]==0)
            {
            count++;
            }
        }
     }
     if(count>i*j/2)
            {
                printf("Matrix is sparse matrix:\n");
            }
            else
            {
             printf("Not a sparse matrix:\n");
             printf("%d number of zero:\n",count);
            }
return 0;
}