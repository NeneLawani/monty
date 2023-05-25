#include "monty.h"

/**
 * push_error - erroe handling for push
 * @stack: pointer to head of stack
 * @file: pointer to file
 * @ln: line number
 */
void push_error(stack_t **stack, FILE *file, unsigned int ln)
{
	fprintf(stderr, "L%d: usage: push integer\n", ln);
	free_nodes(*stack);
	fclose(file);
	exit(EXIT_FAILURE);
}

/**
 * opcode_error - error handling for unkown opcodes
 * @stack: pointer to head of stack
 * @file: pointer to file
 * @ln: line number
 * @tkn: token
 */
void opcode_error(stack_t **stack, FILE *file, unsigned int ln, char *tkn)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", ln, tkn);
	free_nodes(*stack);
	fclose(file);
	exit(EXIT_FAILURE);
}

