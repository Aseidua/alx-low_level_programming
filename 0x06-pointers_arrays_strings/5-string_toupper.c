#include "main.h"

/**
 * string_toupper - Change lowercase to uppercase
 * @u:string
 * Return:char
 */
char *string_toupper(char *u)
{

	int b;

b = 0;
	while (*(u + b))
	{
		if (*(u + b) >= 'a' && *(u + b) <= 'z')
			*(u + b) -= 'a' - 'A';
		b++;
	}
	return (u);
}
