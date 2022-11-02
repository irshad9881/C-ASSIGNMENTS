#include<stdio.h>
int main()
{
    int x;
    printf("Enter a year");
    scanf("%d",&x);
    switch(x%100 == 0)
    {
    case 1:switch(x%400==0)
    {
    case 1:printf("Leep year");break ;
    case 0: printf("Non leep year");break ;
    }break ;
    
    
    case 0 : switch(x%4 == 0)
    {
    case 1:printf("Leep year");break ;
    case 0:printf("Non leep year");break ;
    }
   
     
    }
     printf("\n");
    return 0;
}