#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cassert>
using namespace std;

void testcharlimit();
void testwhileloop()
{
	int x = 011;  // octal value of 9
	int y,z;
	y = z = 3,4; //compiler dependnt

	/*while (x++ == 3)  //--x is evaluated and compared with 3, x++ is compared and then its value cahgned in the while ondition itself
		cout<<" x in loop  is "<<x<<endl;*/

	cout<<"x is "<<x<<endl;
	cout<<"the val of z is "<<y<<endl;
	while (5,4,0,9,0) // (5,4,0,9) this loop infinitely // while(5,4,9,0) wont enter loop and it evaluates to 0
		cout<<"loop"<<endl;
	testcharlimit();

}
void testcharlimit()
{
	char c=125;
    do
         printf("%d ",c);
    while(c++);
    printf("%d\n",c);

	int x = 5;
	//assert( x == 4);  asert will fail and prog will abort showing the file and line number
	assert ( x == 5); //assert will be success 
}
void main()
{
	FILE * fp;
	int x;
	char arr[10] = {'\0'};
	printf("the ascii value of a is %d\n",'a');
	getchar();
	fp = fopen("file.txt","r");
	if(fp)
		cout<<"file opended for reading"<<endl;
//carefull when using fscaf
	while(fscanf(fp,"%s %d",arr,&x) != EOF) //u need to know the format of the file ur reading to use this..
								//if the second part in the line is not an integer then fscaf will return an error not EOF 
								//and it wont go to next line too .. resulting an infinite loop and mess up furthur reading

	{
		cout<<arr<<" "<<x<<endl;
	}

	testwhileloop();
getchar();

}