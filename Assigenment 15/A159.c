#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a[100],b[100],c[100],i,j,k,n,m;
    printf("size of first array :");
    scanf("%d",&n);
      printf("Enter first  array elements :");
 for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("size of second array:");
    scanf("%d",&m);
    printf("Enter second array elements:");
        for ( j= 0;j<m; j++)
        {
        scanf("%d",&b[j]);
        }
     i=0;
     j=0;
     k=0;
while(i<n && j<m)
{
if(a[i]<b[j])
{
    c[k]=a[i];
    i++,k++;
}
else
{
    c[k]=b[j];
    k++,j++;
}
}
while(i<n)
{
    c[k]=a[i];
    k++,i++;
}
while(j<m)
{
    c[k]=b[j];
    k++,j++;
}
for(i=0;i<k;i++)
{
    printf("%d",c[k]);
}
}
/*int a[20],b[20],c[20],i,j,m,n;
printf("Enter size of first array:");
scanf("%d",&n);
printf("Enter element of array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter size of second array:");
scanf("%d",&m);
printf("Enter element of array:");
for(j=0;j<n;j++)
{
scanf("%d",&b[j]);
for(i=0;i<n;i++)
c[i]=a[i]+b[j];
printf("%d",c[i]);
return 0;
}
}*/
