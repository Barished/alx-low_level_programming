#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concanates two strings
 * @s1: first string
 * @s2: second string
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = b = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[b] != '\0')
		b++;
	conct = malloc(sizeof(char) * (i + b + 1));
	if (conct == NULL)
		return (NULL);
	i = b = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[b] != '\0')
	{
		conct[i] = s2[b];
		i++, b++;
	}
	conct[i] = '\0';
	return (conct);
}
