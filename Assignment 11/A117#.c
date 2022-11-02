#include<stdio.h>
void f(int);
int main()
{int x;
    printf("Enter a number");
    scanf("%d ",&x);
    f(x);
    return 0;
}
void f(int a)
{
    int a1=-1 ,i, a2=1,a3;
    
    for(i=1;i<=a;i++)
    {
  a3=a1+a2;
    printf(" %d ",a3);
  a1=a2;
   a2=a3;
    
    }
}

