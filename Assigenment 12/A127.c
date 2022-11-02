#include<stdio.h>
void f(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    f(n);
}
void f(int a)
{
    if(a>=1)
    {
       f(a-1); 
    printf("%d ",a*a);
    
    }
}