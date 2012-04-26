#include <stdio.h>
#include < stdlib.h>

enum {a,b,c};
enum dir { n,s,e,w }; // now u can create enum vars

void main ()
{
	int x = 5;
	enum dir direction;
	direction = 10;
	x = a;
	printf("x = %d\n", direction);
	printf("the sizeof enum is %d\n",sizeof(enum dir)); // it will size of 1 integer..
	getchar();

}