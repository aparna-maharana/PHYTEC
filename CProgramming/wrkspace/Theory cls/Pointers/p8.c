#include <stdio.h>
int main()
{
    int a;
    printf("Enter a value:");
    scanf("%d", &a);
    int *p=&a;
    printf("Value of a:%x\n", p);
    printf("Now the value of a:%x\n", ++p);
    float b;
    printf("Enter the float value:");
    scanf("%f", &b);
    float *q=&b;
    printf("Value of a:%x\n", q);
    printf("Now the value of a:%x\n", ++q);

}