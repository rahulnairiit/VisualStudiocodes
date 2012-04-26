#include <iostream>
#include <string>

using namespace std;
// program to check if the string contains unique chars

void main()
{

	string input;
	int arr[200] = {0};
	int asciival;
	int arrd[] = new 
	cout<<"enter the string"<<endl;
	cin>>input;
	for(int i =0 ; i < input.length() ; i++)
	{
		asciival = static_cast<int> (input[i]);
		if( arr[asciival] != 0 )
		{
			cout<<" string has duplicate chars "<<endl;
			getchar();
			getchar();
			return;

		}
		arr[asciival] = 1;
	}
	cout<<"string has unique char"<<endl;

	//converting an ascii value to its respective char..
	char a;
	int x = 113;
	a = static_cast<char>(x);
	cout<<"a is "<<a<<endl;

	///==========================
	void * p = &x;
	//int * y = p;   u cannot assign a void * to any thing in c++ .. possible in C.. u have to cast it with (int*) or static_cast it
	getchar();
	getchar();

	
	

}