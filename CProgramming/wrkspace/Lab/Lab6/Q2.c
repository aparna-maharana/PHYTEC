/* C program to calculate and print simple interest for three different set of values to principle amount, 
interest rate and time period using user define function "Interest" and iterative control statement. */
#include <stdio.h>
float s_i (float p1, float r1, float t1)
{
    float si;
    si = (p1 * r1 * t1)/ 100;
    return si;

}
int main ()
{
    float  p1, r1, t1;
    float intrest;
    printf("Enter the principle value:\n");
    scanf("%f", p1);
    printf("Enter the rate:\n");
    scanf("%f", r1);
    printf("Enter the year:\n");
    scanf("%f", &t1);
    intrest = s_i(p1, r1, t1);
    printf("Simple interest for P1,r1,t1 is:%d\n", intrest);

}