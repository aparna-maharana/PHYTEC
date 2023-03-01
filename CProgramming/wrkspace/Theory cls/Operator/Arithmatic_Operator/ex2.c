/* Swapping of two numbers without using third variable */
#include <stdio.h>
int main()
{
    int a,b;
    printf("Swapping of two numbers:\n");
    printf("Enter the first number a:\n");
    scanf("%d", &a);
    printf("Enter the second number b:\n");
    scanf("%d", &b);
    a = a*b;
    b = a/b;
    a = a/b;
    printf("Value after swapping:a=%d b=%d", a,b);
    return 0;
}