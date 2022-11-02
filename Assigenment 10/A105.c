#include<stdio.h>
void f1 (int );
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    f1(n);
    printf("\n");
    return 0;

}
void f1 (int a)
{
int x;
for(x=1;x<=a;x++)

    printf(" %d",2*x-1);

}
