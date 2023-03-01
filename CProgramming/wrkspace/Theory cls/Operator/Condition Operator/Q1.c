/* WACP Find the greatest number of given two numbers using condition operator*/
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number:\n");
    scanf("%d", &a);
    printf("Enter the second number:\n");
    scanf("%d", &b);
    (a>b)?printf("The greatest number is:%d\n",a):printf("The greatest number is:%d\n", b);
    
}
