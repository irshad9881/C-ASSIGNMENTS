#include<stdio.h>
int main()
{
    int a[10],i,se=0,so=0;
    printf("Enter the elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
    if(a[i]%2==0)
    
        se=se+a[i];
        else
        {
        so=so+a[i];
        }
    }
        printf("sum of all even number is %d ",se);
        printf("sum of all odd numbers %d",so);
        printf("\n");
        return 0;
    
}