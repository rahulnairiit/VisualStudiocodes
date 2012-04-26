/*
 if you need a factorial routine that returns all of
 its intermediate results (factorials less than n), as well as the final result (n!), 
 */
#include <iostream>
using namespace std;


int factOfAllNum(int *fact, int n, int level)
{

	//basecase is when n is 1
	if( n <= 1)
	{
		fact[level] = 1;
	//	cout<<"fact[level] "<<fact[level]<<endl;
		return 1;

	}
	else
	{
		fact[level] = n * factOfAllNum(fact, n-1,level+1);
		cout<<"fact[level] "<<fact[level]<<endl;
		return fact[level];

	}

}

int * wrapperFun(int num)
{
	int * factallnum =static_cast <int*> (new int [num*sizeof(int)]  );


	factOfAllNum(factallnum,num,0);
	return factallnum;

}

int main()
{

	int num = 3;
	int * factallnum;
	factallnum= wrapperFun(3);
	--num;
	int i = num;
	num--;
	while(num >= 0)
	{
		cout<<"fact of "<<num<<" is "<<factallnum[num-i]<<endl;
		i++;
		num--;
	}
	getchar();

}