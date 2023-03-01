/* Increment the value of an array without using pointer */
#include <stdio.h>
int func(int a[]);
int main()
{
     int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9 };
     int i;
     for(i=0; i<10; i++)
    {

        printf("Value of a before: %d\n", a[i]);
    }
    printf("\n");
    func(a);
}

int func(int a[])
{
    int i;
    for(i=0; i<10; i++)
    {
        a[i] = i + 5;
    }
     for(i=0; i<10; i++)
     {
         printf("Value of a after: %d\n", a[i]);
     }
   
}