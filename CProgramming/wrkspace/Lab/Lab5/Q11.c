/*C program to check wheather a character is a Vowel or Consonant*/
#include <stdio.h>
int main()
{
    char c, a, e, i, o, u;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    if (c == 'a'| c == 'e' | c == 'i' | c == 'o' | c == 'u')
    {
        printf("Character is a Vowel %c\n", c);
    }
    else
    {
        printf("Character is a consonent %c\n", c);

    }

}
