 #include<stdio.h>
 int fact(int n)
 {
    int fact=1,j;
    for(j=1;j<=n;j++)
    fact=fact*j;
    return fact;
 }
 int main()
 {  int i,a,sum=0,s;
    printf("Enter a number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    sum=sum+fact(i)/i;
    }
    printf("%d",sum);
    return 0;
 }
 