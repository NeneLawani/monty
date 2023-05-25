#include "monty.h"

/**
 * swap - a function which swaps the top two elements of the stack
 * @stack: a double pointer to the stack linked list
 * @line_number: the line number in the file
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *first = *stack;
	stack_t *second = (*stack)->next;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		first->next = second->next;
		first->prev = second;

		second->next = first;
		second->prev = (*stack)->prev;

		if (first->next != NULL)
			first->next->prev = first;

		*stack = second;
	}
}
