#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all argument of the program
 * @ac: int input
 * @av: double pointer array
 * Return: Always 0 (Success)
 */

char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;
	p = malloc(sizeof(char) * l + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			p[r] = av[i][n];
			r++;
		}
		if (p[r] == '\0')
		{
			p[r++] = '\n';
		}
	}
	return (p);
}
