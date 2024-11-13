#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node
{
	unsigned int value;
	int currSize;
	Node* next;

}Node;

Node* Insert(Node list, int value);
int RemoveNode(Node* list);


#endif /* LINKEDLIST_H */