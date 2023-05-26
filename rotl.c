#include "monty.h"

/**
 * rotl - a function which rotates the stack to the top
 * @stack: a double pointer to the stack linked list
 * @line_number: the line number in the file
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second, *hold;
	int i = 0;

	(void) line_number;
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
		return;

	first = *stack;
	second = (*stack)->next;
	second->prev = NULL;

	while (first->next != NULL)
		first = first->next;

	first->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = first;
	*stack = second;
}
