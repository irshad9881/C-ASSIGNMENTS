#include<stdio.h>
int f1(int);
int main()
{
    int n,s;
    printf("Enter a number ");
    scanf("%d",&n);
    s=f1(n);
    printf("fact is %d",s);
    return 0;
}
int f1(int a)
{
   int i, f=1;
for(i=1;i<=a;i++)

    
    f=f*i;
   return f;

 
}