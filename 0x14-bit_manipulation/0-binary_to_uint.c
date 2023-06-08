#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary number
 * @b: A pointer to a string
 *
 * Return: unsigned int ui
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		ui <<= 1;
		if (b[i] == '1')
			ui += 1;
	}

	return (ui);
}

