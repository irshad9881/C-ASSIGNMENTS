 #include<stdio.h>
int f(int );
int main()
{   
    int s,n;
    printf("Enter a num");
    scanf("%d",&n);
    s=f(n);
    printf("%d",s);
    return 0;
}
int f(int a)
{    
    int i,j;
    for(i=a+1; ;i++) 
    {
    for(j=2;j<i;j++)
     {
        if(i%j==0)
        break;
     }
         if(j==i)
     {
        return i;
     }
    }
}
