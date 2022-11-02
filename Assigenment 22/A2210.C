#include<stdio.h>
#include<cstdlib>
int main()
{
    int *ptr,i,size,max=-32768,min=32767;
    printf("Enter size :");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed :");
        return 0;
    }
    printf("Memory alloctd:");
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++)
    {
       if(max<*(ptr+i))
       {
        max=*(ptr+i);
       }
       if(min>*(ptr+i))
       {
        min=*(ptr+i);
       }
    }
    printf("max is %d ",max);
    printf("\n");
    printf("min is %d ",min);
    free(ptr);
    return 0;
}