#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, numby;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numby = atoi(argv[1]);

	if (numby < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < numby; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != numby - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
