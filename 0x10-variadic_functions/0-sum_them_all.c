#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: variable no of arguments
 *
 * Return:0 If n == 0
 * Otherwise - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i, sum = 0;

	va_start(add, n);
	for (i = 0; i < n; i++)
		sum += va_arg(add, int);
	va_end(add);
	return (sum);
}
