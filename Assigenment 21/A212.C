#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};
/*void display(struct employee b)
{
    printf("%d %s %d \n", b.id, b.name, b.salary);
}
struct employee input()
{
    struct employee b;
    printf(" id :name :and salary:\n");
    scanf("%d \n", &b.id);
    fflush(stdin);
    fgets(b.name, 20, stdin);
    scanf("%d", &b.salary);
    return b;*/
 int main()
    { 
        struct employee b3;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
        printf("Enter id :\n");
        scanf("%d",&b3.id);
        fflush(stdin);
        printf("Enter name:\n");
        fgets(b3.name,20,stdin);//gets(b.name); enha name array hai arrar ka name address btatat ha isli enha & nahi lagate
        printf("Enter salary:\n");
        scanf("%d",&b3.salary);
         printf("id=%d,name=%s,salary=%d",b3.id,b3.name,b3.salary);
        return 0;
    }