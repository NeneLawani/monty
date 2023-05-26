#include "monty.h"

/**
 * main - main function
 * @ac: argument count
 * @av: argument variable
 *
 * Return: always 0 success
 */
int main(int ac, char **av)
{
	FILE *file;
	int line_number = 1;
	char line[256], *comment;
	stack_t *stack = NULL;

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
		comment = strchr(line, '#');
		if (comment != NULL)
		{
			line_number++;
			continue;
		}
		else
		{
			exec_inst(line, line_number, &stack, file);
			line_number++;
		}
	}
	free_nodes(stack);
	fclose(file);
	return (0);
}
