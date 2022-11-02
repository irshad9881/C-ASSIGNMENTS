#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],i,j,sum=0,n;
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
     {sum=0;
        for(j=0;j<2;j++)
        {
       sum+=a[i][j]; 
        }
      
     }
       printf(" sum of rows :%d ",sum);
     printf("\n");
      for(j=0;j<2;j++)
      for(i=0;i<2;i++)
     {
        for(i=0;i<2;i++)
        {
            sum+=a[i][j];
        }
     }
      printf(" sum of colums :%d ",sum);
    return 0;
}