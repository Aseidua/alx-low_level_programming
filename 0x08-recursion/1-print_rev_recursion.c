#include "main.h"

/**
 * _print_rev_recursion - Prints a function that prints sting in reverse.
 * @s: String
 * Return: Always Sucess
 */

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
