/*#include<stdio.h>
#include<string.h>
int main()
{
char s[200];
printf("Enter string:");
fgets(s,200,stdin);
strlwr(s);
printf("%s",s);
return 0;
}*/
#include<stdio.h>
#include<string.h>
void f (char a[]);
int main()
{
    char s[200];
    printf("Enter string:");
    fgets(s,200,stdin);
    f(s);
    return 0;
}
void f (char a[])
{
    int i;
    for(i=0;a[i];i++)
{
    if(a[i]>='A' && a[i]<='Z')
    {
        a[i]=a[i]+32;
    }
    
}
printf("Lower string:\n %s",a);
}