#include "main.h"

/**
 * leet - encodes a string into 1337
 * @u: string to encode
 *
 * Return: address of u
 */
char *leet(char *u)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(u + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == u[i])
				u[i] = b[j];
		}
	}
	return (u);
}
