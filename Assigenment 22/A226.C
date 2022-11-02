#include<stdio.h>
#include<cstdlib>
int main()
{
    int *ptr,i,size,max=-32768;
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
       if(max<*(ptr+i))
        max=*(ptr+i);
        
    }
    printf("max is %d",max);
    free(ptr);
    return 0;
}