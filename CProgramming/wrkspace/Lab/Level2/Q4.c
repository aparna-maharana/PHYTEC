/* The total number of students in a class are 45 out of which 25 are boys.
if 80% of the total students secured grade 'A' out of which 15 are boys.
then write a program to calculate the total number of girls getting grade'A'*/
#include <stdio.h>
int main()
{
    int b,g,t;
    printf("Total number of students: 45\n");
    b = 15;
    printf("Number of Boys:%d\n",b);
    t = (45*80/100);
    printf("Students secured A grade:%d\n",t);
    g = t - b;
    printf("Total number of girls:%d\n",g);
}