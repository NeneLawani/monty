#include "monty.h"

/**
 * free_nodes - a function which frees nodes created for linked lists
 * @stack: linked list representing a stack
 */

void free_nodes(stack_t *stack)
{
	stack_t *current, *next;

	current = stack;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
