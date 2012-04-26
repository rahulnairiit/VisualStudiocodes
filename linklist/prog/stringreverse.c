#include <stdio.h>
#include <stdlib.h>


void reverse_string(char * str);

void rec_rev(char * str, int i);

void main()
{
int n;
	char str[] = "rahul is great";
n = strlen(str);

	while( n >= 0)
	{
		printf("%c",str[n]);
		--n;
	}
	reverse_string(str);
	printf("\nthe string is %s\n",str);
	rec_rev(str,0);
	printf("\nthe string is %s\n",str);

	getchar();



}

void reverse_string(char * str)
{
	char temp;
	int i;
	int n = strlen (str)- 1;

	for ( i = 0 ; i < (n)/2; i++)
	{
		temp = str[i];
		str[i] = str[n-i];
		str[n-i] = temp;
	}
}

void rec_rev(char * str, int i)
{

	if( i < (strlen(str) - 1) /2)
	{
		i++;
		rec_rev(str,i);
	}
	str[i] = str[strlen(str)-i-1];

}