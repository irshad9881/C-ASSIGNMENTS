#include<stdio.h>
int main ()
{
int x;
printf("Enter a number ");
scanf("%d ",&x);
if (x%100==0)
{
    if(x%400==0)
   printf("leep year");
    else
  printf("non leap year");
}
else 
{
    if(x%4)
    printf("leep year");
    else 
    printf ("non leep year");

}
return 0;
}