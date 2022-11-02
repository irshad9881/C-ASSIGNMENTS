#include<stdio.h>
struct Marks
{
    int roll_no;
    char name[30];
    float chem_marks,math_marks,phy_marks;
};
int main()
{
    struct Marks m[5];
    for(int i=0;i<4;i++)
    {
    printf("student %d:\n",i+1);
    printf("Enter roll_no:");
    scanf("%d",&m[i].roll_no);
    printf("Enter name :\n");
    scanf("%s",m[i].name);
    printf("Enter math marks");
    scanf("%f",&m[i].math_marks);
    printf("Enter chem marks");
    scanf("%f",&m[i].chem_marks);
    printf("Enter phy marks:\n");
    scanf("%f",&m[i].phy_marks);
    }
    for(int i=0;i<4;i++)
    {
        printf("student %d :\n",i+1);
        float percentage=(m[i].math_marks+m[i].chem_marks+m[i].phy_marks)/3;
        printf(" percentage %f:\n",percentage);
    }
    return 0;
}
