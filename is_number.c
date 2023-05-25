#include "monty.h"

int is_number(char *n)
{
	int i = 0;

	if (!n)
		return (0);

	for (; n[i]; i++)
	{
		if (n[i] < 48 && n[i] > 57)
			return (0);
	}

	return (1);
}
