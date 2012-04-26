#include <stdio.h>
#include <stdlib.h>

struct listNode {
	void * node;
	struct listNode * next;
};
typedef struct listNode listNode;
listNode * Head = NULL;

//generic data cane be anything
struct data{
	int x;
	char y;
};
struct data data_array[3] = { {1,'a'}, {2,'b'}, {3,'c'} };

//Add to link list.. a generic fun to add any data type

int add_to_list(void * node) // the prob with this fun is it doesnt accept sizeof data as argu
							 // also is using a global head pointer which means only one list can exists
{
	struct data * tmp; //debug
	if(NULL == Head)
	{
		
		Head = (listNode*) malloc (sizeof(listNode) );
		//at this point ter is no mem allocation to store data of node in listNode
		//So either we can allocate mem for size of node passed and assign it to node pointer and copy the data to it
		//or if the node passed has global lifespan then just copy the pointer
		//i think safest is the link list lib to have its own allocation.
		Head->node = (struct data*) malloc (sizeof(struct data));
		memcpy(Head->node,node,sizeof(struct data));
		Head->next = NULL;
		tmp = (struct data*) Head->node;
		printf("%d \n",tmp->x);
		
	}
	else
	{	
		listNode * p = (listNode*) malloc (sizeof(listNode) );
		p->next=Head;
		Head = p;
		p->node = (struct data*) malloc (sizeof(struct data));
		memcpy(Head->node,node,sizeof(struct data));
		tmp = (struct data*) Head->node;
		printf("%d \n",tmp->x);
	}
	return 1;
}

int print_List(listNode* listnode, void (* fp)(void *))
{
	//printf("%d and %c \n",listnode->node->x,listnode->node->y);
	while(listnode != NULL)
	{
		(*fp)(listnode->node);
		listnode = listnode->next;
	}

	return 1;
}
void print_data(struct data * node)
{
	printf("%d and %c \n",node->x,node->y);
	getchar();

}
int main()
{
	add_to_list(&data_array[0]);
	add_to_list(&data_array[1]);

	print_List(Head,&print_data);

	return 1;

}