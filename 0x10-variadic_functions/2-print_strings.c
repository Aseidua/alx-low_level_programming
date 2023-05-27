#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of arguments
 *
 * Return: not printed if NULL, otherwise (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list max;
	char *str;
	unsigned int m;

	va_start(max, n);

	for (m = 0; m < n; m++)
	{
		str = va_arg(max, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (m != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(max);
}

