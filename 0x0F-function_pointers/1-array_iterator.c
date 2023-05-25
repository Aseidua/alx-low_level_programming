#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: A pointer to an integer array int
 * @size: value of type representing the size of array
 * @action: A function pointer
 *
 * Return: always success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int u;

	if ((*action) != NULL && array != NULL)
		for (u = 0; u < size; u++)
			(*action)(array[u]);
}
