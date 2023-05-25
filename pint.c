#include "monty.h"

/**
 * pint - a function which prints the value at the top of the stack, followed
 * by a new line
 * @stack: a double pointer to the stack linked list
 * @line_number: the line number in the file
 */

void pint(stack_t **stack, unsigned int line_number)
{

	if (!(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
