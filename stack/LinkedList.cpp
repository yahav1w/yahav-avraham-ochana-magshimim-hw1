#include <iostream>
#include "LinkedList.h"

Node* Insert(Node list, int value)
{
	if (list.currSize == 0)
	{
		list.value = value;
		return &list;
	}
	else
	{
		Node* newFirst = new Node;
		newFirst->value = value;
		newFirst->next = &list;
		return newFirst;
	}
}

Node* Remove(Node* list)
{
	if (list->currSize == 0||list == NULL)
	{
		return NULL;
	}
	Node* newFirst = list;
	list = list->next;
	if (newFirst)
	{
		delete(newFirst);
	}							
	return list;
}
void init(Node* list)
{
	list->currSize = 0;
	list->next = NULL;
	list->value = 0;
}

