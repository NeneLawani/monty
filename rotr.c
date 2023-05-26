#include "monty.h"

/**
 * rotr - a function which rotates the stack to the bottom
 * @stack: a double pointer to the stack linked list
 * @line_number: the line number in the file
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack, *hold;
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

	while (temp->next)
		temp = temp->next;

	temp->next = *stack;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*stack)->prev = temp;
	*stack = temp;
}
