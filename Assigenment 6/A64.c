#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a num");
    scanf("%d",&n);
for(i=1;i<=n;i++)
sum=sum+i*i;
printf("sum=%d",sum);
return 0;
}