/* WACP to separate the individual characters from a string */
#include <stdio.h>
#include <string.h>
int main()
{
    char s[40];
    int i;
    printf("Input the string: ");
    gets(s);
    for(i=0; i<s[i]; i++)
    {
    printf("The characters of the string are:%c\n", s[i]);
    } 
    
}