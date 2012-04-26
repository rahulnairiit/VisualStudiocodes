/*
find all permutation of a string using recursion
*/

#include <iostream>
#include <string>


using namespace std;
void swap(char & a, char &b);

void permutate( char* str, int index ); //easy method

//advantage of below methos is that u can modify it to find combinations in a string 3C2 3C1 etc..
//also if the input string has duplicates then we can use this technique to avoid duplicate permutations.. sice we are using a used array
void dopermute(char *inputs, char *outputs,int len, int* used,int level);
void permuteString(char * inputs)
{

	int len = strlen(inputs);
	
	int *used = static_cast <int*> (new int [len + 1]);
	memset(used,0,len*sizeof(int));

	char * outputs =(char*) malloc(strlen(inputs)+ 1);
	memset(outputs,0,strlen(outputs)+1);
	//char outputs[5] = {'\0'};

	dopermute(inputs,outputs,len,used,0);
	



}
//abcd
void dopermute(char *inputs, char *outputs,int len, int* used,int level)
{

	if(level == len)
	{
		outputs[level] = 0;
		cout<<"perm:"<<len<<": "<<outputs<<endl;
		return;
	}
	else
	{
		for(int i = 0; i < len; i++)
		{
			char x = inputs[i];
			if ( used[i] == 1)
				continue;
			else
			{
				outputs[level] = x;
				//cout<<"the output no is "<<outputs<<endl;
				used[i] = 1;
				
				dopermute(inputs,outputs,len,used,level+1);
				used[i] = 0;
				outputs[level]='\0';

			}


		}
	}
	//cout<<outputs<<endl;


}
int main()
{

	char inputstring[] = "aabcd";


	permuteString(inputstring);
	cout<<"++++++++++++++++++++++++++++++"<<endl;
permutate(inputstring,0);
	getchar();

}

//another way without tracking used chars..

void permutate( char* str, int index )
{
    int i = 0;
    if( index == strlen(str) )
    { // We have a permutation so print it
        cout<<str<<endl;
        return;
    }
    for( i = index; i < strlen(str); i++ )
    {
        swap( str[index], str[i] ); // It doesn't matter how you swap.
        permutate( str, index + 1 );
        swap( str[index], str[i] );
    }
} 

void swap(char & a, char &b)
{
	char temp;
	temp = b;
	b = a;
	a = temp;


}