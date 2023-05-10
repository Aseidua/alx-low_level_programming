#include "main.h"

/**
 * _puts_recursion - Prints a function string, followed by a new line.
 * @s: Is a string
 * Return: Always successful
 */

void _puts_recursion(char *s)
{

	if (*s == 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

}
