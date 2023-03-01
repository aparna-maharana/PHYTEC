/* WACP power ON the given bit to high */
#include <stdio.h>
int main()
{
    int num, a, b;
    printf("Enter a number:\n");
    scanf("%d",num);
    for (a=7; a>=0; a--)
    {    
    b = num &1 a;
    printf("Power On\n",b);
    c = num |1 a;
    printf("Power Off\n",c);
    }
}