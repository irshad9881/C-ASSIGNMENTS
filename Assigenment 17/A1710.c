#include<stdio.h>//time complex o(n)
#include<string.h>
int main()
{
    char str[300];
    int freq[256]={0},i;
    printf("Enter the string:\n");
    scanf("%s",str);
    for(i=0;str[i];i++)
    {
      freq[str[i]]++;
    }
    for(i=0;i<=255;i++)
    {
        if(freq[i]!=0)
        {
         printf("freq of %c is %d \n",i,freq[i]);
        }
    }
return 0;
}