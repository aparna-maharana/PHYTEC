/* The program explains Arithmetic operations
usage: operator - '+','-','/','*','%'
syntax: operand <operator> operand - a + b */
#include <stdio.h>
int main()
{
                     int a, b, c, d, e;
                     float f, g;
                     printf("Arithmetic Operations:\n");
                     printf("Enter the first number:\n");
                     scanf("%d", &a);
                     printf("Enter the second number:\n");
                     scanf("%d", &b);
                     c = a + b;
                     printf("Addition of two number: %d\n",c);
                     d = a - b;
                     printf("Subtration of two number: %d\n",d);
                     e = a * b;
                     printf("Multipication of two number: %d\n",e);
                     f = a / b;
                     printf("Division of two number: %f\n",f);
                     g = a % b;
                     printf("Mod of two number:%f\n",g);
                     return 0;

}