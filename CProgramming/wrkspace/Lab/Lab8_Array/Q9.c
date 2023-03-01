/* Read an array of 8 integers ans also read a number to be searched.
If search number is found then print its position 
& if not found then print appropriate message. */
#include <stdio.h>
int main()
{
    int a, n, f, i;
    printf("Enter the size of array: ");
    scanf("%d", &a);
    int array[a];
    printf("Enter the numbers:\n");
    for(i=0; i<a; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=0; i<a; i++)
    {
    printf("%d\t", array[i]);
    }
    printf("Enter the number to be searched:");
    scanf("%d\n", &n);
    for(i=0; i<a; i++)
    {
        if(n == array[i])
        {
        printf("Element%d\n",n);
        printf("Found At Position:%d\n", i);
        f = f + 1;
        }
    }
    if ( f == 0)
    {
        printf("Element not found ");
    }
}