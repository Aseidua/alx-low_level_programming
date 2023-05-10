#include "main.h"

/**
 * _pow_recursion - A function that return the value of x raise to the power y
 * @x: Integer or base of the function.
 * @y: The exponent value of the function
 *
 * Return: Always success.
 * On error, return -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
