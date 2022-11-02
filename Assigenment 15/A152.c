#include<stdio.h>
int main()
{
    int a[10],i,n,min;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Input the elelements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        min=a[0];
    }
for(i=0;i<n;i++)
{
    if(min>a[i])
    min=a[i];
}
printf("min elemets is %d",min);
return 0;
}