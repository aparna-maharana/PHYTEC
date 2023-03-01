#include <stdio.h>
#include "Trig.h"
int main()
{
	int p,b,h,x,y,z;
	printf("Enter an input\n");
        scanf("%d%d%d",&p,&b,&h);
	x=sine(p,h);
	y=cose(b,h);
	z=tane(b,h);
	printf("Sin of two numbers:%d\n",x);
	printf("Cos of two numbers:%d\n",y);
	printf("Tan of two numbers:%d\n",z);
	return 0;
}


