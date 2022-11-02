#include<stdio.h>
int main()
{
    int i,r,s,x;
    printf("Armstong numbers are");
    for(i=1;i<=1000;i++)
    {
    s=0;
    x=i;
    
    while(x!=0)
    {
    r=x%10;
    s=s+r*r*r;
    x=x/10;
    }
if(s==i)
printf(" %d",i);
}
return 0;
    
}