#include < stdio.h>
#include < stdlib.h>

void toupper(const char * src, char * dest);

int main()
{

	char * x = "asd";
	char * y = (char*) calloc (sizeof(char) , 10);

	//##############  A ==> 65
	//##########      a ==> 97   ==> 97 -65 = 32
	//y = y - 32;
	toupper(x,y);
	printf("dest is  %s\n",y);

	getchar();
	return 0;
}

void toupper(const char * src, char * dest)
{
	int i = strlen(src);
	while(*src != NULL &&  (*src >= 'a' && *src <= 'z') )
	
	{	
		if(*src >= 'A' && *src <= 'Z') 
		{
			continue;
		}
		*dest++=*src++ - 32;
		i--;
	}
	if(i != 0)
		dest = NULL;
}