#include "Stack.h"

#include <iostream>'

int main()
{
	Stack* s = new Stack;
	
	initStack(s);
	isEmpty(s);
	push(s, 5);
	push(s, 7);
	pop(s);
	isEmpty(s);
	return 0;
}