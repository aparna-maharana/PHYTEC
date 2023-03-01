/* Arithmatic operations using pointer and function */
#include <stdio.h>
int add(int *r, int *t);
int sub(int *r, int *t);
int mul(int *r, int *t);
int div(int *r, int *t);
int main()
{
    int x, y, a, s, m, d;
    printf("Enter the value of x:");
    scanf("%d", &x);
    printf("Enter the value of y:");
    scanf("%d", &y);
    a = add(&x, &y);
    s = sub(&x, &y);
    m = mul(&x, &y);
    d = div(&x, &y);
    printf("Addition:%d\n", a);
    printf("Subtraction:%d\n", s);
    printf("Multipication:%d\n",m);
    printf("Division:%d\n",d);
}
int add(int *r, int *t)
{
    return(*r + *t);
}
int sub(int *r, int *t)
{
    
     return(*r - *t);
}
int mul(int *r, int *t)
{

    return(*r * *t);
    
}
int div(int *r, int *t)
{
    
    return(*r / *t);
}