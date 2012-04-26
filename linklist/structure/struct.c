#include <stdio.h>
#include <stdlib.h>


void main()
{

	struct temp{

		char a;
	}t;

	struct temp1{

		char a;
		short int z;
	}t1;
	
	struct temp2{

		char a;
		int z;
	}t2;

	struct temp3{

		char a;
		int z;
		double d;
		char s;
	}t3;


//u can see the bit padding effect on sizes 
	//this is done so that array of structs can in proper alignmnet in memory for efficiency
	/* Data alignment means putting the data at a memory offset equal to some multiple of 
	the word size, which increases the system's performance due to the way the CPU handles memory */

	printf("the size of t is %d\n",sizeof(struct temp));
	printf("the size of t1 is %d\n",sizeof(struct temp1));
	printf("the size of t2 is %d\n",sizeof(struct temp2));
	printf("the size of t3 is %d\n",sizeof(struct temp3));

	getchar();
}