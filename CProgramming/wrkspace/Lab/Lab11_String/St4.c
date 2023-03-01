/* WACP to print individual characters of string in reverse order. */
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int i, l;
    printf("Input the string: ");
    gets(str);
    l=strlen(str);
    printf("The length of the string is:%d\n",l);
    printf("The characters of the string in reverse are:");
    for(i=l; i>=0; i--)
    {
        printf("%c\n", str[i]);
    }
}