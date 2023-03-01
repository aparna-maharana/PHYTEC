#include <stdio.h>
struct emp
{
    int empno;
    float sal;
    char empname;
}employee;
int main()
{
    employee.empname='Aparna';
    employee.sal=10;
    employee.empno=10;
    printf("size of structure:%d\n",sizeof(employee));
    

}
