/* C program to find the roots of a quadratic equation */
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d, r1, real, img, r2;
    printf("Enter a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2* a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("%d", r1);
        printf("%d", r2);
    }
    else if (d == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("%d", r1, r2);
    }
    else 
    {
        real = -b / (2 *a);
        img = sqrt(-d) / (2 * a);
        printf("%d" , real, img);
    }
}