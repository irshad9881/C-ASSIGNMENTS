#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    fact=fact*i;
    return fact;

}
int p(int n,int r )
{

return fact(n)/(fact(n-r));
}
int main()
{
    int a,b,s;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    s=p( a,b);
    printf("%d",s);
    return 0;

}