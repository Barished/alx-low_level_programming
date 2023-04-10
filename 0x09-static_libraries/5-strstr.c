#include "main.h"
/**
 * *_strstr - Finds the first occurence of the substring
 *needle in the string haystack
 * @haystack: the string to be searched
 * @needle: the substring
 * Return: A pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)

{
	for (; *haystack != '\0'; haystack++)
	{
		char *t = haystack;
		char *b = needle;

		while (*t == *b && *b != '\0')
		{
			t++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (0);
}

