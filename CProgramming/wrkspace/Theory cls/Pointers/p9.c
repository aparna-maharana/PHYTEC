/* WACP find the size of pointer variable of multiple data type */
#include <stdio.h>
int main()
{
    int a=9;
    float f=12.4;
    double d=18.34;
    char ch='x';
    int *p1 = &a;
    printf("Size of int:%u\n", sizeof(p1));
    float *p2 = &f;
    printf("Size of float:%u\n", sizeof(p2));
    double *p3 = &d;
    printf("Size of double:%u\n", sizeof(p3));
    char *p4 = &ch;
    printf("Size of character:%u\n", sizeof(p4));
}