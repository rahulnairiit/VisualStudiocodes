#include <stdio.h>
#include <stdlib.h>

void fun();
void fun4();
void fun6();
void fun7();
	
void fun8();

int main()
{
	char * p ;
	char arr[]= "abcd";
	char d;
	p = arr;
	 fun7();
	printf("%c\n",*p);
	d = *p++;
	printf("%c\n",d);

	fun();
	getchar();

return 1;
}
void fun()
{
int i=1;
    i=2+2*i++;
    printf("%d",i);
    return 0;
}

void fun1()
{


	int x=2,j;
	j = ++x + x++;
	printf("j is %d and x is %d\n",j,x);
	getchar();
}


void fun4()
{

	int x = 4;
	int * y = &x;
	int ** p = &y;

	char * sp = "hello";
	char * spp  = NULL ;
	//strcpy(spp ,"asdas"); cant copy to a dest pointing to null..
	printf("the spp is %s \n",spp);


	

	printf("add of x is %p, add of y is %p and add of p is %p\n",&x,&y,&p);

	printf("the val of p is %p\n",p); // this will print add of y
	printf("the val of *p is %p\n",*p);//will print add of x
	printf("the val of **p is %p\n",**p);//will print val of x
	//sp = "hello";
	printf("%c\n",*sp);
	//*sp = "s" ; // access violation ... writing to a read only mem

}

void fun7()
{
	int x = 5;
	int y = 10;
	int * p = &x;
	int * p1 = &y;
	int z = p1 - p;
	printf(" the diff in add is %d\n",p1 - p);

	fun8();
}
	
void fun8()
{
	int intarr[5] = {'0/'};
	int *ip = &intarr[1];
	int *ip1 = &intarr[2];
	printf(" the diff in pointers to array  is %d\n",ip1 - ip);

}
void fun6()
{

	int * pNull = NULL;
	char * charpNull = NULL;
	int *p = (int *) 0;
	int a = (int)(p + 1); // p contains 0 and plus means 4 is added in case of int ,,so value of a be come 4
	printf (" the add of p is %p\n",&p);
	printf (" the add of pNull is %p\n",&pNull);
	printf (" the add of charpNull is %p\n",&charpNull); 
	// add of diff types of null pointers are diff ie pNull and charpNull has diffrnt values.. but of sam type will be same.. 
	printf (" the fun6 print is %d\n",a);

}