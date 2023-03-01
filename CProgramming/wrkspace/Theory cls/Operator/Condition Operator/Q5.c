/* WACP Find out greatest no. of a given 3 values using logical operator */
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);
    if(a>b)
    {
        if (a>c)
        {
            printf("Greatest number is:%d\n", a);
        }
        else
        {
            printf("Greatest number is:%d\n", c);
        }

    
    }
    else if(b>a)
    {
        if(b>c)
        {
            printf("Greatest number is:%d\n", b);
        }
        else
        {
            printf("Greatest number is:%d\n", c);
        }
    }
}