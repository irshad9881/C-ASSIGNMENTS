#include<stdio.h>
int GCD(int,int);
int main()
{
    int x,y,s;
    printf("Enter two numbers");
    scanf("%d %d",&x,&y);
    s=GCD(x,y);
    printf("%d",s);
    return 0;
}
int GCD(int a,int b)
{  


    if(a==b)
        return a;
        if(a%b==0)
        return b;
        if(b%a==0)
        return a;
        if (a>b)
        return (GCD(a%b ,b));
        if(b>a)
        return (GCD(a,b%a));

        

              
}