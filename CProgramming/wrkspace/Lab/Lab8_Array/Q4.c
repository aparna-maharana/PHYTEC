#include <stdio.h>
int main()
{
    int a[10], i, s1=0, s2=0;
    for(i=0; i<10; i++)
    {
        printf("Enter 10 numbers:");
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; i++)
    {
       s1 = s1+a[i];
       printf("Sum of first 5 elements:%d\n", s1);
    }
    for (i=5; i<10; i++)
    {
        s2 = s2+a[i];
        printf("Sum of last 5 elements:%d\n", s2);
    }
    if (s1 == s2)
    {
    printf("Sum is equal\n");
    }
    else
    {
        printf("Sum is not equal\n");
    }
    
}
