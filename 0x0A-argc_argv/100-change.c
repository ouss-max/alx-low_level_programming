#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for a given amount
 * @argc: number of command line input arguments
 * @argv: array that contains the program command line typed arguments
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int centimes, coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
		centimes = atoi(argv[1]);
		while (centimes > 0)
	{
		if (centimes >= 25)
			centimes -= 25;
		else if (centimes >= 10)
			centimes -= 10;
		else if (centimes >= 5)
			centimes -= 5;
		else if (centimes >= 2)
			centimes -= 2;
		else if (centimes >= 1)
			centimes -= 1;
		coins += 1;
		}
	printf("%d\n", coins);
	return (0);
}
