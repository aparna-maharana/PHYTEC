#include <stdio.h>
#include <string.h>
struct Employee
{
    int empno;
    float empsal;
    char empname[10];
    
}emp;
int main()
{
    int *pt;
    *pt=&emp;
    struct Employee emp1={{10, 2000, "Aparna"}, *pt};
    display(&emp);
    
    int display(struct Employee emp1[]);
    {
    int i;
    for(i=0; i<2; i++)
    {
        printf("Employee no:%d\n", emp[i].empno);
        printf("Employee salary:%f\n", emp[i].empsal);
        printf("Employee name:%s\n", emp[i].empname);
    }
    }
}
    
    