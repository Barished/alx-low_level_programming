#include <stdio.h>

/**
 * main - A program that prints the size of various computer data types
 * Return: 0 (Success)
 */

int main(void)

{
	printf("size of char: %i byte(s)\n", (unsigned long)sizeof(char));
	printf("size of int: %i byte(s)\n", (unsigned long)sizeof(int));
	printf("size of long int: %i byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of long long: %i byte(s)\n", (unsigned long)sizeof(long long));
	printf("size of float: %i byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
