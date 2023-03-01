/* C program to check wheather a number is an alphabet or not */
#include <stdio.h>
int main()
{
   char c;
   printf("Enter a character: ");
   scanf("%c", &c);
   if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
   {
    printf("Number is an alphabet %c", c);
   } 
   else
   {
    printf("Number is not an alphabet %c", c);
   }
   return 0;
}