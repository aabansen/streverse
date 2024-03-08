#pragma once

#ifndef _STACK_H_
#define _STACK_H_

typedef struct {
	int top;
	unsigned capacity;
	char *array;
} Stack;

Stack *create_stack(unsigned capacity);
int is_full(Stack *stack);
int is_empty(Stack *stack);
void push(Stack *stack, char value);
char pop(Stack *stack);
char peek(Stack *stack);

#endif
