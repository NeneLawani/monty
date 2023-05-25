#include "monty.h"
int value;

int main(int ac, char **av)
{
	FILE *file;
	int i;
	char line[256], *token;
	stack_t *stack = NULL;
	instruction_t ins_set[] = {{"pall", pall},{"push", push},{NULL,NULL}};

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(av[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, sizeof(line), file))
	{
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
						ins_set[i].f(&stack, 10);
						break;
					}
				}
				else
				{
					ins_set[i].f(&stack, 10);
					break;
				}
			}
		}
	}
	free_nodes(stack);
	fclose(file);
	return (0);
}
