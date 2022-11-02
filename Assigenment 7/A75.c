#include<stdio.h>

int main()
{
int a,b,i,hcf;

printf("Enter two numbesr: ");
scanf("%d %d",&a,&b);
hcf=a<b?a:b;
for(i=2;i<=hcf;i++)
{
if((a%i==0)&&(b%i==0))

break;
}

if(i==hcf+1)

printf("%d and %d are co-prinme",a,b);

else
{
printf("%d and %d are not co-prime ",a,b);
}


return (0);

}