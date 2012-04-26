/* input : 2 list 
 output : unique in list 1 , unique in list 2 and common in both the list :/
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fun ( int * const list1, int * const list2)
{

	vector<int> vlist1(list1,list1+5);
	vector<int> vlist2(list2,list2+5);
	vector<int>::iterator iter1, iter2;
	cout<<vlist1.size()<<endl;
	
	sort(vlist1.begin(),vlist1.end());
	sort(vlist2.begin(),vlist2.end());
	for(iter1=vlist1.begin(); iter1 != vlist1.end(); iter1++)
		cout<<*(iter1)<<endl;

	for(iter1=vlist1.begin(),iter2=vlist2.begin();iter1 != vlist1.end() | iter2 != vlist2.end(); )
	{

		if(*(iter1) == *(iter2) )
		{
			cout<<"Common :"<<*(iter1)<<endl;
			iter1++;
			iter2++;
		}
		else if(*(iter1) < *(iter2))
		{//since list2 is in increasing order .. it will never have this particular value going furthur..
			cout<<"Unique in list1 :"<<*(iter1)<<endl;
			iter1++;
			//iter2 is not incremented so that its value is compared with the next elementin list1
		}
		else
		{
			//in this case this value is greater than current valu in B.. so the values in B is checked 
			// one by one till this val is reached or a val greater than the this is reached..
			// while goin tru the list al the values less than this is unique to B as list is sorted

			for(; iter2 != vlist2.end(); )
			{
				if(*(iter2) < *(iter1) )
				{
					cout<<"unique in list2 :"<<*(iter2)<<endl;
					iter2++;

				}
				else if (*(iter2) == *(iter1) )
				{
					cout<<"common value :" << *(iter1)<<endl;
					iter2++;
					iter1++;

				}
				else
				{
					cout<<"unique in list1 :"<<*(iter1)<<endl;
					iter1++;
					
					break;
				}

			}

		}


	}
	while (iter1 != vlist1.end())
	{
		cout<<"unique in list1 : " << *(iter1)<<endl;
		iter1++;
	}
	while (iter2 != vlist2.end())
	{
		cout<<"unique in list2 : " << *(iter2)<<endl;
		iter2++;
	}

}
void main()
{

	int list1[] = { 1,2,7,3,9};
	int list2[] = { 9,3,4,8,6};
cout<<list1<<endl;
	fun( list1, list2);
	getchar();

}