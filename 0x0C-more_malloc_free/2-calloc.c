#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - A function that allocates a memory for an array
 * @nmemb:integer size of memory space to save
 * @size: integer size type
 * Return: Always success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	x = malloc(size * nmemb);
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		x[i] = '\0';
	}
	return (x);
}
