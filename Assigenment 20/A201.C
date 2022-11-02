#include<stdio.h>
int swap(int*,int*);
int main()
{
    int n,m;
    printf("Enter two number:");
    scanf("%d %d",&n,&m);
    swap(&n,&m);
    printf("n=%d ,m=%d",n,m);
    return 0;
}
int swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
    return *q;
}