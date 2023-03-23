#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9
 * followed by a new line
 * ommitting 2 and 4
 * Return: no return
 */

void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
		}
		_putchar('\n');
}
