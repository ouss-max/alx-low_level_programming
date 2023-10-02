#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies of two numbers
 * @argc: number of command line input arguments.
 * @argv: array that contains the program input command line arguments.
 * Return: 0 = success.
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
