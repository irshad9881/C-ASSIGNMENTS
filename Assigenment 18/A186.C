#include<stdio.h>
#include<string.h>
void f(char a[]);
int main()
{
    char s[200];
    printf("Enter your sting:");
    fgets(s,20,stdin);
    f(s);
    return 0;
}
void f(char a[])
   {
    int i,A=0,D=0;
    for(i=0;a[i];i++)
    {
    if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
        A=1;
      if (a[i]>='0' && a[i]<='9')
        D=1;
    }
      if(A==1 && D==1)
      printf("String is alphanumeric:\n");
      else 
      printf("String is not alphanumeric:\n");
    
    }