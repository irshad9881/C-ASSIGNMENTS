#include<stdio.h>
#include<string.h>
int f(char *a);
char* res(char *a);
int main()
{
    char s[200];
    int x;
    printf("Enter string \n");
    gets(s);
   strcpy(s,res(s));//it is return string  not has extra space so i copy it
   x=f(s);//count words
printf("pirnt num words %d \n",x);
return 0;
}
int  f(char *a)//for printing words
{
    int count =0,i=0;
    while(*(a+i))//jabataknull nae tab tak chalen 
    {
        if(*(a+i)==' ')//count space because here is not extra space here jo spce hai unhe count kraden bahi words honge
        count++;
        i++;
    }
    return (count+1);
}
char* res(char *a)//remove setra space
{
    char *p;
    int i=0,j=0;
    p = malloc(strlen(a)+1);//dynamicaly array make+null 
    while(*(a+i))//check null character
    {
        while(*(a+i)==' ')//check space in starting and remove 
        i++;
        while(*(a+i)!=' ' && *(a+i)!='\0')//copy character one by one in other array  and chek last word null
        {
            *(p+j)=*(a+i);//copy
            i++;j++;
        }
       if(*(a+i)=='\0' && *(p+j-1)==' ') //loop see out jane ks resion null hai ya space 
        j--;
        *(p+j)=*(a+i);// one space store also  and space ki jage last me null override jho jaega
        j++;
    }
    return (p);
}
/*
#include<stdio.h>
#include<string.h>
void f( char s[]);
int main()
{
    char a[200];
    
    printf("Enter string:");
    gets(a);
    f(a);
    return 0;
}
void f( char s[])
{ 
  int i,count =1;
    for(i=0;s[i];i++)
    {
        if(s[i]==' ' && s[i+1]!=' ')
        {
        count++;
       }
    }
    printf("num of words:%d\n",count);
}*/


























