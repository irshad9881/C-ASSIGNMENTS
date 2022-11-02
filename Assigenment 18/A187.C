
#include<stdio.h>
#include<string.h>
void f(char a[]);
int main()
{
    char s[200];
    printf("Enter string \n");
    gets(s);
    f(s);
    return 0;
}
void f(char a[])
{
    int i,l;
    l=strlen(a);
    for(i=0;i<l/2;i++)
    {
        if(a[i] != a[l-1-i])
        {
        printf("String is not palendrom:");
        break;
        }
    }
    if(i==l/2)
    {
    printf("String is palondrom:\n");
    }
}
/*
#include<stdio.h>
#include<string.h>
int f(char a[]);
int main()
{
    char s[200];
    printf("Enter string \n");
    gets(s);
    if(f(s))
    {
        printf("String is palendrom:");
    }
    else
    {
    printf("String is not palendrom:");
    }
    return 0;
}
int f(char a[])
{
    int i,l;
    l=strlen(a);
    for(i=0;i<l/2;i++)
    {
        if(a[i] != a[l-1-i])
        return 0;
    }
    return 1;
    
}*/