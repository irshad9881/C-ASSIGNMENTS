#include<stdio.h>
void f(int, int);
int main()
{int x,y;
    printf("Enter two numbers ");
    scanf("%d %d",&x,&y);
    f(x,y);
    return 0;
}
void f(int a,int b)
{
    int i,x,j;

/*for(i=a+1;;i<b ;i++)
{
for(j=2;j<i;j++)
{
    if(b%j==0)
    break;
}
if(b==i);
{                                     
    printf(" %d ",i);
    a--;
}b++;
}
}*/
for(i=a+1;i<x ;i++)
{
while(a)
{ 
     
     
     if(x%i==0)
     break;
    
     if(i==x)
     {
        printf(" %d",x);
        a--;
     }
        x++;
  } 
  }
