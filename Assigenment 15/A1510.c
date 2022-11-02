/* #include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],b[10],i,j,n,count=0;

printf("Enter size of array:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{ 
     count=1;
    if(a[i]!=-1)
    {
    for(j=i+1;j<n;j++)
    {
      if(a[i]==a[j])
      {
        count++;
        a[j]=-1;
      }
    } 
    b[i]=count;
}
}
for(i=0;i<n;i++)
{ 
    if(a[i] !=-1)
    {
      printf(" frecuncy of %d is %d\n",a[i],b[i]);
    }
}
return 0;
}*/
#include<stdio.h>//space comlexity o(n) ,hashing tchnique
int main()
{
  int a[10000],freq[10000]={0},i,n;
  printf("Enter size of array:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    freq[a[i]]++;
  }
  for(i=0;i<n;i++)
  {
    if(freq[i] != 0)
    printf("frequency of %d is %d :\n",i,freq[i]);
    
  }
  return 0;
}
