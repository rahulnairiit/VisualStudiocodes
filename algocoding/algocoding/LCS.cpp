#include <iostream>
#include "2DarrayLib.h"


using namespace std;

	char str1[10];
	char str2[20];

	int getLCS_recurrsion(int , int );
	int getLCS_dynamic(int m, int n, const char * str1, const char * str2);
	void LCS_init(char * str1, char* str2);
int main()
{	


	cout<<"enter fisrt str "<<endl;
	cin>>str1;
	cout<<"enter 2nd str "<<endl;
	cin>>str2;

	cout<<"first strng is "<<str1<<endl;

	cout<<"the lcs is "<<getLCS_recurrsion(0,0)<<endl;
	LCS_init(str1,str2);

	getchar();
	getchar();


}
int ** tabledata;
void LCS_init(char * str1, char* str2)
{
	int m = strlen(str1); //dont consider the nul char
	int n = strlen(str2);
	tabledata = twoDimArrayCreat(m+1,n+1); //initial zero row
	print2darray(m,n,tabledata);
	getLCS_dynamic(m,n, str1,  str2);
		print2darray(m+1,n+1,tabledata);

}
int getLCS_dynamic(int m, int n, const char * str1, const char * str2)
{
	for(int i=0; i < m ; i ++)
	{
		for(int j = 0; j < n; j++)
		{
			if(str1[i] == str2[j])
			{
				tabledata[1+ i] [1+ j] = tabledata[i][j] + 1;
			}
			else tabledata[1+ i] [1+ j] = max(tabledata[1+i][1+j-1],tabledata[1+i-1][1+j]);
			print2darray(m+1,n+1,tabledata);
			if(i == 1)
				cout<<"brak"<<endl;
		}
	}



	
	return 0;
}

//recursive method of doing the LCS... it forma recursion tree and num of leafs equalent to number of funtion calls
//hgt of the tree is i+j so ..so num of nodes is 2^(i+j) whichs is exponential ..hense slow..

int getLCS_recurrsion(int i, int j)
{
	if((str1[i] == '\0') ||( str2[j] == '\0') )
		return 0;
	if(str1[i] == str2[j])
	{
		return 1 + getLCS_recurrsion(i+1, j+1);
	
	}
	else
	{
		return max(getLCS_recurrsion(i+1,j),getLCS_recurrsion(i,j+1));

	}


}

