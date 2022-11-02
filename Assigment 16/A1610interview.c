 #include<stdio.h>
int main()
{
    int a[10][10],i,j,ans_row=-1;
   
    printf("Enter the elements:\n");
    for(i=0;i<4;i++)
    {
           for(j=0;j<4;j++)
           {
            scanf("%d ",&a[i][j]);
            }
    }
    printf("The Matrix:\n");
     for(i=0;i<4;i++)
     {
        for(j=0;j<4;j++)
           {
            printf("%d ",a[i][j]);
           }
            printf("\n");
     }
     j=1;

       for(i=0;i<4 && j>=0;i++)
       {
        while(j>=0)
         {
           if(a[i][j]==1)
           {
            
            ans_row=i;
            j--;
           }
           else 
           {
            break;
           }
         }
       }
       printf("%d",ans_row);
       return 0;
}