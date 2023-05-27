#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - prints the sum
 * @n: The number of paramters
 * @...: A variable number of arguments
 *
 * Return: 0 If n == 0, Otherwise the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list max;
	unsigned int m, sum = 0;

	va_start(max, n);

	for (m = 0; m < n; m++)
		sum += va_arg(max, int);

	va_end(max);

	return (sum);
}

