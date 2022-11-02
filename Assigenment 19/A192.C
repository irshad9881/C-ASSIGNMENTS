#include<stdio.h>
#include<string.h>
int main()
{
    char s[10][20] ,t[20];
    int i,j;
    printf("Enter string:");
    for(i=0;i<3;i++)
    {
    gets(s[i]);
    }
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
          if(strcmp(s[i],s[j])>0)//bubble sorting 
          {
          strcpy(t,s[i]);
          strcpy(s[i],s[j]);
          strcpy(s[j],t);
          }
        }
    }
    for(i=0;i<3;i++)
  printf("%s ",s[i]);
   return 0;
}    