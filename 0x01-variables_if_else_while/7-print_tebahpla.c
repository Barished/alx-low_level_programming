#include <stdio.h>

/**
 * main - Prints the lower case alphabets in reverse folllowed by a new line
 * Return:0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch > 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
