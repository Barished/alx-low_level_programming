#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *check_num - check - string that are digits
 *@str: array str
 *
 *Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int ball;

	ball = 0;
	while (ball < strlen(str))
	{
		if (!isdigit(str[ball]))
		{
			return (0);
		}
		ball++;
	}
	return (1);
}

/**
 *main - Program the adds positive numbers
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int ball;
	int str;
	int sum = 0;

	ball = 1;
	while (ball < argc)
	{
		if (check_num(argv[ball]))
		{
			str = atoi(argv[ball]);
					sum += str;
					}
					else
					{
					printf("Error\n");
					return (1);
					}
					ball++;
					}
					printf("%d\n", sum);
					return (0);
					}
