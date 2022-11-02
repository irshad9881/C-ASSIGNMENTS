#include<stdio.h>
#include<string.h>
int main()
{
    char s[3][20];
    int i,f;
    printf("Enter email id:\n");
    for(i=0;i<3;i++)
    {
    gets(s[i]);
    }
    for(i=0;i<3;i++)
    {
        if(strchr(s[i],'@')==0)
        {
           printf("\n odd one email is:\nmi %s ",s[i]);
        }
        
    }
    
    return 0;
}