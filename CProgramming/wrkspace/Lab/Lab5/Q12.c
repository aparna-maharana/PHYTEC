/* C program to find the largest number among three numbers*/
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
            printf("Largest number is:%d\n", a);
        }
        else
        {
            printf("Largest number is:%d\n", c);
        }

    
    }
    else if(b>a)
    {
        if(b>c)
        {
            printf("Largest number is:%d\n", b);
        }
        else
        {
            printf("Largest number is:%d\n", c);
        }
    }
}