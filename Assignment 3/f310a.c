#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter two numbers ",cp,sp);
    scanf("%d %d",&cp,&sp);
    if(sp>cp)

     printf(" profit% is %d",sp-cp/cp*100); 
    
    
         if(cp>sp)

        printf("loss% is %d",cp-sp/cp*100);
        
        
        return 0;
    }
