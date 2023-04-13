#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array of nmemb elements
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	l = nmemb * size;
	ptr = malloc(l);

	if (ptr == NULL)
		return (NULL);
	while (i < l)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
