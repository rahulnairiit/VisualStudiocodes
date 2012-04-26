#include <stdio.h>
#include <stdlib.h>

//multiple declaration is no problem
void fun();
void fun();
void main()
{
	char nullstring[] = "";
	char a[] = "asc"; 
	char a1[] = { 'a', 's','f'}; // initializes the array with 3 char but not null at the end..cannot be used for strcpy..or treated as a string
	union temp{

		char x;
		int y;
		double z;
	}uni;

	printf("%s\n",a1);
	printf("the sizeof array is %d\n",sizeof(a));
	printf("the sizeof array is %d\n",sizeof(a1));
	printf("siz of union temp is %d\n",sizeof(union temp));
	printf("siz of union temp is %d\n",sizeof(uni));

	uni.x ='k';

	printf("siz of union temp is %d\n",sizeof(union temp));
	printf("siz of union temp is %d\n",sizeof(uni));

	printf("size of nullstring is %d\n",sizeof(nullstring));

	getchar();

}

void fun()
{
}