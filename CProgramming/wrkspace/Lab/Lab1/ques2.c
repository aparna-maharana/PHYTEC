/*C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches*/

#include <stdio.h>
int main()
{
	int width;
	int height;
	int area;
	int perimeter;
	height = 7;
	width = 5;
	perimeter = 2*(height + width);
	printf("Perimeter of the rectangle is:%d inches\n", perimeter);

	area = height*width;
	printf("Area of the rectangle is:%d square inches\n", area);
        return 0;
}

