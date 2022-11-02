#include<stdio.h>
#include<string.h>
void swap(char a[] ,int i,int j)
{
    char t;
    while(i<=j)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }
}
int main()
{
    char str [200];
    printf("Enter string:\n");
    gets(str);
    int e=0,s=0,flag=0,i=0;
    while(str[i]!='\0')
    {
        while(str[i]!=' ')//spacec ko check lare ga
        {
        if(str[i]=='\0')//null ko bhi chik kare ga
        {
            flag=1;
            break;
        }
        e++;
        i++;
    }
    swap(str,s,e-1);
    if(flag==1)
   break;
   s=e++;//start ko end ke next per rakha
   i++;
}
swap(str,0,i-1);//whole array reverse 
printf(" %s ",str);
return 0;
}