/* WACP to count the number of words in a string */
#include <stdio.h>
#include <string.h>
int main()
{
    char s[]="welcome to yooo hd";
    int i=0,count=0;
    while (s[i]!='\0')
    {
        if (s[i]==' ')
        {
          count++;
        }
           i++;
    }
    printf("%d",count+1);
}