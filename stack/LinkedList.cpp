#include <iostream>
#include "LinkedList.h"
/*
	enter a num into the start of the mode list
	list - a pointer to the first node in the list
	value - the value to insert to the start of the list
*/
Node* Insert(Node* list, int value)
{
	if (list->currSize == 0)
	{
		list->value = value;
		return list;
	}
	else
	{
		Node* newFirst = new Node;
		newFirst->value = value;
		newFirst->next = list;
		return newFirst;
	}
}
/*
	remove the first num from the node list
	list - a pointer to the first node in the list
	return the num got removed
*/
int RemoveNode(Node*& list)
{
	if (list->currSize == 0||list == NULL)
	{
		return NULL;
	}
	Node* newFirst = list;
	list = list->next;
	int num = newFirst->value;
	if (newFirst)
	{
		delete(newFirst);
	}							
	return num;
}

