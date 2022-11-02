#include<stdio.h>
int main()
{
    char a[300],*p;
    int c1=0,c2=0;
    printf("Enter string:");
    gets(a);
    p=a;
    while(*p!='\0')
    {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'|*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
        {
         c1++;
        }
        else
        c2++;
        p++;
    }
    printf("vowel is %d and consonent is %d",c1,c2);
    return 0;
}