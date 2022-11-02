#include<stdio.h>//doubt
#include<string.h>
int main()
{
    char s[5][100],a[100];
    int i,l,f,j;
    printf("Enter string:\n");
    for(i=0;i<5;i++)
    gets(s[i]);
    l=strlen(a);
    for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
    {
        if(a[j]==a[l-j-1]  )
         f=1;
        
    }i++;
    if(f==1)
    printf("palendrom: %s \n",s[i]);
    else
    printf(" Not palendrom:\n");
    }
    
return 0;
}