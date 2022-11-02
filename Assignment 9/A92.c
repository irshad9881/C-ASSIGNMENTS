#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,x;
    printf("\n1.Addition of two numbers");
    printf("\n2.Subtraction of two numbers");
    printf("\n3.Muliplication of two numebrs");
    printf("\n4.Devisition of two numbers");
    printf("\nEnter the numbers");
    scanf("%d ",&x);
    switch(x)
    {
        case 1:
        printf("Enter two numbers");
            scanf("%d %d",&a,&b);
            printf("\nAdd is %d",a+b);
        break;
        case 2:
        printf("Enter two numbers");
        scanf("%d %d",&a, &b);
            printf("\nSubtarction is %d",a-b);
        break;
        case 3:
        printf("Enetr two numbers");
        scanf("%d %d ",&a ,&b);
            printf("\nMultiplication is %d",a*b);
        break;
        case 4:
        printf("Enters two numbers");
        scanf("%d %d ",&a ,&b);
            printf("\nDev is %d",a/b);
            exit(0);
            default:
            printf("\ninvalid number");
        }
        
    return 0;
    }
   