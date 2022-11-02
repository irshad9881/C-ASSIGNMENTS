#include<stdio.h>
int main()
{
    int i,a[10],n, j,count=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Unique elements in an array :");
    for(i=0;i<n;i++)
    {
       count=0;
       for(j=0;j<n;j++)
       {
        if(i!=j)
        {
        if(a[i]==a[j])
        {
            count++;
        }
        }
       }
    if(count==0)
    {
        printf("%d ",a[i]);
    }
    }
}
