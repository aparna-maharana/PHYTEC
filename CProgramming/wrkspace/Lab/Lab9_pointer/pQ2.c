/* WACP to add numbers using call by reference. */
#include <stdio.h>
int sum(int*p, int *q);
int main()
{
    int a, b, s;
    int*p;
    int *q;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    p = &a;
    q = &b;
    s = sum(p, q);
    printf("Output:%d\n", s);
}
int sum(int*p, int *q)
{
    return *p+*q;
}
