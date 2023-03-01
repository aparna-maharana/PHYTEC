/* C program to read an array of 10 integers and find sum of all the integers */
#include <stdio.h>
int main()
{
    int a[10], i;
    for(i=0; i<10; i++)
    {
        printf("Enter the values for %d\n", i);
        scanf("%d", &a[i]);
    }
    for(i=0; i<10; i++)
    {
        printf("The values are: %d\n", a[i]);
    }
}
