#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    int f[200]={0};
    int i,count=0,j;
   
    printf("Enter string:");
    gets(a);
     printf("repeed chararacter :\n");
    for(i=0;i<strlen(a);i++)
    {  count=1;
    for(j=i+1;j<strlen(a);j++)
    {
        if(a[i]==a[j] && a[i]!=' ')
        {
        
            count++;
            a[j]='0';
        }
    }
    if(count>1 && a[i]!='0')
    printf("%c ",a[i]);
    }
        return 0;
}