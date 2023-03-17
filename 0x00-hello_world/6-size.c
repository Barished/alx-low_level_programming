#include <stdio.h>

/**
 * main - A program that prints the size of various computer data types
 * Return: 0 (Success)
 */

int main(void)

{
	printf("size of a char: %i byte(s)\n", (unsigned long)sizeof(char));
	printf("size of a int: %i byte(s)\n", (unsigned long)sizeof(int));
	printf("size of a long int: %i byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of a long long: %i byte(s)\n", (unsigned long)sizeof(long long));
	printf("size of a float: %i byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
