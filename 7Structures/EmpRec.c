#include <stdio.h>
struct employee
{
    char name[30];
    int empId;
    float salary;
};
int main()
{
    struct employee emp;
    printf("\nEnter details :\n");
    printf("Name:");
    gets(emp.name);
    printf("ID:");
    scanf("%d", &emp.empId);
    printf("Salary:");
    scanf("%f", &emp.salary);
    printf("\nEntered detail is:");
    printf("\nName: %s", emp.name);
    printf("\nId: %d", emp.empId);
    printf("\nSalary: %f\n", emp.salary);
    return 0;
}
