#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    if(x%4==0)
    printf("leap year");
    else
    printf("non laep year");
    return 0;
}