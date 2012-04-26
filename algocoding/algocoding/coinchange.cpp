/*
Given an infinite number of quarters (25 cents), dimes (10 cents),
nickels (5 cents) and pennies (1 cent), write code to calculate the number of ways of representing n cents.
*/
#include <iostream>

using namespace std;
int num;
int change(int sum, int deno)
{
	
		change(sum, deno + deno);
		return deno;

	}
	
}
int numofchange(int sum,int deno)
{
	if(sum < deno)
		return 0;
	else
	{
		change(sum, deno+deno);
		return deno;
	}
	if( change(sum,1) + change(sum,2) == sum)
		num += 1;

	return num;

}
int main()
{
	cout<<"the num of possible way of change is "<<numofchange(5)<<endl;

	getchar();
	

return 0;

}


