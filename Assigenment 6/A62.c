#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a positive number: ");
    scanf(" %d",&n);
    for(i=2;i<=2*n;i+=2)
    {
        sum+=i;
        
    }
   printf("Sum =%d",sum);
    return 0;
}