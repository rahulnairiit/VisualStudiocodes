#include <stdio.h>
#include <stdlib.h>

int main()
{
	char * str = "1234";

	int i = atoi(str);
	getchar();
	return 1;

}

int atoi(char * str)
{
	int i =0;
	printf("%c \n", *str);

	if('1' > '2')
		printf("sdasdad");
	while ( (*str != NULL) && (*str) <= '9' && (*str) >= 0)
	{
		printf("str is %c\n",*str);
		i =  i * 10 + (*str - '0');
		str++;

	}
	printf("%d\n",i);
	return 1;
}