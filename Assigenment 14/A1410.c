#include<stdio.h>
int main()
{
    int a[10],b[10],i,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter first array elements:\n");
    for(i=0;i<n;i++)
    {
     printf("%d ",a[i]);
    }
    printf("Copy array elements:\n");
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("Enter second array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}