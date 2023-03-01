#include <stdio.h>
int main()
{
    int a, i, s=0, avg;
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
    for(i=0; i<a; i++)
    {
        s = s+ array[i];
    }
    int g=array[0], l=array[a];
    printf("Sum of array elements:%d\n", s);
    for(i=0; i<a; i++)
    {
        avg = s/2;
    }
    printf("Average of array elements:%d\n", avg);
    for(i=0; i<a; i++)
    {
        if(array[i]>g)
        {
        g = array[i];
        }
    }
    printf("The greatest element of array:%d\n", g);
    for(i=0; i<a; i++)
    {
        if(array[i]<l)
        {
        l = array[i];
        }
    }
    printf("The smallest number of array:%d\n",l);
}