#include <stdio.h>
int main()
{
    int a, i, odd=0;
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
    for (i=0; i<a; i++)
    
    if((array[i]%2 )!= 0)
    {
    printf("Odd numbers are: %d\n",array[i]);
    }
}