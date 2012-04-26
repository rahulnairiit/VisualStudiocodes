#include <iostream>

using namespace std;

int fibonacci(int );
int fib_rec(int);

void main()
{

	int num;
	int result;
	_Bool h = 1;

	if(h)
		cout<<"boolean exist"<<endl;



	cout<<"enter the num"<<endl;
	cin>>num;

	result = fibonacci(num);
	cout<<"result is "<<result<<endl;

	result =  fib_rec(num);
	cout<<"recrsive result is "<<result<<endl;
	getchar();
	getchar();

}
//1 1 2 3 5 8
int fib_rec(int num)
{
	if( num <= 2)
		return 1;
	else
		return fib_rec(num - 1) + fib_rec(num - 2);
}
int fibonacci(int num)
{
	int x = 1;
	int result = 0;
	int temp;
	if(num <= 2)
		return 1;
	while(num)
	{
		temp = result;
		result = result + x;
		x = temp;
		num--;
	}
	return result;

}