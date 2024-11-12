
#include <iostream>
#include "Queue.h"

void initQueue(Queue* q, unsigned int size) 
{
	q->endSize = size;
	q->value = new unsigned int[size];
	q->nowSize = 0;
	for (int i = 0;i < q->endSize;i++)
	{
		q->value[i] = 0;
	}
}

void cleanQueue(Queue* q) 
{
	delete[](q->value);
	delete(q);
	q = NULL;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (q->nowSize != q->endSize)
	{	
		q->value[q->nowSize] = newValue;
		q->nowSize++;
	}
}

int dequeue(Queue* q)
{
	int temp = 0,head = q->value[0];
	q->value[0] = 0;
	for (int i = 0; i < q->nowSize-1 && !isEmpty(q);i++)
	{
		temp = q->value[i+1];
		q->value[i] = temp;
	}
	if (q->nowSize != 0)
	{
		q->nowSize--;
	}
	return head;
}
// return element in top of queue, or -1 if empty

bool isEmpty(Queue* s)
{
	if (s->nowSize == 0||s == NULL)
	{
		return true;
	}
	return false;
}

bool isFull(Queue* s)
{
	if (s->nowSize == s->endSize)
	{
		return true;
	}
	return false;
}

int main()
{


	return 0;
}

