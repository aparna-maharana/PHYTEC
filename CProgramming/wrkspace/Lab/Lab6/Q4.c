/* design two functions area & perimeter which will return area and perimeter of a rectangle.*/
#include <stdio.h>
int area(int x, int y);
int peri(int x, int y);
int main()
{
    int a, p, n1, n2;
    printf("Enter two numbers:\n");
    scanf("%d%d\n", &n1, &n2);
    a = area(n1, n2);
    printf("Area:%d\n", a);
    p = peri(n1, n2);
    printf("Perimeter:%d\n", p);
}

int area(int x, int y)
{
    return x*y;
}
int peri(int x, int y)
{
    return 2*(x+y);
}