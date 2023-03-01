#include <stdio.h>
#include <string.h>
struct Department
{
    char dept[10];
}empdept;
struct Employee
{
    int empno;
    float empsal;
    char empname[10];
    struct Department empdept;
}employee;
int main()
{
    employee.empname='Aparna';
    employee.empsal=10;
    employee.empno=10;
    strcpy(employee.empdept.dept,"Electrical");
    printf("Details: ",employee.empdept.dept);
}