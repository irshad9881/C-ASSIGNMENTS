#include<stdio.h>
int main()
{
    int a1=0,a2=1,a3,n;
    printf("Enter a number ");
    scanf("%d",&n);
    
    while(a3<n)
    {
    a1=a2;
    a2=a3;
    a3=a1+a2;
    }
    if(a3==n);
    printf("Fibonacci");
    else 
    printf("Not Fibonacci");
    return 0;
}