#include<stdio.h>
#include<cstdlib>
int main()
{
    int *ptr,size,i;
    printf("Enter the size:\n");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    *ptr=10;
    if(ptr==NULL)
    {
        printf("Memory allocation is failid:");
        return 0;
    }
    printf("Memory is allocated :");
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++)
    {
    printf("%d ",*(ptr+i));
    }
    free(ptr);
    return 0;
}