/*#include<stdio.h>
#include<string.h>
int f(char str[], char ar[]);
int main( )
{int index;
    index=f("abababbbaabbababbbaa","aabb");
     if(index==-1 )
     printf("string not found in index:\n");
     else 
      printf("string found in  index %d:\n",index);
      return 0;
}
     int f(char str[], char ar[])
{
     int i,j,l,k;
     l=strlen(ar);
     for(i=0;str[i+l-1];i++)
     { k=i;
        for(j=0;j<=l-1;j++)
        { 
            if(str[k]!=ar[j])
                break;
                k++;
        }   
        if(j==i)  
        return i;
     }  
     return -1;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[10][20] ,t[20];
    int i,j,f;
    printf("Enter string:");
    for(i=0;i<3;i++)
    {
    gets(s[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0 ;j<3;j++)
        {
          if(strcmp(s[i],"irshad")==0)
          {
          f=1;
          break;
          }
        }
    }
    if(f==1)
  printf("string is found");
  else 
  printf("not found:");
   return 0;
}