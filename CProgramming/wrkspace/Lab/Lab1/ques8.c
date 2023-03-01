/* WACP to print the roots of Bhaskara's formula from the given three floating numbers. Display a message if it is not possible to find the roots.*/

#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, r, s;
	printf("Enter the first number:/n");
	scanf("%f",&a);
	printf("Enter the second number:/n");
	scanf("%f",&b);
	printf("Enter the third number:/n");
	scanf("%f",&c);
	r = (b*b) - (4*(a)*(c));
	s = sqrt(r);
	double x1, x2;
	x1 = (-b + s)/(2*a);
        x2 = (-b - s)/(2*a);
		
        printf("Root1=%lf/n", x1);
	printf("Root2=%lf/n", x2);
}



