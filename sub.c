#include "monty.h"

/**
 * sub - a function which subtracts the top elements of the stack
 * from the second top element of the stack
 * @stack: a double pointer to the stack linked list
 * @line_number: the line number in the file
 */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *first = *stack;
	stack_t *second = (*stack)->next;
	int result;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		result = second->n - first->n;
		second->n = result;

		(*stack) = second;
		(*stack)->prev = first->prev;
		free(first);
	}
}
