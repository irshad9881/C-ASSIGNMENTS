#include<stdio.h>
float si (int ,int, int);
int main()
{int x,y,z;
float a;
printf("Enter time rate princple number");
scanf("%d %d %d ",&x,&y,&z);
a = si (x ,y, z);
printf("si is %f",a);
printf("\n");
return 0;
}
float si (int p,int r ,int t)
{
    float s;
    s=p*r*t/100;
    return s;
}