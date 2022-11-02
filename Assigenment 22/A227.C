#include<stdio.h>
#include<cstdlib>
int main()
{
    int *p;
    p=(int*)malloc(sizeof(int));//Allocate the memory but we canant free it;
    p=NULL;
    return 0;
}