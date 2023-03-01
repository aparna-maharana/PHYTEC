#include <stdio.h>
#include <stdarg.h>
int main(int argc, char * argv[])
{
int i, n, sum=0, count;
    for(i=1; i<argc; i++)
    {
        sscanf(argv[i], "%d", &n);
        sum = sum+n;
    }
    if(argc == 3)
    printf()
}