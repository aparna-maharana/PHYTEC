#include <stdio.h>
int main()
{
    int a, b, c, d;
    a = 4>5 && 5>4;
    printf("value of a:%d\n",a);
    b = 4>5 || 5>4;
    printf("Value of b:%d\n",b);
    c = (232+23*1233) || 0;
    printf("Value of c:%d\n",c);
    d  = (232+23*1233) && 0;
    printf("Value of d:%d\n",d);
    return 0;
}