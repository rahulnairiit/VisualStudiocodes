#include <iostream>


using namespace std;

void printodd(int x, int y){
	for(x; x  <=y ; x++)
	{
		if(x%2 != 0) // INSTead of use find the first odd and keep adding 2 from ter till y is reached ..
			cout<<x<<endl;
	}
getchar();
}

void main()
{
	 printodd(1,100);


}
