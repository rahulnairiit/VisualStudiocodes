#include <stdio.h>
#include <stdlib.h>


void substr(const char * str1, char * str2, int pos, int num);
int main ()
{


	char * str1 = "asdfghj";

	char * str2 = (char*)malloc(sizeof(str1) + 1);
	memset(str2,'\0',sizeof(str1) + 1);

	substr(str1,str2,3,3);
	printf(" the substring is %s\n", str2);
	getchar();
	return 0;
}
void  substr(const char * str1, char * str2, int pos, int num)
{	int i =0;
	

	while(str1[pos] != NULL & i < num)
	{
		*str2 = str1[pos]; // or *str2 = *(str1 + pos)
		str2++;
		pos ++;
		i++;
	}

}