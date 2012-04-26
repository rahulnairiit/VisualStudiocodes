#include <stdio.h>
#include <stdlib.h>

char * fun(){

	char * p = "hello";
	return p;
}
char *myfunc() { char *temp = "string"; return temp; }
//int main() { puts(myfunc()); 
//getchar();
//}
int main()
{
	char * p = myfunc();
	int intarr[2]= {1,2};
	int len;
	len = (sizeof(intarr)/sizeof(intarr[0]));
	fun();


printf("the len of arry is %d\n", len);
	printf("the static pointer to a literal has value %s\n", p);
	getchar();
	

}