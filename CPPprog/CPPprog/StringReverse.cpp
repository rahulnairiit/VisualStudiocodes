#include <iostream>
#include <string>

using namespace std;

void revString(string & orig);
void main()
{
	string orig;
	cout<<"enter the string to be reversed "<<endl;
	//cin>>orig;
	getline(cin,orig);
	cout<<orig<<endl;
	

	int strlength = orig.length();
	
	cout<<"length is "<<strlength<<endl;
	getchar();
	getchar();
	for(strlength--; strlength>=0 ; strlength--)
	{
		cout<<orig[strlength];

	}
	getchar();
	cout<<"+++++++++++++++++++++"<<endl;
	revString(orig);
	cout<<orig<<endl;
	getchar();



}
//this function is goin to reverse the original string. basically mirror it from middle..
void revString(string & orig)
{
	int len = orig.length();

	//now index is from 0 to len - 1 so do len -1 first
	len--;
	for( int i =0; i <= len/2; i ++)
	{
		char temp = orig[i];
		orig[i] = orig[len - i];
		orig[len - i] = temp;
	}
	
}