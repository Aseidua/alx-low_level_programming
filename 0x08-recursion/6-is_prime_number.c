#include "main.h"

/**
 * check_prime - Makes it right to evaluate or prime numbers
 * @u: integer value
 * @b: number that iterates from 1 to n
 *
 *Return:Always
 * On error, return -1.
 */
int check_prime(int u, int b)
{
	if (u == b)
		return (1);
	else if (u % b == 0)
		return (0);
	return (check_prime(u, b + 1));
}
/**
 * is_prime_number - checks if its a prime number
 * @n: integer value
 *
 * Return: On success 1.
 * On error, return -1.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
