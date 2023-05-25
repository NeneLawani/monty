#include "monty.h"

/**
 * pchar - a function which prints the char at the top of the stack, followed
 * by a new line
 * @stack: a double pointer to the stack linked list
 * @line_number: the line number in the file
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	int value;

	if (!(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	value = (*stack)->n;

	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", (char)value);
}
