#include "main.h"
#include <stdio.h>

/**
 *print_array - Prints n elements of an array of integers followed
 *by a new line
 *@a: array
 *@n: number of elements of the array to be printed
 *Return: nothing
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
		printf("%d, ", a[inc]);
	else
		printf("%d", a[inc]);
	}
	putchar(10);
}
