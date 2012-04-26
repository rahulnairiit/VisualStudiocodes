#include < stdio.h>
#include <stdlib.h>

int main()
{

	char * p1 = (char*)calloc(sizeof(char)*10,'\0');
	char * p2 = p1 + 2;
	int add_diff ;
	
	
	strcpy(p1,"1234567890");
	printf("the size of p1 is %d\n",strlen(p1));

	printf("p1 is %s\n",p1);
	printf("P2 is %s\n",p2);
	add_diff = p2 - p2;

	printf("the add diff is %d\n",add_diff);
	if(add_diff < strlen(p1))
	{

	}

		getchar();

	return 1;
}