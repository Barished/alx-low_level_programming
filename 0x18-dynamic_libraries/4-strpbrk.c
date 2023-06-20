#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: the string where first occurence is to be located
 * @accept: string containing the bytes to be matched
 *
 * Return: Apointer to the byte in s the matches one of the bytes
 * in accept or NULL.
 */

char *_strpbrk(char *s, char *accept)

{
	int w;

	while (*s)
	{
		for (w = 0; accept[w]; w++)
		{
			if (*s == accept[w])
				return (s);
		}
		s++;
	}
	return ('\0');
}

