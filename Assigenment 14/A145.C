#include<stdio.h>
int main()
{
    int i,a[10],min;
    printf("Enter the elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        min=a[0];
    }
    for(i=0;i<10;i++)
    {
        if(min>a[i])
min=a[i];
    }
    printf("minimum value is  %d",min);
    return 0;

}