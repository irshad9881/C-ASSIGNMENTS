#include<stdio.h>
#include<string.h>
int main()
{
     char s1[200],j,i,t,n;
     printf(" Size of first string array:\n");
     scanf("%d",&n);
     printf(" Enter elements of first string array:\n");
       for ( i = 0; i<n; i++)
       {
        scanf("%d",&s1[i]);
       }
        for(i=0;i<n;i++)
       {
        for(j=i+1;j<n;j++)
       { 
        if(s1[i]>s1[j])
        {
        t=s1[i];
        s1[i]=s1[j];
        s1[j]=t;
        }
       }
       }
         printf("Sorted string array:\n");
         for(i=0;i<n;i++)
         printf(" %d ",s1[i]);
         return 0;
}
    