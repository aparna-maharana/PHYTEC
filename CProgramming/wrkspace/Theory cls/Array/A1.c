/* WACP to get the data from the user and display it in the console */
#include <stdio.h>
int main()
{
    int a[5], i;
    for(i=0; i<5; i++)
    {
        printf("Enter the values for %d\n", i);
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("The values are: %d\n", a[i]);
    }
}