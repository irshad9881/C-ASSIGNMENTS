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
        struct employee b3[3];
        int i;
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
         printf("id=%d\n name=%s\n salary=%d\n",b3[i].id,b3[i].name,b3[i].salary);
}
        return 0; 
    }