/* Write a C program to calculate x^(y+z) by using user defined function. */
#include <stdio.h>
#include <math.h>
int ap(int a, int b, int c);
int main()
{
    int x, y, z, i;
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Y: ");
    scanf("%d", &y);
    printf("Enter Z: ");
    scanf("%d", &z);
    i = ap(x, y, z);
    printf("Ans:%d\n",i);
    return 0;

}

int ap(int a, int b, int c)
{
    int r ;
    r = (a + b);
    return pow(a, r);
}
