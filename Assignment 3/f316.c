#include<stdio.h>
int main()
{
    int x;
    printf(" Enter a num");
    scanf ("%d",&x);
    if(x>=65 && x<=90 ) 
    printf ("upper case");
    else if(x>=97 && x<=122)
    printf("lower case");
    else if(x>=0 && x<=9)
    printf ("digit");
    else 
    printf("special character");

   
    return 0;
}