#include "monty.h"

/**
 * div - a function which divides the second top element of the stack
 * by the top element of the stack
 * @stack: a double pointer to the stack linked list
 * @line_number: the line number in the file
 */

void div(stack_t **stack, unsigned int line_number)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = (*stack);
		second = (*stack)->next;
			if (first->n == 0)
			{
				fprintf(stderr, "L%d: division by zero\n", line_number);
				exit(EXIT_FAILURE);
			}
			else
			{
				result = second->n / first->n;
				second->n = result;

				(*stack) = second;
				(*stack)->prev = NULL;
				free(first);
			}
	}
}
