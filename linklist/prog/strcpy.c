#include <stdio.h>
#include <stdlib.h>
void strcpy(char **  dest, char * const src);
int main()
{
	char * src ="hello";
	char * dest = NULL;

	strcpy1(&dest,src);
	printf("the dest is %s\n",dest);
	getchar();
	return 1;
}

//in this the destination is allocated mem in the fun itself .. notice the use of pointer to pointer

void strcpy1(char **  dest,const  char *  src)
{
	int n = strlen(src) + 1;
	char * trav_p = NULL;

	(*dest) = (char*) malloc(sizeof(char)*n);
	trav_p  = *dest;
	while(*src != NULL)
	{
		*trav_p = *src;
		trav_p++;
		src++;
	}

}