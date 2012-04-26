#include <stdio.h>
#include <stdlib.h>

void main ()
{
	const int x;
	int * p = &x;

	//printf("the add of x is %p and value is %d\n",&x,x);

	*p = 1;

	printf("the add of x is %p and value is %d\n",&x,x);


	getchar();

}