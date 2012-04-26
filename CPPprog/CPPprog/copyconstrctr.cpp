#include <iostream>

using namespace std;


class A {  // with no copy con..

	static int x ;
public:
	A(){
		cout<<"con of A called "<<endl;
		x++;
	}
	void printfun()
	{

		cout<<"the value of x is "<<x<<endl;
	}
	~A(){
		x--;
		cout<<"Destructor of A called and value of x is "<<x<<endl;
	}

};

int A::x = 0;  // u have to initailize a static member like this so that memory will be allocated oter wise linker error

void fun()
{
	 A objA;
	 objA.printfun(); // will print 1
	 A objA1 = objA;	// here bitwise copying happens as in C and construcotr of A is not called..
						// becoz in bit wise copying, A is not treated as a object ..
	 objA1.printfun(); // will print 1 

	 //But when this function exits destrucotor of objA as well objA1 is called as these are both objects ..
	 //which coauses value of x to -1..

}

class B {  //WITH copy con

	static int y;
	
	
public:
	B(const B& cp){
		cout<<"copy con of B called "<<endl;
		y++;
		val = cp.val;
		}; // COPY constructor
	B(){
		cout<<"con of B called "<<endl;
		y++;
	}
	
	void printfun()
	{

		cout<<"the value of y is "<<y<<endl;
	}
	~B(){
		y--;
		cout<<"Destructor of B called and value of y is "<<y<<endl;
	}

	int val;
};

int B::y = 0; 

void fun2()
{
	B objb;
	objb.printfun();
	objb.val= 32;
	B objb2 = objb; // in this line the copy con is called instead of bitwise copy..
					// u have to put wat all login u need inside copy con since no bitwise copyin is done..
					// NOw if u make B(B& ) private then u can never do a object copy like this..
	cout<<" the objb2.val is "<<objb2.val<<endl;
	

}


void main()
 {
	 fun();
	 cout<<"=============================================="<<endl;
	 fun2();
	
	getchar();

 }