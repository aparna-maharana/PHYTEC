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
    struct Employee emp[2]={{10, 2000, "Aparna"},{20, 3000, "Urmila"}};
    display (emp);
}
int display(struct Employee emp[])
{
    int i;
    for(i=0; i<2; i++)
    {
        printf("Employee no:%d\n", emp[i].empno);
        printf("Employee salary:%f\n", emp[i].empsal);
        printf("Employee name:%s\n", emp[i].empname);
    }
}
    