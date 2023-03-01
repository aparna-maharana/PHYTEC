/* WACP to find the maximum number between two numbers using a pointer. */
#include <stdio.h>
int main()
{
    int a, b;
    int *p;
    int *q;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    p=&a;
    q=&b;
    if((*p)>(*q))
    {
        printf("The maximum number is:%d\n", *p);
    }
    else
    {
        printf("The maximum number is:%d\n", *q);
    }
}