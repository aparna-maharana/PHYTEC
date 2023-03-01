/* WACP Find the size of modulo 5 of a given number is zero then print expression2 else expression. */
#include <stdio.h>
int main()
{
    int a, b=4;
    printf("Enter a number:");
    scanf("%d", a);
    printf("%d",sizeof(a%5)?b:a);
    
}
