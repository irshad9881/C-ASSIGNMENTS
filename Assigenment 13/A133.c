#include<stdio.h>
int f(int);
int main()
{
    int n,s;
    printf("Enter a number");
    scanf("%d",&n);
    s=f(n);
    printf("%d",s);
    return 0;
}
int f(int a)
{  
    if(a==0)
    
        return 0;
               return f(a-1)+2*a;
}