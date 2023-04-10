#include "main.h"

/**
 * _isupper - checks if parameter is an upper case character
 * @c: input chacracter
 * Return:1 if is an uppercase character, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
