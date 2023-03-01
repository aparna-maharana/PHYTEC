#include <stdio.h>
int main()
{
    count();
    count();
    count();
    count();
}
int count()
{
    int count = 0;
    count ++;
    printf("Count value is:%d", count);
    printf("Display the address of count:%d\n",&count);

}