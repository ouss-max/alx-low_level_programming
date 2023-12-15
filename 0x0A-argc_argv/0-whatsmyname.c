#include <stdio.h>

/**
 * main - prints its name, followed by new line.
 * @argc: number of command line input arguments.
 * @argv: array that contains the program command line input arguments.
 * Return: 0 = success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
