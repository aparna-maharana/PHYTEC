/* WACP find the length of a string without using library function */
#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    int i, c=0;
    printf("Input the string: ");
    fgets(s, sizeof s, stdin);
    for(i=0; i<s[i]; i++)
    {
        c ++;
    }
    printf("Length of the string is:%d", c);
    return 0;
}