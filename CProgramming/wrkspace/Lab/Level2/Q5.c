/* Write a program to calculate the sum of the first and second last digit of a 5 digit number entered from the keyboard*/
#include <stdio.h>
    int main()
    {
        int a, a1, a2, s;
        printf("Enter a 5 digit number:\n");
        scanf("%d", &a);
        a2 = a%10;
        while (a >= 10)
        {
            a = a/10;
        }
        a1 = a;
        s = a1 + a2;
        printf("Sum of first and second digit number:%d\n", s);
    }