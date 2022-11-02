 #include<stdio.h>
int main()
{
    int a[10][10],i,j,count=0,ans_row=-1,max1=0;
   
    printf("Enter the elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
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
     {  count=0;
        for(j=1;j>=0;j--)
        {
          if(a[i][j]==1)
          {
            count++;
          }
          else 
          {
            break;
          }
        }
        if(count>max1)
        {
            max1=count;
            ans_row=i;
        }
     }
     printf("%d",ans_row);
     return 0;
}
