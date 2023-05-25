#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array:A pointer to an integer array
 * @size: An integer value representing number of elements
 * @cmp: A function Pointer
 * Return: index of integer -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) == 1)
		{
			return (a);
		}
	}
	return (-1);
}
