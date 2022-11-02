#include <stdio.h>
int f(int);
int main()
{
  int x, s;
  printf("Enter a number");
  scanf("%d", &x);
  s = f(x);
  printf("%d", s);
  return 0;
}
int f(int a)
{
  int i;
  for (i = 2; i < a; i++)
  {
    if(a % i == 0)
    break;
  }
  if (i == a)
    printf(" prime number", a);
  else
    printf(" Not prime number", a);
  return a;
}