/* Addition of two numbers using pointer and functions*/
#include <stdio.h>
int sum(int *x, int *y);
int main()
{
    int a=10, b=20, c;
    c = sum(&a, &b);
    printf("Addition of two numbers: %d\n",c);
}
int sum(int *x, int *y)
{
    int all;
    all = *x + *y;
    return all;
}