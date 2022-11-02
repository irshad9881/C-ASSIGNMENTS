#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter a number ");
    scanf("%d",&n);
     for(i=1;i=n;i++)
    if(n!=0)
    {
    n=n/10;
    count++;
    }
    
    printf("Digit is %d",count);
    return 0;

}