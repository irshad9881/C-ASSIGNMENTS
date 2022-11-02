#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3],i,j,sum=0,n;
    printf("Enter the elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter elements matrix [%d][%d] \t",i,j);
            scanf("%d ",&a[i][j]);
        }
    }
    printf("The Matrix:\n");
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
     }
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            if(i+j==2)
            sum=sum+a[i][j];
        }
     }
     printf("Sum of left diagonal:");
     printf("%d ",sum);
    return 0;
}