#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};
void display(struct employee b)
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
    return b;
int main()
{
    struct employee b1={10,"irshad",500000};
    struct employee b2;
    display(b1);
    b2=input();
    display(b2);
    return 0;
}