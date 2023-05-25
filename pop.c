#include "monty.h"

/**
 * pop - a function which removes the top element of the stack
 * @stack: a double pointer to the stack linked list
 * @line_number: the line number in the file
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *hold;

	if (!(*stack))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		hold = *stack;
		(*stack) = (*stack)->next;
		if (*stack)
			(*stack)->prev = NULL;
		free(hold);
	}
}
