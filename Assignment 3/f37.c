#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter three numbers",a,b,c);
   scanf("%d%d%d",&a,&b,&c);
   int D=b*b-4*a*c;
    if(D>0)
    printf("roots are real and distinct");
    else if (D==0)
    printf("roots are real and equal");
    else
    printf("roots are imaginary");
    return 0;

}