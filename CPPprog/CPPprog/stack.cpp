#include <iostream>

using namespace std;

class Node{
public:
	int data;
	Node * next;

	Node(int item=0, Node * newnode = NULL)
	{
		data = item;
		next = newnode;
	};
};

class stack{

	Node*  top;

public:
	stack()
	{	
		top = NULL;
	}
	void spush( int item)
	{
		
			Node* temp = new Node(item);
			cout<<"pusheddata is "<<temp->data<<endl;
			temp->next = top;
			top = temp;
	}

	const Node pop()
	{
		//cout<<"top is "<<top->data<<endl;
		if(top != NULL)
		{
			Node  ret_temp;
			Node * rem_temp = top;
			ret_temp.data = top->data;
			ret_temp.next = NULL;
			top = top->next;
			delete rem_temp;
			//cout<<"ret val is "<<ret_temp.data<<endl;
			return ret_temp;
		}
		
	}

};


void main()
{

	stack stack1 ;
	stack1.spush(1);
	stack1.spush(2);

	Node temp = stack1.pop();
	cout<<temp.data<<endl;
	temp = stack1.pop();
	cout<<temp.data<<endl;
	getchar();
}