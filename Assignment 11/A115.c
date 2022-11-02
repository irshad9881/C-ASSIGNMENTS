#include<stdio.h>
void  f(int);
int main()
    {
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    f(n);
    return 0;
    }
void f(int a)
  {int i, x;
while(a)
{    //int i,x;//
     for(i=2;i<x;i++)
     {
     if(x%i==0)
     break;
     }
     if(i==x)
     {
        printf(" %d",x);
        a--;
     }
        x++;
  } 
  }
