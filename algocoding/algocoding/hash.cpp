#include <iostream>
#include <map>
using namespace std;

//hash with int key and arr[2] as value
map<int,int (*)[2]> hash;

void fun()
{

	int (*p) [2] = hash[2];
	cout<<"count of list1 is "<<(*p)[0]<<endl;
	

	cout<<"count of list2 is "<<(*p)[1]<<endl;
	p = hash[3];

	//===========================================
	void * p1 ;
	char * c;
	char * s= "asd" ;
	//c = (char*) p1 ; // this wont work in C++..u have to use static_cast
	c = static_cast <char*> (p1);
	cout<<"ths size of s is "<<strlen(s)<<endl;//returns the size excluding the null char
}

void main()
{

	
	int arr[2];
	arr[0] = 2;
	arr[1]= 4;
	hash[2] = &arr; /// populate hash key .. hash makes its own copy of value

	cout<<"the size of the hash is "<<hash.size()<<endl;

	
	fun();
	//==============================================
	char arr2[]="asdfg";
	int arr1[1000];
	arr1[arr2[3]] = 9;
	cout<<"arr1['f'] is "<<arr1[arr2[3]]<<endl;

getchar();
}