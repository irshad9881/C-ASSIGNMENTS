#include<stdio.h>
void f(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    f(n);
 return 0;
}
void f(int a)
{
    if(a>=1)
    {
   f(a-1);
    printf("%d ",2*a);
     
    }
}