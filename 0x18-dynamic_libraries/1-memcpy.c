#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: memory area to copy to
 *@src: memory area to copy from
 *@n: number of bytes to be copied
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	int t = 0;
	int i = n;

	for (; t < i; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}

