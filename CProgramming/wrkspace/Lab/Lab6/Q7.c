/* WACP to calculate the sum of following series using function.
 1 + 1/x + 1/x2 + 1/x3 + 1/x4 */
#include <stdio.h>
#include <math.h>
int sum(int x, int n);
int main()
{
	int n, x, r;
	
	printf("Enter total number of terms: ");
	scanf("%d",&n);
	
	printf("Enter the value of x: ");
	scanf("%d",&x);	
	
	r = sum(x, n);
    printf("Result:%d\n", r);
}

int sum(int x, int n)
{
    int i, t;
    for(i = 1; i<=n; i++)
    t = t + (pow(x, i)/ i );
    return t;
}

