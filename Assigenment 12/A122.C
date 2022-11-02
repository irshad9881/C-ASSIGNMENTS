#include<stdio.h>
void f(int);
int main()
{
    int i,n;
    printf("Enter a number");
    scanf("%d",&n);
    f(n);
    return 0;
}
void f(int a)
{
    if(a>=1)
   {
    printf("%d ",a);
     f(a-1);
   }
}