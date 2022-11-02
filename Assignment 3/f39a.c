#include<stdio.h>
int main()
{
    int A,B,C;
    printf("Enter two numbers",A,B,C);
    scanf("%d %d %d",&A,&B,&C);
    if (A>=B && A>=C)
    printf("%d is largest num",A);
    else if (B>=A && B>=C)
    printf("%d is largest num",B);
    else
    printf("%d is largest num",C);
    return 0;
}