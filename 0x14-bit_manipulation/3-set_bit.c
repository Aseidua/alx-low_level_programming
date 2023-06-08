#include "main.h"

/**
 * set_bit - Sets the value of a bit to value indicated
 * @n: A pointer to the number to modify
 * @index: The index value of the bit
 *
 * Return:success value of 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ui;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	ui = 1UL << index;

	(*n) |= ui;

	return (1);
}
