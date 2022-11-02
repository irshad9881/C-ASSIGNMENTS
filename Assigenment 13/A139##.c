#include<stdio.h>
int co(int );
int main()
{
    int n,s;
    printf("Enter a number");
    scanf("%d",&n);
s=co(n);
printf("%d",s);
return 0;
}
int co(int a)
{
    static int c=0;
     if(a<10)

     return 1;
       else
       
    return 1+co(a/10);
       
}