#include <iostream>
#include "stack.h"

void push(Stack* s, unsigned int element)
{	
	if (s == NULL)
	{
		s = new Stack;
		s->terms = new Node;
		s->terms->value = element;
		s->terms->next = NULL;
	}
	else if (s->terms == nullptr||s->terms->currSize == 0)
	{
		s->terms = new Node;
		s->terms->value = element;
		s->terms->next = NULL;
	}
	else
	{
		s->terms = Insert(*(s->terms), element);
	}
}

int pop(Stack* s)
{
	if (s == NULL)
	{
		return -1;
	}
	else if (s->terms == NULL)
	{
		s->terms = new Node;
		return -1;
	}
	int num = RemoveNode(s->terms);
	return num;
}

void initStack(Stack* s)
{
	s->terms = NULL;
}

void cleanStack(Stack* s)
{
	delete[](s->terms);
}

bool isEmpty(Stack* s)
{
	if (s->terms == NULL)
	{
		return true;
	}
	return false;
}

bool isFull(Stack* s)
{

	return false;
}
