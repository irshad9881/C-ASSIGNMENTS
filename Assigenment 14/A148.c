 #include<stdio.h>
int main()
{
    int i,j,t,a[10];
    printf("Enter the elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<10;i++)
{
    for(j=i+1;j<10;j++)
    {
        if(a[i]<a[j])//decending order
        {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        }
    }
}
    printf(" second min is %d",a[8]);
  
    return 0;

}
