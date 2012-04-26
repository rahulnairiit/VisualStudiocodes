#include <stdio.h>
#include <stdlib.h>

int main()
{
	//int x = 0x11223344;
int x = 1;
	int *  p = &x;
	char *  p1 = (char*)p;

	printf("add of p is %d\n and p1 is %d\n",p,p1);
	printf("%d\n", *p1);

	if( (int)(*p1) == 1)
		printf("this is a small endian mac\n");

	//walktru
	//MSB of x is 0 as x is 0001...lsb is 1
	//in a big endian MSB wud be at the lowest add of the num so val of last byte in x shud be 1 and first byte is 0 in this case a
	//in small endian MSB is stored in the highest add ie 0 in last as add decreases and 1 (lsb) in the lowest add ie the first byte..so 1 shud be stored in first byte of x  
	
	
	getchar();
}

