
#include "Stack.h"
#include "Utils.h"
#include <iostream>
using namespace std;


#define NUM_INPUTS 10

/*
a function that reverse the order of the array
nums - the array to reverse
size - the array size
*/
void reverse(int* nums, unsigned int size)
{
	Stack* s = new Stack;
	initStack(s);
	s->terms = new Node;
	for (int i = 0;i < size;i++)
	{
		push(s, nums[i]);
	}
	for (int i = 0;i < size;i++)
	{
		nums[i] = pop(s);
	}
}
/*
a function that reverse the order of 10 inputs from the user
return the new array
*/
int* reverse10()
{
	int* num = new int[10];
	for (int i = 0; i < NUM_INPUTS;i++)
	{
		cin >> num[i];
	}
	reverse(num, NUM_INPUTS);
	return num;
}
