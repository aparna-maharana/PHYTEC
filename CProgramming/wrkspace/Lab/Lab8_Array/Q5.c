/* C program to read an array of 10 integer and find sum of all even numbers and odd numbers */
#include <stdio.h>
int main()
{
    int a[10], i, even=0, odd=0;
    for(i=0; i<10; i++)
    {
        printf("Enter 10 numbers:");
        scanf("%d", &a[i]);
    }
    for(i=0; i<10; i++)
    {
    if(i%2 == 0)
    {
    even = even + a[i];
    }
    else 
    {
    odd = odd + a[i];
    }

}
printf("Sum of even numbers: %d\n", even);
printf("Sum of odd numbers: %d\n",odd);
}