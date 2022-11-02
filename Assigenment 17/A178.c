#include<stdio.h>
#include<string.h>
int main()
{
    char s1[200],s2[200];
    int i,l;
    printf("Enter string:");
    gets(s1);
    for(i=0;s1[i];i++)
    {
    s2[i]=s1[i];
    }
    s2[i]='\0';
    printf("copy string :%s",s2);
    return 0;
}