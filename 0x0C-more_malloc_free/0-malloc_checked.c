#include "main.h"
#include <stdlib.h>

/**
 **malloc_checked - Allocates memory using malloc
 *@b: the integer to allocate memory
 *
 *Return: Pointer to the allocated memory else exit (98)
 */

void *malloc_checked(unsigned int b)
{
	void *tree;

	tree = malloc(b);

	if (tree == NULL)
		exit(98);

	return (tree);
}
