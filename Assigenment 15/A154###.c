#include <stdio.h>
#define right 1
#define left 0
void rotate_array(int a[], int n, int dir, int shift);
void display(int a[], int n);
int main()
{
  int a[5] = {1, 2, 3, 4, 5};
  display(a,5);
  rotate_array(a, 5, right, 3);
  display(a, 5);
}
void display(int a[], int n)
{
    int i;
    printf("\n");
    for(i=0;i<5;i++)
    printf("%d ", a[i]);
}
void rotate_array(int a[], int n, int dir, int shift)
{
  int i, temp;
  if (dir == right)
  {
   
    while (shift)
    {
      temp = a[n - 1];
      for (i = n - 1; i >=1; i--)
      {
      a[i] = a[i - 1];
      }
      a[0] = temp;
      shift--;
    }
  }
  else
  {
    while (shift)
    {
     temp = a[0];
      
       for (i = 0; i <= n - 2; i++)
      {
        a[i] = a[i + 1];
      }
      a[n - 1] = temp;
        shift--;
    }         
      
                                                                      
  }
 
}
