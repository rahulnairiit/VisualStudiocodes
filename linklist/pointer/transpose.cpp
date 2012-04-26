#include <iostream>
using namespace std;

void transpose(int N, int *p){
	int tmp;
	int i,j;
	for(i =0 ; i <N; i++)
	{
	
		for(j=i;j<N;j++)
		{
			tmp = p[i*N + j];
			p[i*N + j ] = p[j*N + i];
			p[j*N + i] = tmp;
			

		}
	}
		

	


}


void printmat(int N, int *p)
{
	int i,j;
	for( i = 0; i< N ; i++)
	{
		for( j=0 ;j <N; j++)
		{	
			cout<<(*p)<<" ";
			p++;
		}
		cout<<endl;
		//p++;

	}

}
int main()
{

	int twodarr[3][3] = { {1,2,3},{4,5,6},{7,8,9}};
	printmat(3,(int *)&twodarr);
	transpose(3,(int*)&twodarr); // u have to type cast .. 
	printmat(3,(int *)&twodarr);
	getchar();


}