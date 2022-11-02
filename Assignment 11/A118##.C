#include<stdio.h>
int fact (int);
 int comb(int ,int);
void pascal(int);

int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    pascal(x);
}
int fact(int n)
{   int f=1;
    while(n>=1)
    {
    f=f*n;
    n--;
    } 
    return f;
}
 int comb(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));

}
void pascal(int lines)
{
    int i,j,k,r;
    for(i=1;i<=lines;i++)
{
    k=1;r=0;
    for(j=1;j<=2*lines-1;j++)
     {
    if(j>=lines+1-i && j<=lines-1+i &&k)
    {
    printf("%2d",comb(i-1, r));
    k=0;r++;
    }
    else
    {
    printf("  ");
    k=1;
    }
     }
    printf("\n");
}
}
