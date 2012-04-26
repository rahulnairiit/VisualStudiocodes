#include <stdio.h>
#include <stdlib.h>


void main ()
{


	char arr[4] = {0};
	int x=48;
	int y;
	int *p;
	printf("the siz of in is %d\n",sizeof(int));
	sprintf(arr,"%d",x);
	printf("%d\n",arr[0]);
	//printf("the size of arr is %d\n",y);
	y = (int)arr[0];
	printf("y is now d\n",y);
	getchar();


}
