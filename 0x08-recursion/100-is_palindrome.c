#include "main.h"

int check_pal(char *s, int i, int p);
int _strlen_recursion(char *s);

/**
 * is_palindrome - this function finds out if a string is a palindrome
 * @s: the string
 *
 * Return: 1 if it is or 0 if it's not
 */

int is_palindrome(char *s)

{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - this function returns the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: the string
 * @i: iterator
 * @p: length of the string
 *
 * Return: 1 if palindrome or 0 if it is not
 */

int check_pal(char *s, int i, int p)
{
	if (*(s + i) != *(s + p - 1))
		return (0);
	if (i >= p)
		return (1);
	return (check_pal(s, i + 1, p - 1));
}
