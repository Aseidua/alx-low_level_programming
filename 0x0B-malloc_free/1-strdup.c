#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -function returns a pointer to a new string
 *which is a duplicate of the string str.
 * @str: string of charas
 * Return: Always successful
 */

char *_strdup(char *str)
{
	char *s;
	int i, size;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
		;
	s = malloc((sizeof(char) * size) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
