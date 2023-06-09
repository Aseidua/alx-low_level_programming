#include "main.h"
/**
 * flip_bits - returns the number of bits
 * @n: number of 1bites
 * @m: number of sec bite
 * Return: success value number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ui;

	for (ui = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			ui++;
		}
	}
	return (ui);
}
