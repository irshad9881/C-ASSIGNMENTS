#include<stdio.h>
int main()

{
    int i,j,m=0,n=5;

    for(i=1;i<=9;i++)
    { 
        for(j=1;j<=9;j++)
        {
        if(j>=6-i||&&j<=10-i&i==5)
        {
        printf("*");
       
        }
        else
        printf(" ");
        }
         printf("\n");
    }
   
    return 0;
}