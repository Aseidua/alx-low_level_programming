#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - A function that creates an array of integers
 * @min: value defined in main
 * @max: integer value defined in main
 * Return: Always success
 */

int *array_range(int min, int max)
{
	int *m;
	int a;

	if (min > max)
	{
		return (NULL);
	}
	m = malloc((max - min + 1) * sizeof(int));
	if (m == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= (max - min); a++)
	{
		m[a] = min + a;
	}
	return (m);
}
