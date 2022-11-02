#include<stdio.h>
void f( int );
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    f(n);
    return 0;
}
void f (int a)
{

int i;
for(i=2;a>1;i++)
{
while(a%i==0)
{
printf(" %d",i);
a=a/i;

}

}

}