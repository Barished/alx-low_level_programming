#include "main.h"

/**
 * _strspn - A funtion that gets the length of a prefix substring
 * @s: the string
 * @accept: memory location to be condidered to be considered
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int n = 0;
	int q;

	while (*s)
	{
		for (q = 0; accept[q]; q++)
		{
			if (*s == accept[q])
			{
				n++;
				break;
			}
			else if (accept[q + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

