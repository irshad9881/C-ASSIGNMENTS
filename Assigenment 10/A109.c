#include<stdio.h>
int f(int ,int);
int main()
{
    int n,d,s;
    printf("Enter the number and digit number\n");
    scanf("%d %d",&n,&d);
s=f(n,d);
printf("%d",s);
return 0;
}
int f(int x,int y)
{

while(x!=0)
{int r;
    r=x%10;
if(r==y)
{
    printf("%d is contain in number ",y,x);
    return x;
}

x=x/10;
}
    printf("%d is not contain in number ",y,x);
    return x;
    

}

