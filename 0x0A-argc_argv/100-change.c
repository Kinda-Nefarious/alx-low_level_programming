#include "main.h"

/**
 * main - Prints the minimum number of coins
 * to make change for an amount of money
 * @argc: Length of argv
 * @argv: Number of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int position = 0, total = 0, change = 0, aux = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");

		return (0);
	}

	while (coins[position] != '\0')
	{
		if (total >= coins[position])
		{
			aux = (total / coins[position]);
			change += aux;
			total -= coins[position] * aux;
		}

		position++;
	}

	printf("%d\n", change);
	return (0);
}
