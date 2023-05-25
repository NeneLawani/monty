#include "monty.h"

/**
 * pint - a function which prints the value at the top of the stack, followed
 * by a new line
 * @stack: a double pointer to the stack linked list
 * @line_number: the line number in the file
 */

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *hold;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		hold = *stack;
		printf("%d\n", hold->n);
	}
}
