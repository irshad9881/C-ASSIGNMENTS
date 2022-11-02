#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    for(i=a+1;i<=b-1;i++)
    {
        for(j=2;j<=i-1;j++)
        if(i%j==0)
        break;
        if(j==i)
        printf(" %d",i);
        
    }
    return 0;
}