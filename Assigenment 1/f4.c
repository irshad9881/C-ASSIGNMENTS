#include<stdio.h>
int main()
{
    int x,s=0;
    do
    {
        printf("\nEnter a number:");
        scanf("%d,&x");
        s=s*x;
    }while(x);
    printf("\nSum is %d",s);
    return 0;
}