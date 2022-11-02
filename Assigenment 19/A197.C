#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int vn(char *s)
{
    while(*s)
    {
        if(! isdigit(*s))
        {
        return 0;
    }s++;
    }return 1;
}
int vip(char *ip)
{ int i,n,dots=0;
    char *p;
    if(ip==NULL)
    return 0;
    p=strtok(ip,".");
    if(p==NULL)
    return 0;
    while(p)
    {
        if(!vn(p))
        return 0;
        n=atoi(p);
        if(n>=0 && n<=255)
        {
            p=strtok(NULL,".");
            if(p!=NULL)
            dots++;
        }else
        return 0;

    }
    if(dots !=3 )
    return 0;
    return 1;
}
int main()
{
    char ip1[]="192.168.4.1";
    char ip2[]="172.16.253.1";
    char ip3[]="192.800.100.1";
    char ip4[]="125.512.100.abc";
    vip(ip1)?printf("valid\n"):printf("Not valid \n");
    vip(ip2)?printf("valid\n"):printf("Not valid \n");
    vip(ip3)?printf("valid\n"):printf("Not valid \n");
    vip(ip4)?printf("valid\n"):printf("Not valid \n");
}