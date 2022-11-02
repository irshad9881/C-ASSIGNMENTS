#include<stdio.h>
int fact(int);
int main()
{
    int n,s;
    printf("Enter a number");
    scanf("%d",&n);
    s=fact(n);
    printf("%d",s);
    return 0;
}
int fact(int a)
{  
    if(a==1)
        return 1;
            return  fact(a-1)*a;
}