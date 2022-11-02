#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];

    printf("Enter any string:\n");
    gets(str);
    strrev(str);
    printf("reverse string %s",str);
    return 0;
}
/*#include<stdio.h>//o(n/2) 
#include<string.h>
int main()
{
    char s[100],t;
    int i=0,l;
    printf("Enter string:");
    gets(s);
    for(l=0;s[l];l++);
    for(i=0;i<l/2;i++)
    {
        t=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=t;
    }
    printf("reverse string is %s",s);
    return 0;
}*/