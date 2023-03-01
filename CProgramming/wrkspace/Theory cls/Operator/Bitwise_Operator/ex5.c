#include <stdio.h>
int main()
{
    int num1, num2, a, b, d, m, s;
    printf("Enter the first number:\n");
    scanf("%d", &num1);
    printf("Enter the second number:\n");
    scanf("%d", &num2);
    printf("\n");
    for (a=7; a>=0; a--)
    {
        b = (num1>>a) & 0x1;
        printf("Position for num1:%d\n",a);
        printf("Binary value for num1:%d\n", b);
    }
    printf("\n");
    for (a=7; a>=0; a--)
    {
        d = (num2>>a) & 0x1;
        printf("Position for num2:%d\n",a);
        printf("Binary value for num2:%d\n", d);
    }
    {
    s = b | d;
    printf("Sum:%d\n", s);
    m = b & d;
    printf("Multipication:%d\n", m);
    }
}
