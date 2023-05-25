#include "monty.h"

/**
 * is_number - a function which checks if a command argument is an integer
 * @n: the command argument
 *
 * Return: returns 1 if argument is a number, returns 0 otherwise
 */

int is_number(char *n)
{
	int i = 0;

	if (!n)
		return (0);

	if (n[0] == '-')
	{
		if (!n[1])
			return (0);
		i = 1;
	}

	for (; n[i]; i++)
	{
		if (n[i] < 48 || n[i] > 57)
			return (0);
	}

	return (1);
}
