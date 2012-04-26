#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char a;
	long int b;
	short int c;
}structA;



void main()
{
char buf[10] = {'\0'};

	long int x = 15;
	sprintf(buf,"%x",x);
	printf("the bus is %d\n",buf);

	getchar();


}