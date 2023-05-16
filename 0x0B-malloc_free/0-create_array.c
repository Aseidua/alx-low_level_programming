#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - allocate space for an array memory
 * @size:unssigned integer for an array
 * @c:an array of chars
 * Return:Always successful
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(sizeof(char) * size);
	if (size == 0 || !p)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		p[i] = c;
	}
	return (p);
}
