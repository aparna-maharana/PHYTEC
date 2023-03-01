/*Swapping of two number using bitwise operator*/
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number a:\n");
    scanf("%d", &a);
    printf("Enter the second number b:\n");
    scanf("%d", &b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("Value of a:%d\n",a);
    printf("Value of b:%d\n",b);
    return 0;
}