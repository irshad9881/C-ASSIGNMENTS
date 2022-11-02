#include<stdio.h>
int main()
{ 
    int a[10],i,n;
    printf("Enter the size of array:");
scanf("%d",&n);
    printf("Enter  array elements");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("reverse elemrnts:");
    for(i=n;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}