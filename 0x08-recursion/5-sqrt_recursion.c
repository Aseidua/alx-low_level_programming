#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root of n.
 * @n: integer
 * Return: Always
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - to find the square root
 * @n: int to find square root
 * @max: squaure root.
 * Return: Always
 */
int square(int n, int max)
{

	if (max * max == n)
	{
		return (max);
	}
	else if (max * max < n)
	{
		return (square(n, max + 1));
	}
	else
	{
		return (-1);
	}

}
