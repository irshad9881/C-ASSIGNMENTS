/*#include<stdio.h>
#include<string.h>
int main()
{
    char s1[200],s2[200];
    printf("Enter first string:");
    gets(s1);
    printf("Enter second string:"); 
    gets(s2);
  if(strcmp(s1,s2)==0) 

    printf("Both string are same :");
else if(strcmp(s1,s2)>0)
    printf("s1 are large : ");
    else 
    printf("S2 are large:");

}*/
#include<stdio.h>
#include<string.h>
void f(char a1[] ,char a2[]); 
int main()
{ char s1[200],s2[200];
    printf("Enter first string:");
    gets(s1);
 printf("Enter second string:");
    gets(s2);
f(s1,s2);
return 0;
}
void f(char a1[],char a2[]) 
{ 
    int l2=0,l1=0,i;
   
 for(i=0;a1[i];i++)
 {
 l1++;
 }
 for(i=0;a2[i];i++)
 l2++;
 if(l1>l2)
 printf("first max %d",l1);
 else if(l1==l2)
 printf("both are equal %d:",l1);
 else 
 printf("second is greater %d:",l2);

}


