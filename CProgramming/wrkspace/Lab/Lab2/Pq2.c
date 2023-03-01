/* WACP that accepts an employee ID, total worked hours of a month and the amount he received per hour.
Print the employee's ID and salary of a particular month. */
#include <stdio.h>
int main() 
{
	char id[10];
	int hour;
	float value, salary;
	printf("Input the Employees ID(Max. 10 chars): ");
	scanf("%s", &id);
	printf("\nInput the working hrs: ");
	scanf("%d", &hour);
	printf("\nSalary amount/hr: ");
	scanf("%f", &value);
	salary = value * hour;
	printf("\nEmployees ID = %s\nSalary = U$ %f\n", id,salary);
	return 0;
}