#include <stdio.h>
#include <stdlib.h>
//Double pointer

void main()
{
	int x = 5;
	int *p= &x;
	int *p1 = &x;
	int **p2 = p; // now p2 will contain the value of p which is add of x
	//

	printf("the add of p1 is %x\n",&p);
	printf("the value  of p1 is %x\n",p);
	printf("the value if p2 is %x\n",p2);
	printf("defer of p2 is %d\n",*p2);
	///printf("double defer of p2 is %d\n",**p2); // will cos crash

	p2 = &p1;
	printf("the add of p1 is %x\n",&p1);
	printf("the value  of p1 is %x\n",p1);
	printf("the value if p2 is %x\n",p2);
	printf("defer of p2 is %x\n",*p2);
	printf("double defer of p2 is %d\n",**p2); // will again give value of x


	getchar();


}