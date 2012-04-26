#include <stdio.h>
#include <stdlib.h>


int count_setbit(unsigned int x)
{
	unsigned int mask = 0x00000001;
	int count = 0;
	while(mask != 0)
	{
		if(x & mask)
		{
			count ++;
		
			
		}
		
		printf ("the mask is %x\n",mask);
		mask = mask << 1;
	}
	printf (" num of bits set is %d\n",count);
	return 1;

}

int count_evensetbit(unsigned int x)
{

	//assmuning 32 bit int
	// we can and it wit a mask which unsets all the odd bits and then coutn the number of bit set
	int count = 0;
	unsigned int mask = 0x55555555;
	x = x & mask;
	while (x != 0)
	{
		count ++;
		x = x & (x - 1);
	}

	printf(" the of even bits set is %d\n", count);





	return 1;
}

void reverse_num( unsigned int x)
{
	unsigned int temp = 0x0;
	int i;
	printf ("x is %x\n",x);
	for (i = 0 ; i < 31 ;)
	{
		temp |= (x & 0x1);
		x >>= 1;
		temp <<= 1;
		i++;
	}
	
	printf ("temp is %x\n",temp);

}
int main()
{

	int x = 3;
	int y = -5;
	printf("%d\n",sizeof(x));
	
	count_evensetbit(x);
	count_setbit(x);

	//===========
	y >>= 5;
	printf("y after shifting is %d\n ",y);

	reverse_num(0x1);
	getchar();
	return 0;

}