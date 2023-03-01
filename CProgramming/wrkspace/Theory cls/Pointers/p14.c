#include <stdio.h>
int main(int argc, char *argv[])
{
    int i, n, sum=0, count;
    for(i=1; i<argc; i++)
    {
        sscanf(argv[i], "%d", &n);
        sum = sum+n;
    }
    printf("Sum is: %d\n", sum);
    printf("%s\n", argv[0]);
    printf("%d\n", argc);
    printf("%d", argv[1]);
    for(i=1; i<argv[i]; i++)
    {
        count++;
    
    }
    printf("%d", count);

}