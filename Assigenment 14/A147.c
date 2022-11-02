#include<stdio.h>
int main()
{
    int max1,max2,i,a[10];
    printf("Enter the elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        max1=max2=0;
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>max1)
        {
        max2=max1;
         max1=a[i];
        }
         else if(a[i]>max2 && a[i]<max1)
         {
         max2=a[i];
         }
    }
    printf(" first largest is %d",max1);
    printf("\n");
    printf("Second largest is %d",max2);
    return 0;

}
