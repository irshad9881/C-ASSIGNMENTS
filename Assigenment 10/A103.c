#include<stdio.h>
int f1(int);
int main()
{
    int n,s;
    printf("Enter a number ");
    scanf("%d",&n);
    s=f1(n);
    printf("%d",s);
    return 0;
}
int f1(int x)
{ 
    if(x%2==0)
    return 1;
    else
    return 0;
}
