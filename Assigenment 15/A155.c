#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,a[10],n,c=0,l;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter the elemnts:\n");
    for(i=0;i<n;i++)
    {
   scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      c=a[i];
    }
    for(i=1;i<n;i++)
    {
      c=a[i];
    }
    printf("%d",c);
    
  return 0;//doubt
}