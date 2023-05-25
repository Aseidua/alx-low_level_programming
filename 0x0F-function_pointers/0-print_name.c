#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - A function that prints a name
 * @name: A pointer to a character array or string,representing
 *the name that will be printed
 * @f: A pointer to a function that takes a pointer to a character array
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
