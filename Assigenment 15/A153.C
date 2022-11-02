#include<stdio.h>
int main()
{
    int a[200],i,max,n,j;
    printf("Enter size array:");
    scanf("%d",&n);
    printf("Enter array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]>a[j])//bubble
        {
        max=a[i];
        a[i] =a[j];
        a[j]=max;
        }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
return 0;
}