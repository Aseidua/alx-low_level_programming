#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list figure;
	unsigned int i;

	va_start(figure, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(figure, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(figure);
}

