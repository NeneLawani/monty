#include "monty.h"

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *hold;

	if (*stack)
	{
		hold = *stack;
		while(hold)
		{
			printf("%d\n", hold->n);
			hold = hold->next;
		}
	}
	line_number++;

}
