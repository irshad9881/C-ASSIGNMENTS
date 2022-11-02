#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    int result=x&1;
    if (result==1)
    printf("odd");
    else
    printf("even");
    return 0;
}