/* WACP swapping of 3 numbers */
#include <stdio.h>
int swapnumbers(int *x, int *y, int*z);
int main()
{
    int a, b, c; 
    printf("Input the value of 1st element:");
    scanf("%d", &a);
    printf("Input the value of 2nd element:");
    scanf("%d", &b);
    printf("Input the value of 3rd element:");
    scanf("%d", &c);
    printf("Element before swapping are:%d %d %d\n", a, b, c);
    swapnumbers(&a, &b, &c);
    printf("Element after swapping are:%d %d %d\n", a, b, c);
}
int swapnumbers(int *x, int *y, int*z)
{
    int temp;
    temp=*y;
    *y=*x;
    *x=*z;
    *z=temp;
}