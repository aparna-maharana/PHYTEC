/*WACP Evaluate modulo 2 of a given number=0 then print using conditional operator */
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    if (a%2 == 0)
     {
        printf("Even number:%d\n",a);
     }
    else
     {
        printf("Odd number:%d\n",a);
     }
}