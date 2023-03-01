#include <stdio.h>
int main()
{
    int a;
    int *p=&a;
    printf("address of a is:%d\n", a);
    if(*p%sizeof(a)==0)
    {
        printf("Alligned\n");
    }
    else
    {
        printf("Not alligned\n");
    }
}