#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * list_len - Returns the number of elements in a linked list
 * @h: name of the list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;


	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
