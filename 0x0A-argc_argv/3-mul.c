#include <stdio.h>
#include "main.h"

/**
 *_atoi - converts an array of stirng to interger
 *@s: string
 *
 *Return: the integer value of the string after conversion
 */
int _atoi(char *s)
{
	int a, b, c, d, e, f;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;

	while (s[a] != '\0')
		a++;
	while (b < a && c == 0)
	{
		if (s[b] == '-')
			++d;
		if (s[b] >= '0' && s[b] <= '9')
		{
			f = s[b] - '0';
			if (d % 2)
				f = -f;
			e = e * 10 + f;
			c = 1;
			if (s[b + 1] < '0' || s[b + 1] > '9')
				break;
			c = 0;
		}
		b++;
	}
	if (c == 0)
		return (0);
	return (e);
}

/**
 *main - A program that multiplies two numbers
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: Always 0 (Success) or 1 and print Error followed by a new line
 *if the program does not recieve and arguments
 */

int main(int argc, char *argv[])
{
	int product, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);

	product = a * b;
	printf("%d\n", product);
	return (0);
}
