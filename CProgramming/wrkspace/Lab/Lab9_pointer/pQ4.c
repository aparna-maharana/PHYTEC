#include <stdio.h>
int main()
{
    int e;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &e);
    int a[e], *p;
    p=&a;
    for(int i=0; i<e; i++)
    {
        printf("Number of elements:%d\n",i+1);
        scanf("%d", &a[i]);
    }
    for(int i=0; i<e; i++)
    {
        printf("Element-%d:%d\n",i+1, *(p+i));
    
    }
    return 0;
}