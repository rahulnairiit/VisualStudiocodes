/*
Write an efficient function in C# that deletes characters from a string. Use the prototype 

string removeChars( string str, string remove );
where any character existing in remove must be deleted from str. For example, given a str of “Battle of the Vowels: Hawaii vs. Grozny” and a remove of “aeiou”, the function should transform str to “Bttl f th Vwls: Hw vs. Grzny”. Justify any design decisions you make and discuss the efficiency of your solution. 
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

string remchars(string orig, string remove)
{
	//it can be done with arrays but using hash
	map<char,int> remhash;
	for(unsigned int i = 0; i < remove.length(); i++)
	{
		//cout<<remove[i]<<endl;
		//populate hash
		remhash[remove[i]] = 1;

	}
	remhash[1].
	int destref = 0;
	for(unsigned int i = 0; i < orig.length();)
	{
		if(remhash.find(orig[i])!= remhash.end())
		{
			cout<<orig[i]<<"  present in hash"<<endl;
			i++;
			cout<<"i is "<<i<<" and dest is "<<destref<<endl;
			continue;
		}
		orig[destref] = orig[i];
		destref++;
		i++;

	}
	orig[destref] = '\0';
	return string(orig,0,destref);


}
int main()
{

	string original = "hello world";
	string remove = "orl";
	string modified;

	modified = remchars(original,remove);

	cout<<"modified string is "<<modified<<endl;
	getchar();
	return 0;


}