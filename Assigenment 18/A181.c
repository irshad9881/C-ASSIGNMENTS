#include<stdio.h>
#include<string.h>
 void f(char s[]);
 int main()
{
    char str[255],l;
    printf("Enter string:");
    gets(str);
   f(str);
   return 0;
}
void f(char s[])
{ 
    int i;
for(i=0;s[i];i++);
printf("%d",i);

}