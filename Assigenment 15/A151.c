#include<stdio.h>
int f(int a[] );
int main()
{
    int ar[10],i,n,max;
    printf("Enter size of array :");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    f(ar);
    return 0;
}
int f(int a[])
{
    int i,max=a[0];

    for(i=0;i<=9;i++)
    {
        if(max<a[i])
        {
         max=a[i];
        }
    }   
    return max;
}