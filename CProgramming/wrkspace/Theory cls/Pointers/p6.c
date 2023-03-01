#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int (*func)(int, int);
int main()
{
    int x, y;
    int r;
    printf("Enter the value of x:");
    scanf("%d", &x);
    printf("Enter the value of y:");
    scanf("%d", &y);
    func = &add;
    r = (*func)(x, y);
    printf("Addition:%d\n", r);
    func = &sub;
    r = (*func)(x, y);
    printf("Subtraction:%d\n", r);
    func = &mul;
    r = (*func)(x, y);
    printf("Multipication:%d\n", r);
    func = &div;
    r = (*func)(x, y);
    printf("Division:%d\n", r); 
   
}
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
