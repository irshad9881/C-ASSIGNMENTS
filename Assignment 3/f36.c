#include<stdio.h>
int main ()
{     
    int x,y;
    printf("Enter two number");
    scanf("%d%d",&x,&y);
    if(x==y)
    printf("both are equal");
   else if (x > y)
    printf("%d is greater",x);
    else
    printf("%d is greater",y);
    return 0 ;
}