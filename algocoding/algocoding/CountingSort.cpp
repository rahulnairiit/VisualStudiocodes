#include <iostream>

using namespace std;


// Input of n integers which fall in the range of 0 to k..
// we can efficiently use cout sort wen k is O(n)
void countsort(int * ,int * , int , int );
void main()
{
	int i;
	int inpta[10] = { 1,2,3,7,2,9,2,6,1,5 };
	int outpta[10] = { 0 };
	cout<< " input arr is "<<inpta<<endl;

	
	countsort(inpta,outpta,10,9);
	//for( i = 0 ; i < 10; i++ )
	//{
	//	cout<<outpta[i];

	//}

	getchar();
}

void countsort(int inpta[],int outa[], int count, int range)
{
	int n = count;
	int i;
	int * tempCounta ;
	tempCounta =(int*) calloc(range,sizeof(int));
	//cout<<inpta<<endl;
	for( i = 0 ; i < 10; i++ )
	{
		cout<<inpta[i];

	}

	cout<<"s0000000000000"<<endl;
	for( i=0; i<range; i++) // initialize the count array
	{
		tempCounta[i] = 0;

	}
	for( i = 0; i<n; i++ ) // set the count of each number appearing in the input
	{
		tempCounta[inpta[i]] = tempCounta[inpta[i]] + 1;
		cout << " i is "<<i<< "and inpta[i] is "<<inpta[i]<<endl;
	}

	for( i = 0 ; i < 10; i++ )
	{
		cout<<tempCounta[i];

	}
	cout<<"s0000000000000"<<endl;

	//Now for each number in the tempCounta update the value to number of 
	// elements less than or equal to that number

	for( i =0; i< range; i++ )
	{
		
		if(i == 0 )
		{
			tempCounta[i] = tempCounta[i] ;;
		}
		else
			tempCounta[i] = tempCounta[i] + tempCounta[i - 1];

	}
	cout<<endl;
	for( i = 0 ; i < range; i++ )
	{
		cout<<tempCounta[i];

	}
	//Now start populating the output array
	for( i = 10; i >= 1; i--)
	{
		outa[tempCounta[inpta[i]]]= inpta[i];
		tempCounta[inpta[i]] = tempCounta[inpta[i]] - 1;
	}

	for(i = 0 ; i < n; i++  )
	{
		cout<<outa[i];

	}
	//cout<<outa<<endl;

}