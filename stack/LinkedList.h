#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node
{
	unsigned int value;
	int currSize;
	Node* next;

}Node;

Node* Insert(Node list, int value);
Node* Remove(Node* list);
void init(Node* list);


#endif /* LINKEDLIST_H */