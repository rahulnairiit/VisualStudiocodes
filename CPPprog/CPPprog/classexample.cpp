#include <iostream>

using namespace std;

//default argu
//overloading
//const obj and const function
//static const
//constructor initializer list
//try making public macro variables
//use an inline function .. both inside class def and outside

class test{
	///static int staticint = 3;  // Error only static const can be initialized inside class
	static int staticint;
	int y;
	int k;
	///int x = 1; //only static const integral data members can be initialized within a class
public:
	int z;
	test( int ey = 5);
	void printy();
};

// U HAVE TO INITIALIZE A STATIC member of a class.. it doesnt default to zero
int test::staticint = 1;  // thisis how u initializ the static member
///int test::z = 3;  this cant be done no matter if its public ot private.. u have to access it using object or member funciton.

test::test( int ey)
{
	static int test = 5;
	y = ey;

}

void test::printy()
{
	cout<<" y is "<<y<<endl;
	cout<<"saticint is "<<test::staticint<<endl;
}

void main()
{

	test testObj(4);
	testObj.z = 6;  // valid as it is a public member 
	///testObj.k  = 6;  //Error cannot access private member declared in class 'test'
	testObj.printy();
	getchar();



}