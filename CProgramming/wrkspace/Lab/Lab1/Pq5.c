/* WACP to read an amount(integer value)and break the amount into smallest possible number of bank notes. */
#include <stdio.h>
int main()
{
    int v, t;
    printf("Input the amount: ");
    scanf("%d", &v);
    v = t/100;
    printf("Notes of 100: %d\n", v);
    t = v-(t*100);
    v = t/50;
    printf("Notes of 50: %d\n", v);
    t = v-(t*50);
    v = t/20;
    printf("Notes of 20: %d\n", v);
    t = v-(t*20);
    v = t/10;
    printf("Notes of 10: %d\n", v);
    t = v-(t*10);
    v = t/5;
    printf("Notes of 5: %d\n", v);
    t = v-(t*5);
    v = t/2;
    printf("Notes of 2: %d\n", v);
    t = v-(t*2);
    printf("Notes of 1: %d\n", v);
    return 0;
}