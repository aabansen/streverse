#include <stdio.h>
#include <string.h>
#include "stack.h"

int main()
{
	Stack *stack = create_stack(20);
	char input[21];

	printf("Enter str to reverse: ");
	scanf("%20s", input);

	for (int i = 0; i < strlen(input); i++) 
	{
		push(stack, input[i]);	
	}

	while (!is_empty(stack))
	{
		printf("%c", peek(stack));
		pop(stack);
	}

	printf("\n");

	return 0;
}

