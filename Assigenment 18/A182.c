#include<stdio.h>
#include<string.h>
void f(char s[]);
int main()
{
    char str[255];
    printf("Enter string:");
    gets(str);
    f(str);
    return 0;
}
void f(char s[])
{
    char t;
    int i,l;
    for(i=0;s[i];i++)
    l=strlen(s);
    for ( i = 0; i <l/2; i++)
    {
        t=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=t;
    }
    printf("%s",s);
}