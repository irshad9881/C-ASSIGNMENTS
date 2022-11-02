#include<stdio.h>
void f1(int);
int main()
{int a;
printf("Enter a number ");
scanf ("%d",&a);
f1(a);

printf("\n");
return 0;

}
void f1(int n)
{
int x;
for(x=1;x<=n;x++)

  printf(" %d",x);


}