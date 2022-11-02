/*#include<stdio.h>
int main()
{
 char str[100];
 int i;
 printf("Enter your string:");
 scanf("%s",str);
    for(i=0;str[i];i++);
    printf("Length is %d",i);
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
int i,l;
char str[20];
printf("Enter your string:");
    scanf("%s",str);
l=strlen(str);
printf("length is %d",l);
return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i=0,count=0;
    printf("Enter string:");
    scanf("%s",str);
while(str[i])
{
    i++;
}
printf("%d",i);
return 0;
}