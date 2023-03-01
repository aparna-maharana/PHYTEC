/* Command line argument */
#include <stdio.h>
#include <stdarg.h>
int main(int argc, int *argv[])
{
    int n, i, s=0;
    for(i=0; i<argc; i++)
    {
        sscanf(argv[i],"%d", &n);
        s = s+n;
    }
    printf("Sum is:%d\n", s);
}