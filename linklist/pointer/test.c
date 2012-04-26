#include <stdio.h>
#include <stdlib.h>

void change(int * p1)
{
	printf("the value of p1 is %d\n ", *p1);
	*p1 = 3;
}
int main()
{
	int * p;
	int x = (1,2+1,66);
	int y = 3;

	p = &x;

	change(p);
	printf("the value is p %d\n ", *p);
	getchar();

	return 1;
}