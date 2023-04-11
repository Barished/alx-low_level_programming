#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{
	unsigned int q, c, w;

	q = 0;
	w = 0;
	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			q = 0;
		else if (q == 0)
		{
			q = 1;
			w++;
		}
	}
	return (w);
}

/**
 * **strtow - splits a string into words
 * @str: string
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **p, *big;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	p = (char **) malloc(sizeof(char *) * (words + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				big = (char *) malloc(sizeof(char) * (c + 1));
				if (big == NULL)
					return (NULL);
				while (start < end)
					*big++ = str[start++];
				*big = '\0';
				p[k] = big - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	p[k] = NULL;
	return (p);
}

