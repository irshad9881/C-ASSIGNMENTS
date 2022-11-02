#include<stdio.h>
int main()
{
    char a[20],*p;
    int count=0;
    printf("Enter your name :\n");
    scanf("%s",a);

    p=a;
    while(*p!='\0')
    {
    count++;
    p++;
    }
    printf("length of %s is %d ",p,count);
    return 0;
}