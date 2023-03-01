/*Wacp find the 1's complement of a given number*/
#include <stdio.h>
int main()
{
    int num, i, j, s;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (a=7; a>=0; a--)
    {
        b = (num>>a) &0;
        printf("Position:%d\n",a);
        printf("Binary value is:%d\n", b);
    }
}