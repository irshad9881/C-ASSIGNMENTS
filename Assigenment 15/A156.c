#include<stdio.h>
int main()
{
    int i,a[10],n;
    printf("Eneter size of  array:\n");
    scanf("%d",&n);
    printf("Ener the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements in reverse order:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}