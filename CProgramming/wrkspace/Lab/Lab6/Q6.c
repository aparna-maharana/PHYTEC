/* Write a C program to calculate the x to the power y without using standard function. */
#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, r;
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Y: ");
    scanf("%d", &y);
    r = pow(x, y);
    printf("Result:%d\n", r);
}
    