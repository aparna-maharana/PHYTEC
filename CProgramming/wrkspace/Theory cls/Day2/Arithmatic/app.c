#include <stdio.h>
#include "Arith.h"
int main()
{

	int x,y,a,s,m,d,p;
	printf("Enter an input\n");
	scanf("%d%d",&x,&y);
	a=sum(x,y);
	s=sub(x,y);
	m=mul(x,y);
	d=div(x,y);
	p=mod(x,y);
	printf("Addition of two numbe0rs:%d\n",a);
	printf("Subtration of two numbers:%d\n",s);
	printf("Multipication of two numbers:%d\n",m);
	printf("Division of two numbers:%d\n",d);
	printf("Mode of two numbers:%d\n",p);
	printf("Hello i am aparna\n");
	return 0;
}



