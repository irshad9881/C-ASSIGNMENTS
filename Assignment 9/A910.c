#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x,y,i,D;
    printf("Enter the coeificient x^2 and x and constant term ");
    scanf("%d %d %d ",&a ,&b,&c);
    D=b^2-4*a*c;
    switch(D>0)
{
    case 1: 
    //printf("roots are distinct and real");
    x=(-b+sqrt(D))/(2*a);
    y=(-b-sqrt(D))/(2*a);
    printf("\nroots is %f and %f",x,y);
    break;
    case 0:
    switch(D<0)
    {case 1:
       // printf("roots are imaginary");
  x=-b+sqrt(4*a*c-b*b)*i/(2*a);
  y=-b-sqrt(4*a*c-b*b)*i/(2*a);
  scanf("\nroots are %f %f",x,y);
  break;
    case 0:
//printf(" roots are equal");
x=-b/(2.0*a);
printf("\n roots are %f %f",x,y);
break;
    }
}

return 0;

}