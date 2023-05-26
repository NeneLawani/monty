#include "monty.h"

/**
 * pstr - a function which prints the string, starting at the top of the
 * stack, followed by a new line
 * @stack: a double pointer to the stack linked list
 * @line_number: the line number in the file
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *hold = *stack;

	(void) line_number;

	while (hold)
	{
		value = hold->n;
		if (value <= 0 || value > 127)
			break;
		printf("%c", value);
		hold = hold->next;
	}
	printf("\n");
}
