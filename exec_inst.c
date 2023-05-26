#include "monty.h"

/**
 * exec_inst - execute instructions
 * @line: Read line from file
 * @line_number: current line number
 * @stack: head of stack
 * @fl: file pointer
 */
void exec_inst(char *line, unsigned int line_number, stack_t **stack, FILE *fl)
{
	int i;
	char *token;
	instruction_t ins_set[] = {
		{"pall", pall}, {"push", push}, {"pint", pint}, {"sub", sub},
		{"pop", pop}, {"swap", swap}, {"add", add}, {"nop", nop},
		{"div", divide}, {"mul", mul}, {"mod", mod}, {"pchar", pchar},
		{"pstr", pstr}, {"rotl", rotl}, {"rotr", rotr},
		{NULL, NULL}
	};

	token = strtok(line, " \t\n");
	for (i = 0; ins_set[i].opcode != NULL && token; i++)
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
				push_error(stack, fl, line_number);
			}
			else
			{
				ins_set[i].f(stack, line_number);
				break;
			}
		}
	}
	if (!ins_set[i].opcode)
		opcode_error(stack, fl, line_number, token);
}
