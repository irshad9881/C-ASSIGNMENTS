#include <stdio.h>
#include <cstdlib>
int main()
{
    char *str,ch;
    int i=0 ,j=1;
    str =(char*)malloc(sizeof(char));
    printf("Enter string:");
    while(ch != '\n')
    {
        ch=getc(stdin);
        j++;
        str=(char*)realloc(str,j*sizeof(char));
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    printf("%s \n",str);
    free(str);
    return 0;
}