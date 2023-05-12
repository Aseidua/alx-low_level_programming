#include "main.h"
/**
 * _memcpy - fills memory with another buffer
 * @dest: source string stored
 * @src: string for filling is copied
 * @n: lenght of buffer
 * Return: new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int max = 0;

	while (max < n)
	{
		*(dest + max) = *(src + max);
		max++;
	}
	return (dest);
}
