#include <iostream>
#include <iomanip>
using namespace std;


void main ()
{

	int x,y;

	for( x=1; x <=12; x++)
	{
		for( y=1; y<=12; y++)
		{ 
			//cout<<x*y<<" ";  // without formating the out put it looks ugly

			// u can change the foramting of cout by settin flag
			//here 2 flags are used ..one for left padding and other for setting the width of the cout string.
			std::cout<< std::setiosflags ( std::ios_base::left )<< std::setw ( 5 ) << x*y;

		}
		cout<<endl;

	}

	getchar();
}