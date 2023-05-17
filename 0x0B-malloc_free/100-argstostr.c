#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - A function that concatenates all the arguments of a program
 * @ac: an argument counts to a program
 * @av: a pointer to a single string
 * Return: Always successful
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int m, a, x, l;

	x = 0;
	l = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < ac; m++)
	{
		for (a = 0; av[m][a] != '\0'; a++)
		{
			l++;
		}
	}
	str = malloc(l * sizeof(char) + ac + 1);
	if (!str)
	{
		return (NULL);
	}
	for (m = 0; m < ac; m++)
	{
		for (a = 0; av[m][a] != '\0'; a++, x++)
		{
			str[x] = av[m][a];
		}
		str[x] = '\n';
		x++;
	}
	str[x] = '\0';
	return (str);
}
