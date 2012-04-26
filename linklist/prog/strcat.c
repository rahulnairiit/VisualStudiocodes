#include <stdio.h>
#include <stdlib.h>
void strcat(char * str1, const char * str2);
void main()
{
	char * str1 = (char*) calloc(sizeof(char),10);
	char * str2 = "abcd";

	strcpy(str1,str2);

	printf("the str1 b4 cat is %s\n",str1);

	strcat(str1,str2);
	printf("the str1 after cat is %s\n",str1);

	getchar();


}

void strcat(char * str1, const char * str2)
{
	if( *str1 == NULL || *str2 == NULL)
	{
		printf("notthin to concat\n");
		return;
	}

	while( *str1 )
	{
		printf("str1 %c\n",*str1);
			str1++;
	}

	//strcpy(str1,str2);  this will also wrk
	while(  *str2)
		*str1++ = *str2++;


}