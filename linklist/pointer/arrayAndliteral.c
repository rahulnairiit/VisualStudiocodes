#include <stdio.h>
#include <stdlib.h>

void fun(char *arr2){
	arr2[0]='h';
}
void main()
{
	char arr[5] = {'a','s','f','g','\0'};
	char *p ="aaaaa";
	//char array2[15];

	//strcpy(array2,p);

	printf("the size of char array is %d\n",strlen(arr)); //will print 4
	printf("thse size of string literal is %d\n",strlen(p));//will print 5 // NULL is added to  a literal by the compiler but for char array u 
															//u have to put a limit or use propr boundry check
	//so if u want to allocate a char array for storing a string of len 5 ..allocate 6 to accomodate the null terminator

	fun(arr);
	printf("%c\n",arr[0]);
	getchar();


}