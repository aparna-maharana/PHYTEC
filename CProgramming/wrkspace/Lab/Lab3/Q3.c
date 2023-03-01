#include <stdio.h>
int main()
{
    int a;
    a = 15;
    printf("First value of a:%d\n", ++a);
    printf("Second value of a:%d\n", a++);
    printf("Third value of a:%d\n", --a);
    printf("Fourth value of a:%d\n", a--);
    return 0;
}