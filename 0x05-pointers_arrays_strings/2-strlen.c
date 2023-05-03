#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 *
 * @s:The input string
 *
 * Return: Lenngth of the string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
