#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: number of command line input arguments.
 * @argv: array that contains the program command line input arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int i=0;

	for (i = 0; i < argc; ++i)
	printf("%s\n", argv[i]);
	return (0);
}
