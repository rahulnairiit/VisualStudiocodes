#include <stdio.h>
#include <stdlib.h>

void main()
{
	unsigned int x = 0x0C7E;
unsigned short  bytes[3];
unsigned short  byte;
char arr[4] = { '0'};
byte = (x >> 0);
bytes[0] = (x >> 0)  & 0xFF;
bytes[1] = (x >> 8)  & 0xFF;
bytes[2] = (x >> 16) & 0xFF;
printf("%d \n ",bytes[0]);

printf("the ascii val of a is %c",'A');
sprintf(arr, "%x",0xE);
printf("the dec num is %c\n",arr[0]);

}