#include "monty.h"

/**
 * pall - a function which prints all the values on the stack, starting
 * from the top of the stack
 * @stack: a double pointer to the stack linked list
 * @line_number: the line number in the file
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *hold;

	if (*stack)
	{
		hold = *stack;
		while (hold)
		{
			printf("%d\n", hold->n);
			hold = hold->next;
		}
	}
	line_number++;

}
