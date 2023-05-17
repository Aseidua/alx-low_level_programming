#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * count - counts the number of words in a string
 * @s: string
 * Return: int number of words
 */

int count(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
			{
				n++;
			}
		}
		else if (i == 0)
		{
			n++;
		}
	}
	n++;
	return (n);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	int m, j, k, l, n = 0, c = 0;
	char **x;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = count(str);
	if (n == 1)
		return (NULL);
	x = (char **)malloc(n * sizeof(char *));
	if (x == NULL)
		return (NULL);
	x[n - 1] = NULL;
	m = 0;
	while (str[m])
	{
		if (str[m] != ' ' && (m == 0 || str[m - 1] == ' '))
		{
			for (j = 1; str[m + j] != ' ' && str[m + j]; j++)
				;
			j++;
			x[c] = (char *)malloc(j * sizeof(char));
			j--;
			if (x[c] == NULL)
			{
				for (k = 0; k < c; k++)
					free(x[k]);
				free(x[n - 1]);
				free(x);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				x[c][l] = str[m + l];
			x[c][l] = '\0';
			c++;
			m += j;
		}
		else
			m++;
	}
	return (x);
}
