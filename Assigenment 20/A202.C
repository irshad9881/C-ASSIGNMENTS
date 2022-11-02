#include<stdio.h>
void swap(char** x,char** y)
{ 
  char* temp;
   temp = *x;
   *x = *y;
   *y = temp;
}
int main()
{
    char *a[20],*b[20];//static memory allocation
    printf("Enter two string :\n");
    gets(a);
    gets(b);
 
    swap(&a,&b);
    printf("%s %s",a,b);
    return 0;
}

