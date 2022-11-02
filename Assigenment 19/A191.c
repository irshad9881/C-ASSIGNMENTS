#include<stdio.h>
#include<string.h>
int main()
{
    char a[3][30];
    int i,vowel=0,j;
    for(i=0;i<3;i++)
    {
    fgets(a[i],30,stdin);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;a[i][j] != '\0';j++)
        {
        if(a[i][j]=='a' || a[i][j]=='e' || a[i][j]=='i' || a[i][j]=='o'|| a[i][j]=='u' )
        vowel++;
        }
        printf("%s = %d\n",a[i],vowel);
        vowel=0;
    }
       return 0;
}