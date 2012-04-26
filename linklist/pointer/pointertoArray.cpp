#include <iostream>
using namespace std;


int main()
{
	int arr[3] = {1,2,3};
	int arrOfarr[2][3] = { {2,3,4},{5,6,7}};
	int * intp ;//pointer to an int
	int (*p)[3]; //pointer to an array of 3 ints
	int (*pi)[2][3]; // pointer to multidimentional array
	
	intp = arr; // arr decays to a pointer to the first elemnet of array like &arr[0]

	cout<<*intp<<endl;
	intp++;   // this will move the pointer to next element in arr..
	cout<<*intp<<endl;
	//============================
	//p = arr; will give error as ur tryin to assign pointer to an int to pointer to an arry of ints..ir arr just decays to int pointer
	p = &arr; // u have to give an arry with 3 ints..if u try an arr with more it will gvie ->cannot convert from 'int (*)[4]' to 'int (*)[3]'
	cout<<*p<<endl; // this will give the add of the array start .. u need to subscript so as to get the value
	cout<<(*p)[0]<<endl;
	p++; //this will make the pointer skip the whole array..ie skip 3 ints.. 
	//pointer to arrray is used to move from array to array.. ie array of arrays..or 2 dimentional arrays..
	//__________________________________________

	//intp = arrOfarr;  //cannot convert from 'int [2][3]' to 'int *
	p = arrOfarr; //this is valid.. this decays to array of 3 ints..
	cout<<(*p)[0]<<endl;
	p++; //jumps to next array of row ..
	cout<<(*p)[0]<<endl;
	//pi = arrOfarr;// is wrong .. int [2][3]' to 'int (*)[2][3]'
	cout<<"arrOfarr is "<<*(*arrOfarr)<<endl;
	pi=&arrOfarr;// here pi represents the whole 2 dimentional array.. 
	cout<<(*pi)[0]<<endl; //prints add of first elemnt in the first row
	cout<<(*pi)<<endl; // print the start add of the 2 d array.. same as above
	cout<<(*pi)[1]<<endl; //print the add of first element in thre 2 nd row..
	cout<<(*pi)[2][2]<<endl; // prints val of 3 ele in 3 nd row



	//int ** ptoptoint = &arr;
	getchar();

}