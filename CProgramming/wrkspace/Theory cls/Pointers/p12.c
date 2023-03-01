/* Increment the array address using pointer */
#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int i, *p;
    p=&a;
    for(i=0; i<10; i++)
    {
        printf("Value of a: %d\n from %p\n", a[i], &a[i]);
    }
    printf("Incremented by 2:%x\n", (p+2));
    printf("Incremented by 4:%x\n", (p+4));
    printf("%x\n", (p+4)-(p+2));
}