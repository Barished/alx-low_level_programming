#include "main.h"

/**
 * _isdigit - checks if the parameter is a number between
 * @c: input number
 * Return:1 if the number (0 to 9), 0 in other case
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
