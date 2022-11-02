#include<stdio.h>
int main()
{
    int sum,n,i;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=2*n;i+=2)
    sum+=i;
    printf("sum=%d",sum);
    return 0;

}