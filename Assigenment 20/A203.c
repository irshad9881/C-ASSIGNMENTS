#include<stdio.h>
void sort(int*,int );
int main()
{ 
    int a[20],k,n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter the element of array:\n");
    for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    sort(a,20);
    return 0;
}
void sort(int *ptr,int n)//void pointer 
{
    int i,j;
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<=n;j++)
    {
        if(ptr[i]>ptr[j])
        {
        int t;
        t=ptr[i];//or *(p+i) here * is denote value.
        ptr[i]=ptr[j];
        ptr[j]=t;
        }
    }
    printf("%d ",ptr[i]);
    }

}