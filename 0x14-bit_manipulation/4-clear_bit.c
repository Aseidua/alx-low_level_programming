#include "main.h"

/**
 * clear_bit - Set value of a bit
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return:success value of 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ui;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	ui = 1UL << index;

	ui = ~ui;

	*n &= ui;

	return (1);
}
