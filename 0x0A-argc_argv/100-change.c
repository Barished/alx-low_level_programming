#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - prints the minimum number of coins to make
 *change for an amount of money
 *@argc: argument count
 *@argv: argumrnt vector
 *
 *Return: Always 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int no, a, out;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

no = atoi(argv[1]);
out = 0;

if (no < 0)
{
	printf("0\n");
	return (0);
}
for (a = 0; a < 5 && no >= 0; a++)
{
	while (no >= coins[a])
	{
	out++;
	no -= coins[a];
	}
}
printf("%d\n", out);
return (0);
}
