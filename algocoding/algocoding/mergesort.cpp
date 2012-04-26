#include <iostream>
#include <vector>

using namespace std;

void merge (int * arr, int p, int q, int r);
void mergesort(int * arr,int p, int r)
{
	int q;
	if( p < r )
	{
		q = (r + p)/2;
		mergesort(arr,p,q);
		mergesort(arr,q+1,r);
		merge(arr,p,q,r);

	}

}

void merge (int * arr, int p, int q, int r)
{
	//create temp list
	vector <int> L;
	vector <int> R;
	for(int i = p; i <=q; i ++)
	{
		L.push_back(arr[i]);
	}	
	for(int j = q + 1; j <=r ; j ++)
	{
		R.push_back(arr[j]);
	}

	int k = 0;
	int z = 0;
	int i = 0;
	
	while( k < L.size() || z < R.size())
	{
		if( (k < L.size()) && (z < R.size()))
		{
			if(L[k] <= R[z])
			{
				arr[p] = L[k];
				p++;
				k++;
			}
			else
			{
				arr[p] = R[z];
				z++;
				p++;
			}
		}
		else if(k < L.size())
		{
			arr[p] = L[k];
			p++;
			k++;

		}
		else if(z < R.size())
		{
			arr[p] = R[z];
			p++;
			z++;

		}


	}

}

int main()
{
	int arr[5] = { 1,3,4,2,5};
	//int arr[2] = { 3,1};
	mergesort(arr,0,4);
	int i = 0;
	while(i < 5)
	{
		cout<<arr[i]<<endl;
		i++;
	}
	getchar();


	return 0;

}