#include<stdio.h>
#include<string.h>
int main()
{
    char str[200],i;
    int j,count=0;
    printf("Enter any string:\n");
    scanf("%s",str);
    for(i='a';i<='z';i++)
    {
        count =0;
        for(j=0;str[j];j++)
        {
            if(i==str[j])
            {
                count++;
            }
        }
        if(count>0)
        printf("%c is %d times:\n",i,count);
    }
    return 0;
}



