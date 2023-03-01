/* Write a program to enter the values of two variables 'a' and 'b' from the keyboard
and then check if both the conditions 'a<50' and 'a<b' are true.*/
#include <stdio.h>
int main()
{
 int a,b;
 printf("Enter the first variable: \n");
 scanf("%d\n", &a);
 printf("Enter the second variable:\n");
 scanf("%d\n", &b);
 if(a<50 && a<b)
 printf("Condition is true\n");
 else
 printf("Condition is false\n");
}

