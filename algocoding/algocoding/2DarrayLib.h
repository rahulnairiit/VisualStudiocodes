#include <iostream>


using namespace std;


int ** twoDimArrayCreat(int , int);

void print2darray(int m , int n, int ** arrayP);

int ** twoDimArrayCreat(int m, int n)
{

	int ** twodArrayP = (int **) malloc ( m * (sizeof(int*)));
	for(int i = 0; i< m; i++)
	{
		twodArrayP[i] = (int*) malloc(n * sizeof(int));
	}
	//inti
	for(int i = 0; i < m ; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			twodArrayP [i][j] = 0;
			
		}

	}

	print2darray( m ,  n,twodArrayP);
	getchar();
	getchar();
	return twodArrayP;

}

void print2darray(int m , int n, int ** arrayP)
{
	for ( int i = 0; i < m; i ++)
	{
		for(int j = 0; j < n ; j++)
		{
			cout<<arrayP[i][j]<<" ";
		}
		cout<<endl;

	}

}

