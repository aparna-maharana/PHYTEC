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
    struct Employee emp1;
    printf("Enter employee details\n ");
    
    printf("Enter the empno:\n ");
    scanf("%d", &emp1.empno);
    printf("Enter the salary:\n ");
    scanf("%f", &emp1.empsal);
    printf("Enter the name:\n ");
    scanf("%s", emp1.empname);
}