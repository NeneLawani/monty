#include "monty.h"
int value;

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
