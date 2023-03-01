#include <stdio.h>
int main()
{
    int a, c;
    float b;
    a = 10/45*23%45/(45%4*21);
    printf("Value of a:%d\n",a);
    b = 10+5.0*23-45+(4*21.0);
    printf("Value of b:%f\n",b);
    c = 9/4*23%4/(5%4*1);
    printf("Value of c:%d\n",c);
    return 0;

}