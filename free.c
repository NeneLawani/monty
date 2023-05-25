#include "monty.h"

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
