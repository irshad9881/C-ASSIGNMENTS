/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    printf("Enter your name");
    gets(str);
    strupr(str);
    printf("%s",str);
    return 0;
}*/
#include<stdio.h>
#include<string.h>
void f(char a[]);
int main()
{
    char str[200];
    printf("Enter string:\n");
    fgets(str,20,stdin);
    f(str);
    return 0;
}
void f(char a[])
{
    int i;
    for(i=0;a[i];i++)
    if(a[i]>='a' && a[i]<='z')
    {
        a[i]=a[i]-32;
    }
        printf("Uper case string :\n %s ",a);

}