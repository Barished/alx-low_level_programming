#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: array
 * @size: size of matrix
 *
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)

{
	int i, j, y;

	i = 0;
	j = 0;

	for (y = 0; y < size; y++)
	{
		i = i + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		j += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", i, j);
}
