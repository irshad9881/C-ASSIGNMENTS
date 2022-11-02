#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,choise;
    while(1){

    
     
    
     printf("\n\nEnter your choise ");

    printf("\n1.Isocelses");
    printf("\n2.Rigt angle tringle");
    printf("\n3.Equiletral tringle");
    printf("\n4.Exit\n");
    scanf("%d ",&choise);
    printf("\nEnter three sides");
    scanf("%d %d %d ",&a,&b,&c);
    switch(choise)
    {
        case 1: if(a==b||b==c||c==a)
     printf("\n Isocles tringle");
        else
        printf(" Not a Isocles");
        break;
        case 2: if(a*a+b*b==c*c ||a*a+c*c==b*b ||b*b+c*c==a*a)
            printf("\nRight angle tringle ");
            else
            printf("Not a right angle tingle");
       break;
        case 3: if((a==b)&&(b==c)&&(c==a))
        printf("\nEquiletral tingle");
       
    else
    printf("Not a Equiletarl");
         break;
          Exit(0);
          
            default: printf("\ninvalid number");
           
        }
         

        printf("\n");
        

    } 
    return 0;
    }
   