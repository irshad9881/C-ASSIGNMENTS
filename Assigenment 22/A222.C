#include<stdio.h>
#include<cstdlib>
int main()
{
    int *ptr ,i,sum=0,size=0;
    printf("Enter size :");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));//benifit is default value is 0;
     //ptr=(int*)malloc(size*sizeof(int));//
   if(ptr==NULL)
{
    printf("Memory allocation is faild:");
    return 0;
}
printf("Memory allocated:");
for(i=0;i<size;i++)
{
    scanf("%d",ptr+i);//first take value then apply operation 
}
for(i=0;i<size;i++)
{
    sum=sum+*(ptr+i);
}
printf("Avg is %d",sum/size);
free(ptr);
return 0;
}