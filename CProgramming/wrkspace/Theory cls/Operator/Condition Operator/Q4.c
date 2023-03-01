/* WACP Evaluate 2 operands with a relation operator.
Display True and False */
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("a>b %d\n", a>b);
    printf("a<=b %d\n", a<=b);
    printf("a==b %d\n", a==b);
    printf("a!=b %d\n", a!=b);
    printf("a<b %d\n", a<b);
}
