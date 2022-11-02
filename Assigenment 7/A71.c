#include<stdio.h>
int main()
{
    int a1=0,a2=1,a3,i,n;
    printf("Enter a number ");
    scanf("%d",&n);
    if(i<0)
    printf("\n Invaled number");
    else if(n==1)
    printf("%d ",a1);
    else if(n==2)
    printf("%d ",a2);
    else
    for  (i=3;i<=n;i++)
    {
    a3=a1+a2;
    a1=a2;
    a2=a3;
}
printf("%d",a3);
return 0;
    
}