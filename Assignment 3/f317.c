#include<stdio.h>
int main()
{
    int a,b,c;
    printf ("Enter three numbers");
    scanf("%d %d %d ",&a,&b,&c);
    if((a+b>c) &&(b+c>a) && (c+a>b))
    printf("tingle is valid");
    else 
    printf("ringle is invelid");
    return 0;
}