/* Check Positive or negative number using Nested if...else. */
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 0)
    {
        if (num == 0)
        {
            printf("you entered a number 0 ");
        }
        else 
        {
            printf("Negative number");
        }
    }
    else 
    {
        printf("Positive number");
    }
    return 0;
}