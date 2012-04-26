#include <stdio.h>
#include <stdlib.h>

void fun(int * p2, int ** ptop)
{
	printf("============================\n");
	printf("the add of p2 is %p\n", &p2);
	printf("the add of mem pointed by p2 or value of p2 is %p\n\n",p2);
	
	printf("the add of ptop is %p\n", &ptop);
	printf("the add of mem pointed by ptop or value of ptop is %p\n",ptop);

	// u can now modify the value in p1 by derefing the ptop
	*(ptop) = NULL;
	
}
// arrays decays in to pointer in most of the cases

int fun_arr ( int arr [])
{

	printf("the first ele of array is %d\n", arr[0]);
	printf(" the size of the arr is %d\n", sizeof(arr)); // this print out sie of the pointer as compiler passes the pointer to this fun..
	return 1;
}
// int fun_arr2(int (* arr) [2]) or can be decalred as below
int fun_arr2 ( int arr [][2]) // u cannot declare argumnt as int arr [] [] as arr ++ wouldnt be able to jump to next row..
{

	printf("the first ele of array is %d\n", arr[0][0]);
	return 1;
}

int fun_array(int ** *p)
{
	*p=*p++;
	printf("the fun array is %d\n",*p);
	return 1;
}
void ptop()
{

	int x = 8;

	int *p=&x;
	int **p1 = &p;


	printf("==============\n");
	printf("the add of x is of  %p\n",&x);
	printf("the val of *p is %d\n",*p);
	printf("the add of p is %p\n",&p);
	printf("the val of p1 is %p\n",p1);
	printf("the val of *p1 is %p\n",*p1);
	printf("the val of **p1 is %d\n",**p1);


}
int main ()
{


	int x = 4;
	int arr [2]={1,3};
	int arr2 [2][2] = { {3,4},{3,4}};
	int *p4 = &x;
	void *p5 = &x;
	
	int * p1 = &x;
	int temp;
	int * const p = &x;

	ptop();

	fun_array(arr);
	printf("the arr after calling fun_array is %d\n",arr[0]);

	
	//printf(" print the void pointer %d\n",*(p5)); cannot indirect a void pointer

	fun_arr(&arr[0]);
	printf(" the size of the arr in main fun is %d\n", sizeof(arr));
	fun_arr(arr);
	fun_arr2(arr2);
	printf("the add of p1 is %p\n", &p1);
	printf("the add of x is %p\n",&x);
	printf("the add of mem pointed by p1 or value of p1 is %p\n",p1);

	
	 fun ( p1, &p1);
	 printf("the add of mem pointed by p1 or value of p1 is %p\n",p1);
	 printf("==================\n");

	temp = (*p4)++;
	printf(" the new p4 is %d\n",*p4);

	 getchar();
	return 1;

}
