#include <iostream>
//Question is this

///*
//
//Given a number, print out its roman representation. The roman digits
//that are available and their corresponding values are M = 1000, D =
//500, C = 100, L = 50, X = 10, V = 5 and I = 1.
//The number value of the roman representation is obtained by adding all
//the roman letters so MDI for ex = 1000 + 500 +1 =1501.
// But there are certain restrictions. The roman digits must be order
//from left to right in decreasing order of their value so for ex; M
//will always come before D.
//Those roman digits that are powers of 10 cannot be repeated more than
//thrice. ex: while 30 can be represented as XXX,  40 cannot be
//represented as XXXX.
//Roman digits corresponding to Powers of 10 (I,X and C) can come before
//a higher valued digit in which case the lower digit is subtracted from
//a higher digit.
//ex: IV = 4, XL = 40 (this is the right way to represent 40 as opposed
//to XXXX), CD = 400.
//But they can only precede a digit that is less than 10 times their
//value so while XL is valid (=40), XC is not.
//Digits that are not powers of 10 cannot be repeated. ex: VV is not allowed.
//
//*/
using namespace std;

char romanarr [7] = {'M','D','C','L','X','V','I'};
int numarr [7] = {1000,500,100,50,10,5,1};
char outarr[50] = {'\0'};
void main()
{
	int input;


	cout<<"enter the num"<<endl;
	cin>>input;
	int outindex =0;
	int i =0;
	int num;
	for(i = 0 ; i<7 ; i++)
	{
		if(input<numarr[i])
			continue;
		else if (input <1)
			break;
		else
		{
			num = input/numarr[i];
			input = input%numarr[i];
			if(num<4)
			{
				while(num)
				{
					outarr[outindex] = romanarr[i];
					outindex++;
					num--;
				}

			}
			else
			{
				outarr[outindex] = romanarr[i];
				outindex++;
				outarr[outindex] = romanarr[i-1];
				outindex++;
			}

			cout<<outarr<<endl;
		}
	
	}

	//cout<<input<<endl;
	getchar();
getchar();

}