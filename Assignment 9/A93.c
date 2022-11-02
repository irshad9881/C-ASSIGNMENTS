#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    printf("Enter the day number ");
    scanf("%d",&x);
    switch(x)
    {
case 1:
printf("Good morning");
break;
case 2:
printf("Good after Noon");
break;
case 3:
printf("Very good morning ");
break;
case 4:
printf("Very good after noon");
break;
case 5:
printf("Good night ");
break;
case 6:
printf("Very good night ");
break;
case 7:
printf("Very very good morning");
break;
exit(0);
default:
printf(" invald choise");

    }

return 0;
}