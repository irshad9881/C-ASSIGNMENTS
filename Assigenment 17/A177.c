#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
   int cd=0,i,cc=0,cs=0;
    printf("Enter any string:\n");
    gets(s);
    
    for(i=0;s[i];i++)
    {  
         if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
        {
            cc++;
        }
    else if( s[i]>='0' && s[i]<='9')
        {
            cd++;
        }
        else
        {
         cs++;
        }
    }
     printf("char , digit , special char %d,%d,%d  ",cc,cd,cs);
    return 0;
}