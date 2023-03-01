/* Swapping of two numbers using pointer and function */
#include <stdio.h>
int swap(int *x, int *y);
int main()
{
    int a, b, c;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    swap(&a, &b);
    printf("swapping of two numbers:%d\n%d\n",a,b);
}
int swap(int *x, int *y)
{
    int s;
    s = *x;
    *x = *y;
    *y = s;
    return s;
}