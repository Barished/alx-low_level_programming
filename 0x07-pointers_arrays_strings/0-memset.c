#include "main.h"

/**
 **_memset - Fills a memory with constant byte
 *@b: the constant byte
 *@n: the number of bytes to be filled
 *@s: the pointer to the memory area
 *
 *Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}

