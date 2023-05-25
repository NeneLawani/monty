#include "monty.h"

/**
 * push - a function which pushes an element to the stack
 * @stack: a double pointer to the stack linked list
 * @line_number: the line number in the file
 */

void push(stack_t **stack, unsigned int line_number)
{
	/* Get value as a string from input */
	char *value_str = strtok(NULL, " \t\n");
	int push_value;
	stack_t *hold;

	if (!value_str)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* Convert value_str to an integer using atoi */
	push_value = atoi(value_str);

	hold = malloc(sizeof(stack_t));

	if (!hold)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	if (*stack)
		(*stack)->prev = hold;
	hold->n = push_value;
	hold->next = *stack;
	hold->prev = NULL;
	*stack = hold;
	line_number++;
}
