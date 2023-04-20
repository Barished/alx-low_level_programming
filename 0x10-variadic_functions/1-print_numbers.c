#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: Variable number of arguments.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	unsigned int a;

	va_start(numbs, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(numbs, int));
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbs);
}
