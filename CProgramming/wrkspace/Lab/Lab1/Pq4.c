/* WACP that accepts two item's weight(floating points values) and number of purchase(floating points values)and calculate the average value of the items.*/
#include <stdio.h>
int main()
{
    int a1, a2, v1, v2, avg;
    printf("No. of item 1: ");
    scanf("%d", &a1);
    printf("No. of item 2: ");
    scanf("%d", &a2);
    printf("weight of item 1: ");
    scanf("%d", &v1);
    printf("weight of item 2: ");
    scanf("%d", &v2);
    avg = ((a1*v1)+(a2*v2))/(v1+v2);
    printf("Avarage value is: %d", avg);
    return 0;
}