#include <stdio.h>
#include < stdlib.h>


int fact(int num);
int main()
{

	int num = 4;
	printf("the factorial of num is %d\n",fact(num));

	
	getchar();
	return 1;
}

int fact(int num)
{

	if ( num > 1)
	{
		num = num * fact(num -1);
	}
	return num;
}