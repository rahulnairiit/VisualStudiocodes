#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
	int x,y;
	int rem;
	cout<<"enter the 1st num" <<endl;
	cin>>x;
	cout<<"enter the 2nd num" <<endl;
	cin>>y;

	cout<<"gcd is "<< gcd(x,y)<<endl;

	if(x == y)
		cout<<x<<"is the lcm"<<endl;
	else if (x < y)
	{	
		rem = y%x;
		if(rem != 0)
			cout<<rem*x<<"is the LCM"<<endl;
		else
			cout<<y<<"is the LCM"<<endl;

	}
	else
	{
		rem = x%y;
		if(rem != 0)
			cout<<rem*y<<"is the LCM"<<endl;
		else
			cout<<x<<"is the LCM"<<endl;

	}
		
getchar();
getchar();
		return 0;
}
int gcd(int a, int b)
{
	int tmp;
	while(b)
	{
		tmp = b;
		b = b % a;
		a = tmp;

	}
	return a;
}