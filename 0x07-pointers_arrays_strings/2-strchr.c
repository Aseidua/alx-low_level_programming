#include "main.h"
/**
 * _strchr - prints from the first occurrence of a char
 * @s: input source string
 * @c: input tested char
 *
 * Return: new string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
