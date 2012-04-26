#include <stdio.h>
#include <stdlib.h>

struct ListNode{
	int value;
	struct ListNode * next;
};

typedef struct ListNode Node;

Node * Head_p = NULL;
int add_sorted(Node * newnode, Node ** head)
{
	Node * current = (*head);
	//if it is the first node
	if(*head == NULL || (*head)->value > newnode->value)
	{
		
		newnode->next = *head;
		*head = newnode;
		return 1;

	}
	
	while(current->next != NULL & current->next->value < newnode->value)
	{
		current = current->next;
	}
	newnode->next = current->next;
	current->next = newnode;

	return 1;
}
int add_to_list(Node * node, Node ** head)
{
	Node * temp_p;
	if( NULL == Head_p)
	{
		Head_p = node;
		Head_p->next = NULL;
		return 1;
	}
	temp_p = Head_p;
	while(temp_p->next != NULL)
	{
		temp_p = temp_p->next;

	}
	temp_p->next = node;
	node->next = NULL;
	return 1;
}

int print_List(Node * node_p)
{
	while(node_p != NULL)
	{
		printf("%d\n", node_p->value);
		node_p = node_p->next;
	}

	return 1;
}

int delete_node(Node * node_p)
{

	return 1;
}


void copylist(Node * orignode, Node ** cpy)
{
	if( orignode != NULL )
	{
		(*cpy) = (Node*) malloc (sizeof (orignode));
		(*cpy)->value = orignode->value;
		orignode = orignode->next;
		copylist(orignode,&((*cpy)->next));
	}
	else
		(*cpy) = NULL;
}

void read_backward(Node * node)
{
	if( node->next != NULL)
	{
		read_backward(node->next);
	}
	printf("%d\n ",node->value);

}
int main ( )
{

	Node * node_p;
	Node * list2;
	char choice = 'y';
	int value;
	while ( 'y' == choice )
	{	
		node_p = (Node*) malloc (sizeof(Node));
		printf("Enter the value\n");
		scanf("%d",&value);
		node_p->value = value;
		node_p->next = NULL;

		add_to_list(node_p,&Head_p);
		printf("Do u want to continue\n");
		fflush(stdin);
		scanf("%c",&choice);
		printf("%c\n",choice);

	}
	print_List(Head_p);
	copylist(Head_p,&list2);
	print_List(list2);

	printf("rading backwrd\n");
	read_backward(Head_p);
	fflush(stdin);
	getchar();

	return 1;
}

