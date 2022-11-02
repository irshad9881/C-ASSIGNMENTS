#include<stdio.h>
int com(int, int);
int fact(int n)
{
  int fact=1,i;
    for(i=1;i<=n;i++)
fact=fact*i;
return fact;
}
int com (int n ,int r)

{
   return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
     int a ,b,s;
printf("Enter two numbers ");
scanf("%d %d",&a,&b);
s=com(a,b);
printf("%d",s);
return 0;
}