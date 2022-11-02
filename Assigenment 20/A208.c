#include<stdio.h>
int main()
{
    int a[10],*P,sum=0,n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    } 
    printf("sum is %d \n",sum);
    return 0;
}