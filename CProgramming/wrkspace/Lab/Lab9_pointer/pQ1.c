/* WACP to add two numbers using pointers */
#include <stdio.h>
int main()
{
    int a, b, s, *p, *q;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    p = &a;
    q = &b;
    s = (*p)+(*q);
    printf("Sum of two numbers:%d\n", s );
    return 0;

}