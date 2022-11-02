#include<stdio.h>
int f(int );
int main()
{   int n,s,i;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    printf("%d ",f(i));
    return 0;
}
int f(int a )
{
if(a==0)
return 0;
else if (a==1)
return 1;
else
return f(a-1)+f(a-2);
}