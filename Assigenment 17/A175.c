/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    printf("Enter any string:\n");
    gets(str);
    strlwr(str);
    printf("lowercase string is %s :\n ",str);
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
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
     }
        printf("LOWER string is :\n %s ",str);
        return 0;
     }