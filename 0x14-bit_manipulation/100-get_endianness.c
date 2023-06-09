#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: succes value indicated
 */
int get_endianness(void)
{
	unsigned int u = 1;
	char *c = (char *) &u;

	if (*c)
		return (1);
	else
		return (0);
}
