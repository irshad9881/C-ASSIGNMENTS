#include<stdio.h>
int f(int ,int );
int main()
{
     int x,y,s;
     printf("Enter two numbers");
     scanf("%d %d",&x,&y);
     s=f(x,y);
     printf("%d",s);
     return 0;
}
int f(int a , int b)
{
    int i;
    for(i=1;i<=a*b;i++)
    {
    if((i%a==0)&&(i%b==0))
           {
           break;
           }
    }
    return i;
}