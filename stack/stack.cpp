#include <iostream>
#include "stack.h"

/*
	enter a num into the start of the stack
	s - stack pointer that contains the array of numbers
	element - the element to insert to the start of the list
*/
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
		s->terms = Insert(s->terms, element);
	}
}
/*
	pop out the first integer in the array
	s - stack pointer that contains the array of numbers
	return the number that has been poped out
*/
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
/*
initiaze the stack
s - stack pointer that contains the array of numbers
*/
void initStack(Stack* s)
{
	s->terms = NULL;
}
/*
	clean the variables in the stack
	s - stack pointer that contains the array of numbers
*/
void cleanStack(Stack* s)
{
	delete[](s->terms);
}
/*
	checking if the list is empty
	s - stack pointer that contains the array of numbers
*/
bool isEmpty(Stack* s)
{
	if (s->terms == NULL)
	{
		return true;
	}
	return false;
}
/*
	the function check if the stack is full
	s - stack pointer that contains the array of numbers
	the function that will always return false couse the stack cant be full he is implemented
*/
bool isFull(Stack* s)
{

	return false;
}
