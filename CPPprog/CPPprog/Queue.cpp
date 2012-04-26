#include <iostream>

using namespace std;
//FIFO
class Node {
	public:
	int data;
	Node * next;
	Node * prev;  // shudnt have used prev.. maintain head and change tail while adding node.. deq from head ..
					// here i have done it ulta..
	Node ()
	{
		data = 0;
		next = NULL;
		prev = NULL;
	};
	Node(Node& item)
	{
		data = item.data;
		next = item.next;
		prev = item.prev;

	}
};

class Queue{

	Node * first, *last;

public:
	Queue(Node * nfirst = NULL, Node * nlast = NULL) : first(nfirst), last(nlast){}

	
	void addnode(Node& item)
	{
		Node * newnode = new Node(item);
		if(first == NULL)
		{
			first = newnode;
			last = newnode;

		}
		else
		{
			Node * temp = first;
			first = newnode;
			newnode->next = temp;
			temp->prev = first;
		}

	}

	

	Node& dequeue()
	{
		Node  temp;

		
		if(last->prev != NULL)
		{
			temp.data = last->data;
			temp.next = NULL;
			temp.prev = NULL;
			last = last->prev;
			delete  last->next;
			last->next = NULL;

		}
		else
		{
			temp.data = last->data;
			first = NULL;
			last = NULL;
			

		}
		return temp;

	}


};


void main()
{
	Queue Q1;
	Node item;
	item.data = 1;
	Q1.addnode(item);
		item.data = 2;
	Q1.addnode(item);
	Node item2 = Q1.dequeue();
	cout<<"item is "<<item2.data<<endl;
	item2 = Q1.dequeue();
	cout<<"item is "<<item2.data<<endl;

	getchar();
}