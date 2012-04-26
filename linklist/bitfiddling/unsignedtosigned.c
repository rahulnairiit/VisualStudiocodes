#include < stdio.h>
#include <stdlib.h>

void fun();
void fun1();
void fun3();
void main()
{


	unsigned int x = 1;
	signed int y = -20;
	unsigned int z = x + y; // here y will be converted to unsigned using y = (UINTMAX + 1) + (value of y ie -2)  //result in huge value
	//if y was -1 then y will after conversion becum UINTMAX(0xffffffff) and when this is added to x it over flows and z value becomes 0;
	printf("%d\n",y);
	printf("%u\n",z);
	fun3();
	fun();
	fun1();

	getchar();

}
void fun1()
{
	signed int x = 2;
	signed int y = -2; // this is stored as 2's compliment in y ..ie 4294967294.. ie 2^32 - 2 
	/*
	The two's complement of a binary number is defined as the value obtained by subtracting the number
	from a large power of two (specifically, from 2N for an N-bit two's complement). The two's complement 
	of the number then behaves like the negative of the original number in most arithmetic, and it
	can coexist with positive numbers in a natural way.
	*/
	getchar();
}
void fun()
{
	unsigned short int x ;
	signed short int y;
	printf("size of unsgned short is %d\n", sizeof(x)); // is 2 so that mean 16 bits.. tat means max value is 2^16 -1 = 65535
	x = 65537; // for unsigned int , integer overflow will be reduced to mod of 2 ==> 65537 mod 2 = 1;
	y = 65538; //this is undefined.. for signed int overflow is undefined
	printf("the val of x is %d\n", x);

}
void fun3()
{
	char buf[20] = {'0'};
    signed int a=-5;
    unsigned int b=-5;
	sprintf(buf,"%d%d",1,65534);
	printf("the value of b is %u\n",b);
    if(a==b)
         printf("same");
    else
         printf("diff");
    return 0;
}
