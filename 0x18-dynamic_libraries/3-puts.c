#include "main.h"

/**
 *_puts - Prints a stirng followed by a new line to standard output
 *@str: string to print
 *Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
