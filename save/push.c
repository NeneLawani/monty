#include "monty.h"
int value;

/**
 * push - a function which pushes an element to the stack
 * @stack: a double pointer to the stack linked list
 * @line_number: the line number in the file
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *hold;

	hold = malloc(sizeof(stack_t));

	if (!hold)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	if (*stack)
		(*stack)->prev = hold;
	hold->n = value;
	hold->next = *stack;
	hold->prev = NULL;
	*stack = hold;
	line_number++;
}
