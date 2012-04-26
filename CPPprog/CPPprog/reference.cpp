#include <iostream>

using namespace std;


void main()
{
	int x = 2;
	/// int &y;  references must be initialized
	int &y = x;
	///int &ref = 6;  this wont wrk
	const int &ref = 6;  // this will wrk.. compiler will allocate storage,ini it to 6 and tie the ref to the location
	char *k = "hello";
	char * &z = k;
	cout<<y<<endl;
	cout<<k<<endl;
	getchar();

}