#include "monty.h"

/**
 * mul - a function which multiplies the top two elements of the stack
 * @stack: a double pointer to the stack linked list
 * @line_number: the line number in the file
 */

void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second, *hold;
	int result, i = 0;

	if (*stack)
	{
		hold = (*stack);
		while (hold)
		{
			i++;
			hold = hold->next;
		}
	}

	if (i < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = (*stack);
		second = (*stack)->next;
		result = first->n * second->n;
		second->n = result;

		(*stack) = second;
		(*stack)->prev = NULL;
		free(first);
	}
}
