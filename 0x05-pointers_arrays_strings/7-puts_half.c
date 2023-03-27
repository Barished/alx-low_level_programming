#include "main.h"

/**
 *puts_half - Prints half of a string followed by a new line
 *@str: string
 *Return: nothing
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		_putchar(*(str + i));
	_putchar(10);
}

/**
 *_strlen - returns the length of a string
 *@s: string
 *Return: the length of the given string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
