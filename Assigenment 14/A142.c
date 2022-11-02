#include<stdio.h>
int main()
{
    int a[10],sum=0,i;
    float avg=0.0;
    printf("Enter the element:");
    for(i=0;i<10;i++)
    {
      scanf("%d",&a[i]);
        sum=sum+a[i];
    }
 avg=sum/10.0;
 printf(" avg is %f",avg);
 return 0;
}