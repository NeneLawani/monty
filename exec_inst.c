#include "monty.h"

/**
 * exec_inst - execute instructions
 * @line: Read line from file
 * @line_number: current line number
 * @stack: head of stack
 *
 */
void exec_inst(char *line, unsigned int line_number, stack_t **stack)
{
	int i;
	char *token;
	instruction_t ins_set[] = {
		{"pall", pall},
		{"push", push},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{NULL, NULL}
	};

	token = strtok(line, " \t\n");
	for (i = 0; ins_set[i].opcode != NULL; i++)
	{
		if (!(strcmp(token, ins_set[i].opcode)))
		{
			if (!(strcmp("push", token)))
			{
				token = strtok(NULL, " \t\n");
				if (is_number(token))
				{
					value = atoi(token);
					ins_set[i].f(stack, line_number);
					break;
				}
				fprintf(stderr, "L%d: usage: push integer\n", line_number);
				exit(EXIT_FAILURE);
			}
			else
			{
				ins_set[i].f(stack, line_number);
				break;
			}
		}
	}
	if (!ins_set[i].opcode)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
		exit(EXIT_FAILURE);
	}
}
