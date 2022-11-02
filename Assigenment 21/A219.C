#include <stdio.h>
#include <conio.h>
struct student
{
    int roll;
    char name[20];
    int marks;
};
void display(struct student b)
{
    printf("%d %s %d \n", b.roll, b.name, b.marks);
}
/*struct student input()
{
    struct student b;
    int i;
    for(i=0;i<3;i++)
    {
    printf(" roll_no:name :and marks:\n");
    scanf("%d \n", &b[i].roll_no);
    fflush(stdin);
    fgets(b[i].name, 20, stdin);
    scanf("%d", &b[i].marks);
    return b;*/

int main()
    { 
        struct student  s[1000]; 
        int i,n;
        printf("Enter student num:");
        scanf("%d",&n);  
        printf(" roll_no:name :and marks:\n");
        for(i=0;i<n;i++)         
        {     
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
        printf("Enter roll :\n");
        scanf("%d",&s[i].roll);
        fflush(stdin);
        printf("Enter name:\n");
        gets(s[i].name);//gets(b.name); enha name array hai arrar ka name address btatat ha isli enha & nahi lagate
        printf("Enter marks:\n");
        scanf("%d",&s[i].marks);
        }
        printf("disly inf.");
        for(i=0;i<n;i++)
        {
         printf("roll=%d\n name=%s\n marks=%d\n",s[i].roll,s[i].name,s[i].marks);
        }
    return 0;
    }