#include<stdio.h>
#include<cstdlib>
int main()
{
    int *ptr,i,size=0,sum=0;
    printf("Enter size :");
    scanf("%d",&size);
    ptr=(int*)malloc(size*sizeof(int));
    if(ptr==NULL)
    {
        printf("Mameroy allocation is faild:");
        return 0;
    }
    printf("Memory is allocated:");
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("sum is %d",sum);
    free(ptr);
    return 0;
}