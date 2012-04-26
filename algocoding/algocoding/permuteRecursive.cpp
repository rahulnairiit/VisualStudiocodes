/*
Implement a function that prints all possible combinations of the characters in a string. 
These combinations range in length from one to the length of the string. Two combinations
that differ only in ordering of their characters are the same combination. In other words,
“12” and “31” are different combinations from the input string “123”, but “21” is the same as “12”. 
*/

#include <iostream>

using namespace std;
void dopermute(char * input,int numofchar, int *used, int level,char* out);
void permutestring(char * input)
{
	int *used = (int*) malloc((strlen(input) + 1)*sizeof(int));
	memset(used,0,strlen(input) + 1);
	
	for(int i =1; i <= strlen(input);i++)
	{
		char * out = (char*) malloc ((i+1)*sizeof(char));
		memset(out,0,(i+1)*sizeof(char));
		memset(used,0,(strlen(input) + 1)*sizeof(int));
		dopermute(input,i,used,0,out);
		free(out);
	}


}

void dopermute(char * input,int numofchar, int *used, int level,char * out)
{
	
	int len = strlen(input);

	if( (level == numofchar) || (level == len)  )
	{	
		
		out[level] = '\0';
		cout<<out<<endl;
		return;
	}
	for(int i = 0; i < len; i++)
	{
		char x = input[i];
		if(used[i] == 1)
			continue;
		else
		{
			out[level] = x;
			used[i] = 1;
			dopermute(input,numofchar,used,level+1,out);
			if( (level == numofchar - 2))
			{
				//so that if abc is already printed then dont free a
				// so we will get abd and adb too not bad or bac which is already printed
			}
			else
			{
				used[i] = 0;
				out[level] = '\0';
			}

		}


	}

}

int main()
{

	char input[] = "abcd";

	permutestring(input);

	getchar();


}

