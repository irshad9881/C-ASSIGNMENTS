#include<stdio.h>
int f(int );
int main()
{
    int n,s;
    printf("Enter a number ");
    scanf("%d",&n);
    s=f(n);
    printf("%d",s);
    return 0;
}
int f(int x)
{
 return x*x;
 }