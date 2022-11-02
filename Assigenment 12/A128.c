#include<stdio.h>
void f(int);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
f(n);
return 0;
}
void f( int a)
{
   if(a==1)
   printf("1");
   else{
    f(a/2);
printf("%d",a%2);
   }
}
