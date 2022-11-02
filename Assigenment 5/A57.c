#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter a number ");
    scanf("%d",&N);
    for(i=N;i>=1;i--)
    printf(" %d",2*i);
    return 0;
}