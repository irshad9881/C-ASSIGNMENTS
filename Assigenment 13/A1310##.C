#include<stdio.h>
int power(int b,int p)
{ 
if(p==0)
return 1;
else 
return b*power(b,p-1);
}
int main()
{
    int x,y,r;
    printf("Enter the base and power");
    scanf("%d %d",&x,&y);
    
    r=power(x,y);
    printf("%d",r);
    return 0;
}

