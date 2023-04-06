#include "main.h"

int actual_prime(int n, int j);

/**
 * is_prime_number - This function detects a prime number
 * @n: any given number
 *
 * Return: 1 if n is a prime number or 0 if it is not
 */

int is_prime_number(int n)

{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: any given number
 * @j: iterator
 *
 * Return: 1 if n is prime or 0 if it is not
 */

int actual_prime(int n, int j)

{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (actual_prime(n, j - 1));
}
