#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: is string one
 * @s2: for string two
 * Return: Always success
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int m, a, x, l;
	char *s;

	if (s1 == NULL)
	{
		m = 0;
	}
	else
	{
		for (m = 0; s1[m]; m++)
			;
	}
	if (s2 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s2[a]; a++)
			;
	}
	x = m + a + 1;
	s = malloc(x * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < m; l++)
	{
		s[l] = s1[l];
	}
	for (l = 0; l < a; l++)
	{
		s[l + m] = s2[l];
	}
	s[m + a] = '\0';
	return (s);
}
