#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *septor = "";

	va_list anything;

	va_start(anything, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", septor, va_arg(anything, int));
					break;
				case 'i':
					printf("%s%d", septor, va_arg(anything, int));
					break;
				case 'f':
					printf("%s%f", septor, va_arg(anything, double));
					break;
				case 's':
					str = va_arg(anything, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", septor, str);
					break;
				default:
					i++;
					continue;
			}
			septor = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(anything);
}


