/* Suppose i have a 8bit register and each bit is connected to led 
let register be REG_LED= 11100000, Here 1 shows led is turn ON and 0 shows led is turn OFF.
What the value of register REG_LED to turn ON the led connected to bit position 2 without affecting other LEDs*/
#include <stdio.h>
int main()
{
    int a, i, c;
    a = 227;
    printf("the binary value of a is:%d\n",a);
    for(int i=7;i>=0;i--)
    {
    c = (a<<i) &1;
    printf("%d\n", c);
    }
    a = a|(1<<2);
    printf("value is:%d\n", a);
    return 0;
    
}

