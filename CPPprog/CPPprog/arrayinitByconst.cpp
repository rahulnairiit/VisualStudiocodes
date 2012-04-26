#include <iostream>


using namespace std;

void main()
{


	const int i = 100;
	int j = i+10;
	int arr[i]; // since compiler knows i is a constant it wont trow error "expected constant expression"
	///int arr2[j]; /// this will trow the error "expected constant expression"
	const int c = cin.get();
	int arr3[c];




}