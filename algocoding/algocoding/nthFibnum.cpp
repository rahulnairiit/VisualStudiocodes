#include <iostream>
using namespace std;

int fib(int n)
{
	
	if(n == 0) 
		return 0;
	else if ( n < 2)
		return 1;

	return fib(n-1) + fib (n -2);

}
int main()
{
	int x;
	int y;
	while(1)
	{
	cout<<"enter the num"<<endl;
	cin>>x;

	
		y = fib(x);
		
	cout<<"the " <<x<<"th fib num is "<<y<<endl;;
	}
	getchar();
	getchar();


}