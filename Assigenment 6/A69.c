#include<stdio.h>
int main()
{
    int i,a,b;
    printf("Enter two numbers" );
    scanf("%d %d",&a,&b);
    for(i=1;i<=a*b;i++)
    if((i%a==0)&&(i%b==0))
    {
    break ;
    }
    printf("hcf is %d",a*b/i);
    return 0 ;
}
