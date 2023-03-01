#include <stdio.h>
int main()
{
    //a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 9;

    printf("a = %d, b = %d\n", a,b);
    printf("a&b = %d, b = %d\n", a&b);
    printf("a|b = %d, b = %d\n", a|b);
    printf("a^b = %d, b = %d\n", a^b);
    printf("~a = %d, b = %d\n", ~a);
    printf("b<<3 = %d, b = %d\n",b<<3);
    printf("b>>2 = %d, b = %d\n",b>>2);
    return 0;

}