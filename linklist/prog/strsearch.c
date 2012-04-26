#include <stdio.h>
#include <stdlib.h>

int main()
{

	char * string1 = "aaaababcdefg";



	strsearch(string1, "fg");

	getchar();

	return 1;

}

int strsearch( char * string1,  char * search)
{
	int m, n,i=0,j=0,k;


	m = strlen (string1);
	n = strlen(search);

	for( i ; i < m ;i ++)
	{
		if(i == 5)
			i=i;

		for( j = 0,k=i; search[j] == string1[k]; )
		{
			j++; k++;
			if ( j >= n)
			{
				printf("substrng found \n");
				return 1;
			}
		}

		

	}
	return 1;

}