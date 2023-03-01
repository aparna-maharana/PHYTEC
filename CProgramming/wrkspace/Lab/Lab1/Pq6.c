/* WACP to convert a given integer(in day)to years, months, and days.
assumes that all months have 30 days abd all years have 365 days.*/
#include <stdio.h>
int main ()
{
    int a, y, m, d;
    printf("Enter the number of days: ");
    scanf( "%d", &a);
    y = a/365;
    m = (a-(y*365))/30;
    d = (a-(y*365))-(m*30);
    printf("Years: %d\n", y);
    printf("Months: %d\n",m);
    printf("Days: %d\n", d);
    return 0;
}