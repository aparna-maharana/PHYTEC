/* c program that accepts three intergers and find the maximum of three
 * Test Data:
 * input x1: 25
 * input y1: 35
 * input x2: 35
 * input y2: 10
 */

#include <stdio.h>
int main()
{
	int number1, number2, number3;
	printf("Enter three different numbers: ");
	scanf("%d%d%d", &number1, &number2, &number3);

	if (number1 >= number2 && number1 >= number3)
		printf("The largest number is:%d\n", number1);
	else if (number2 >= number1 && number2 >= number3)
		printf("The largest number is:%d/n", number2);
	else
		printf("the largest number is:%d/n", number3);
	return 0;
}


