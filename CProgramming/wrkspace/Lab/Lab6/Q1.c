/* C program to read two integer numbers and find their sum, difference, product 
and quotient using separate function*/
#include <stdio.h>
#include "det.h"
int main()
{
    int n1, n2, s, m, d, q;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    s = sum(n1,n2);
    printf("Sum of two numbrs:%d\n",s);
    d = sub(n1, n2);
    printf("Difference of two numbers:%d\n",d);
    m = mul(n1, n2);
    printf("Multipication of two numbers:%d\n",m);
    q = mod(n1, n2);
    printf("Quotient of two numbers:%d\n",q);
    return 0;

}

int sum(int n1, int n2)
{
    int s;
    s = n1 + n2;
    return s;

}
int  sub(int n1, int n2)
{
    int d;
    d = n1 - n2;
    return d;
}
int mul(int n1, int n2)
{
    int m;
    m = n1 * n2;
    return m;
}
int div(int n1, int n2)
{
    int q;
    q = n1 / n2;
    return q;
}