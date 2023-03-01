/* Write a program to calculate the sum of the digits of a 3-digit number which is entered from keyboard
Input - 132
Output - 6 */
#include <stdio.h>
int main()
{
    int n, a, b, s;
    printf("Enter a 3 digit number:\n");
    scanf("%d", &n);
    a = n%10;
    s = a;
    b = (n/10)%10;
    s = a + b;
    printf("Sum of the digits of a 3-digit number is:\n", s);
    return 0;
}




}