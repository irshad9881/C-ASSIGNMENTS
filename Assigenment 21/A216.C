#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};
 int main()
    { 
        struct employee b3[3],t;
        int i,j;
           for(int i=0;i<3;i++)     
           {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
        printf("Enter id :\n");
        scanf("%d",&b3[i].id);
        fflush(stdin);
        printf("Enter name:\n");
        fgets(b3[i].name,20,stdin);//gets(b.name); enha name array hai arrar ka name address btatat ha isli enha & nahi lagate
        printf("Enter salary:\n");
        scanf("%d",&b3[i].salary);
           }
           for(i=0;i<3;i++)
           {
           for(j=i+1;j<3;j++) 
           {
            if(strcmp(b3[i].name,b3[j].name)>0)
            {
            t=b3[i];
            b3[i]=b3[j];
            b3[j]=t;
            }
           }
           }
           for(i=0;i<3;i++)
           {    
         printf("id=%d\n name=%s\n salary=%d\n",b3[i].id,b3[i].name,b3[i].salary);
           }
        return 0; 
    }