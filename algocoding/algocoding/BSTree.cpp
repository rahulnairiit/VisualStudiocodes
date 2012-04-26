/* Implementation of BST */

#include <iostream>

using namespace std;

//Node class
//no parent pointer
typedef class bstreenode {

	bstreenode * lchild;
	 bstreenode * rchild;
	int data;

public:
	bstreenode(int data){
		this->data = data;
		this->lchild = NULL;
		this->rchild = NULL;
	};

	
	bstreenode * getlchild(){ return this->lchild; }
	void setlchild(int data){ 
		this->lchild = new bstreenode(data);
	}

	bstreenode * getrchild(){ return this->rchild; }
	void setrchild(int data){ 

		this->rchild = new bstreenode(data);
	}
	int getdata() { return this->data; }

}bstreenode;

// BSTree class
typedef class BSTree{
	bstreenode * root;

public:
	BSTree()
	{
		this->root = NULL;
	}

	void setroot(bstreenode * node ) { this->root = node; }
	bstreenode * getroot() { return this->root; }
	int insertTreeNode(int  data)
	{
		
		if(this->getroot() != NULL )
		{
			insertnode(data,this->root);
		}
		else if ( this->getroot() == NULL )
		{
			bstreenode * node = new bstreenode(data);
			this->setroot(node);
		}
		else
			return -1;

		return 0;

	}
	void insertnode(int data, bstreenode *  treenode)
	{
		if(data <= treenode->getdata())
		{
			if(treenode->getlchild() == NULL)
			{
				treenode->setlchild(data);
			}
			else
				insertnode(data,treenode->getlchild());
		}
		else if( data > treenode->getdata() )
		{
			if(treenode->getrchild() == NULL)
				treenode->setrchild(data);
			else
				insertnode(data,treenode->getrchild());

		}


	}
private:


}bstree;

//fun to populate the BST
void populateBST(bstree * bstreeds)
{
	int data = 1;
	cout<<"enter 0 to exit "<<endl;

	while(1)
	{
		cout<<"enter the data"<<endl;
		cin>>data;
		if(data == 0 )
			break;
		bstreeds->insertTreeNode(data);

	}

}

// fun to do inorder tree walk
// input : root node of tree
void inorder(bstreenode * node);
void inorderTreeWalk( bstree * bstree) // wrapper function
{
	if(bstree->getroot() == NULL )
		cout<< "The Binary search tree is empty!"<<endl;
	else
		inorder(bstree->getroot());

}

void inorder(bstreenode * node)
{
	if(node == NULL)
		return;
	inorder(node->getlchild());
	cout<<node->getdata()<<" ";
	inorder(node->getrchild());

}



//find lowest common ancestor
//input : root node, 2 input data
//output : print the data of LCA and 
//assuming lca can a one of the node itself
void LCA(bstree * bstreeds, int x, int y)
{
	if( x == y )
		cout<<" x is the lowest common anscestor " <<endl;
	//traverse tru the tree till the lowest of x and y is found.. then chek for y


}


int main()
{
	int choice;
	bstree * bstreeds =NULL;
	while(1)
	{
		cout<<"1. Populate BST"<<endl;
		cout<<"2. Inorder Tree walk"<<endl<<endl;

		cout<<"enter the choice "<<endl;
		cin>>choice;

		switch (choice)
		{
		case 1: 
			bstreeds = new bstree();
			populateBST(bstreeds);
			break;
		case 2:
			inorderTreeWalk( bstreeds);
			break;
		default:
			break;

		};


	}

	return 0;
}