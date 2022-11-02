#include<stdio.h>
int main()
{
    int i,j,a[10],count=0,n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter the elemnts:\n");
    for(i=0;i<n;i++)
    {
   scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j] == a[i])
            count++;
        }
    }
printf("%d",count);
return 0;
}