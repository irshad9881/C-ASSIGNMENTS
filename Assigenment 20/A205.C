#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,*p=&a,*q=&b;

    printf("Enter first elements:");
    scanf("%d",p);
    printf("Enter second elements:");
    scanf("%d",q);
    if(*p>*q)
    printf("%d is max:",*p);
    else
    printf("%d is max:",*q);
    return 0;
}