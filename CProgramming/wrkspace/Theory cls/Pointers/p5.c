#include <stdio.h>
int main()
{
    void * p;
    int a = 10; 
    float f = 3.4; 
    char ch = 'A';
    p = &a;
    printf("Value of a: %d\n", *(int *)p);
    p = &f;
    printf("Value of b: %f\n", *(float *)p);
    p = &ch;
    printf("Value of c: %c\n", *(char *)p);
}