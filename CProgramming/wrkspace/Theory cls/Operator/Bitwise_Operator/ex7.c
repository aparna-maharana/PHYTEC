/* Wacp count the no. of ones of a given number*/
#include <stdio.h>
int main()
{
    int num, a, c, b;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (a=7; a>=0; a--)
    {
        b = (num>>a) &0;
        printf("Position:%d\n",a);
        printf("Binary value is:%d\n", b);
    }
    if(b==1);
     {
      c = c+=1;
      printf("Value is:%d\n", c);
     }
    
}