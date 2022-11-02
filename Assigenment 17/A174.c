/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];

    printf("Enter any string:\n");
    scanf("%s",str);
    strupr(str);
    printf("uppercase string is %s :\n ",str);
    return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
     char str[200];
     int i;
     printf("Enter any string:\n");
     scanf("%s",str);
     for(i=0;str[i];i++)
     {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
     }
        printf("Upper string is %s:",str);
        return 0;
     }