/* Suppose i have a 8bit register and each bit is connected to led let register be REG_LED = 11100011, 
Here 1 shows led is turn ON and 0 shows led is turn OFF. What is the value of register REG_LED to Turn OFF the LED connected to 
bit position 0 and 5 without affecting other LED's*/
#include <stdio.h>
int main()
{
    int num , a, r, i;
    