#include <stdio.h>
int main()
{
    struct employee
    {
        int empid[5];
        int salary;
        employee ,*s;

    }emp;
    int employee;
    printf("%d %d", sizeof(employee), sizeof(emp.empid));
    return 0;
}