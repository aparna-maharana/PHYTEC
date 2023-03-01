/* WACP to reverse an array */
#include <stdio.h>
int main()
{
    int a, f, i, j;
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
    int temp=0;
    int length = sizeof (array)/ sizeof(array[0]);
    for (i=0; i<length; i++)
    printf("%d", array[i]);
    printf("Elements of array before sorting");
    for (i=0; i<length; i++)
    {
        for (j=0; j<length; j++)
        if(array[i] > array[j])
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    printf("Elements of array after sorting:%d\n", array[i]);
}
