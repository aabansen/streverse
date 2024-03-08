#include <stdlib.h>
#include "stack.h"

Stack *create_stack(unsigned capacity) 
{
	Stack *stack = (Stack *) malloc(sizeof(Stack));
	stack->capacity = capacity;
	stack->top = -1;
	stack->array = (char *) malloc(sizeof(char) * stack->capacity);

	return stack;
}

int is_full(Stack *stack) 
{
	return stack->top == stack->capacity-1;
}

int is_empty(Stack *stack)
{
	return stack->top == -1;
}

void push(Stack *stack, char value) 
{
	if (is_full(stack)) 
	{
		return;
	}	

	stack->array[++stack->top] = value;
}

char pop(Stack *stack) 
{
	if (is_empty(stack)) 
	{
		return '0';
	}

	return stack->array[stack->top--];
}

char peek(Stack *stack) 
{
	return stack->array[stack->top];
}
