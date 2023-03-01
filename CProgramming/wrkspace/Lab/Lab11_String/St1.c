/* WACP to input a string and print it */
#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    printf("Input the string: ");
    fgets(s, sizeof s, stdin);
    printf("The string you have entered is: %s\n", s);
}