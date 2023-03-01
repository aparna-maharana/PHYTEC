#include <stdio.h>
#include <string.h>
struct Employee
{
    int empno;
    float empsal;
    char empname[10];
};
int main()
{
    struct Employee emp1, emp2, emp3;
    emp1.empno =10;
    strcpy(emp1.empname, "Aparna");
    emp1.empsal=50,000;
    printf("%d %s %f", emp1.empno, emp1.empname, emp1.empsal);

}
