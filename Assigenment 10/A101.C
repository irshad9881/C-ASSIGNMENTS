#include<stdio.h>
float area (int );
int main()
{
int a;
float A;
printf("Enter a radius ");
scanf("%d",&a);
A=area(a);
printf("Area of circle %f",A);
printf("\n");
return 0;
}
float area ( int x)
{ 
float s;
s=3.14*x*x;
return s;
}