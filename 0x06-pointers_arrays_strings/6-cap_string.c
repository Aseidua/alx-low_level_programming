#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @u: string
 * Return: address of u
 */
char *cap_string(char *u)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(u + i))
	{
		if (*(u + i) >= 'a' && *(u + i) <= 'z')
		{
			if (i == 0)
				*(u + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(u + i - 1))
						*(u + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (u);
}
