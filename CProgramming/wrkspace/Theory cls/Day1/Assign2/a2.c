#include<stdio.h>
int main(int argc, char *argv[])
{
	int i;
	printf("Argument count = %d \n", argc);
	printf("File nameis %s \n", argv[0]);
	for (i=1; i<argc; i++)
	{
		printf("Argument %d is %s \n",i, argv[i]);
	}
}
