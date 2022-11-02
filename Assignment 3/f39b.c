#include<stdio.h>
int main()
{
    int x,y,z,largest;
    printf("Enter three numbers");
    scanf("%d %d %d",&x,&y,&z);
    largest = x > y ? (x>z? x:z):(y>z ? y:z);
    printf("%d is the largest number .", largest);
    return 0;
}